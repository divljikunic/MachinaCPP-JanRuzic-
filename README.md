# General Info

Instructor: Bojan Bilic

Course: C++ programiranje

<br>

I will add notes about lectures and homework assignments in this file, as we go along.

<br>

## Lecture 2022-01-08 

<br>

### Definition of 1 byte in C++:

**Addressable unit of data storage large enough to hold any member of the basic character set of the execution environment**

The C standard requires an *unsigned char* type to hold at least 256 different values, represented by at least 8 bits.
There must not be empty space between bytes, so every bit in the memory is part of a byte.

Historically, byte size varies on different computing systems. In practice, however, an 'octet' is now considered the norm. 1 Byte = 8 bits, range 0-7, or 7-0, depending on endianness - little, big or mixed. This depends on the CPU and/or operating system and should generally be taken care of by the compiler.

### Data types
| group     | type name | size/precision            |
| --------- | --------- | ------------------------- |
| character | *char*      | = 1 byte; at least 8 bits             |
| ...       | *char16_t*  | >char; at least 16 bits               |
| ...       | *char32_t*  | >char16_t; at least 32 bits           |
| ...       | *wchar_t*   | largest set supported on the platform |
| Integer (signed) | *signed char* | same rules apply as in character types |
| ...              | *short*       | ... |
| ...              | *int*         | ... |
| ...              | *long*        | ... |
| ...              | *long long*   | >long; at least 64 bits |
| Integer (unsigned) | *unsigned char*        | identical size to their signed counterparts |
| ...                | *unsigned short*       | ... |
| ...                | *unsigned int*         | ... |
| ...                | *unsigned long*        | ... |
| ...                | *unsigned long long*   | ... |
| Floating Point | *float*       |               |
| ...            | *double*      | +precision    |
| ...            | *long double* | ++precision   |
| Boolean | *bool*       | 0-1; true-false      |
| Void    | *void*       | no memory consumed   |
| Null pointer | 	*decltype(nullptr)*  |               |

### Sources: 

https://www.cplusplus.com/doc/tutorial/variables/

https://en.wikipedia.org/wiki/Byte

