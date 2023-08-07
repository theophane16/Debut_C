#include <stdio.h>
#include <stdbool.h>    // si on veut utiliser des booléens

// Commentaire (comme en Java)
/* Commentaire aussi */
/* escape sequence : 
    \n = newline
    \t = tab
*/

int main(){

    printf("I like pizza\n");
    printf("I like dkshdsjkq\t");
    printf("\"to put some quote in text\"");
    printf("\\to put backslash\\");


//////////////// variables //////////////////////
    int x; //declaration --> allocated space in memory
    x = 123; // initialization
    int y = 321; // declaration + initialization

    int age = 21;           // 4 bytes (- 2 147 483 648 to +2 147 483 647) --> %d                 
    unsigned int k = 21;    // 4 bytes (0 to +4 294 967 295) --> %u
    float gpa = 2.05;       // floating point number --> 4 bytes (32 bits of precision) 6 - 7 digits %f
    double d = 3.147876596; // 8 bytes (64 bbits of precision) 15 - 16 digits %lf
    char grade = 'C';       // single character --> %c
    char name[] = "Bro";    // array of characters --> %s
    bool e = true;          // 1 byte %d
    char f = 100;           // 1 byte (-127 to +127) --> %d or %c         ASCII code
    unsigned char g = 255;  // 1 byte (0 to 255) --> %d or %c
    short int h = 32767;    // 2 bytes (-32 768 to +32 767) --> %d
    short h2 = 32;          // same
    unsigned short int i = 65535;           // 2 bytes (0 to +65 535) --> %d
    long long int l = 985646546464;         // 8 bytes (-9 quintillion to +9 quintillion) --> %lld           PRECISON : ici il y a 2 "long" car il est par defaut pour un int mais pas necessaire de le mettre
    unsigned long long int m = 54564654464; // 8 bytes (+18 quintillion) --> %llu


    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %f\n",gpa);

//////////////// format specifiers //////////////////////
    // format specifier % = defines and formats a type of data to be displayed
    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align
    float item1 = 5.75;

    printf("Item1: $%.2f\n", item1);

//////////////// constant //////////////////////
    // constant = fixed value that cannot be altered by the program during its execution
    const float PI = 3.14159;
    
//////////////// arithmetic operators //////////////////////
    // + || - || * || / || % || ++ || --

    int x = 8;
    int y = 3;
    float z = x / (float) y;        // we should cast the divider
    printf("%f", z);

    x++;    // incrementation
    y--;    // decrementation

//////////////// arithmetic operators //////////////////////
// COURS 9 : 46.15
    return 0;
}