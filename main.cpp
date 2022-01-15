#include <iostream>

// Data Types in C++; source: https://www.cplusplus.com/doc/tutorial/variables/

// Character Types
char        var001; // = 1 byte; at least 8 bits
char16_t    var002; // >char; at least 16 bits
char32_t    var003; // >char16_t; at least 32 bits
wchar_t     var004; // largest set supported on the platform

// Integer types - Signed
signed char var005; //  same rules apply as in character types
short       var006;
int         var007;
long        var008;
long long   var009; // >long; at least 64 bits

// Integer types - Unsigned
unsigned char       var010; // identical size to their signed counterparts
unsigned short      var011;
unsigned            var012;
unsigned long       var013;
unsigned long long  var014;

// Floating point types
float       var015;
double      var016;
long double var017;

bool                var018; // only 0 (false) or 1 (true) 
void                var019; // uses no storage
decltype(nullptr)   var020; // value is a 'null pointer' constant, meaning that a pointer does not point to a valid object/function/whatever


int main(){

    std::cout << "Hello Bojane, Jabuko!" << std::endl;

    return 0;
}