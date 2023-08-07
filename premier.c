#include <stdio.h>
#include <stdbool.h>    // si on veut utiliser des booléens
#include <string.h>     // si on veut utiliser des strings
# include <math.h>      // pour utiliser des fonctions mathematiques

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

//////////////// augmented assignment operators //////////////////////  --> shortcut
    x+=2;       // x = x+2
    x-=2;       // x = x-2
    x/=2;       // x = x / 2
    x*=3;       // x = x * 3
    x%=4;       // x = x % 4

//////////////// user input //////////////////////  
    printf("\nDonne moi ton age\n");
    scanf("%d", &age);          // ici on va demander l'age que l'utilisateur va taper et qui sera noter dans la variable age
                                // marche avec d'autres type : %s pour les char par exemple

    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

//////////////// Math functions //////////////////////
    double A = sqrt(9);         // racine carré
    double B = pow(2, 4);       // puissance
    int C = round(3.14);        // arrondir
    int D = ceil(3.14);         // arrondir à l'unité supérieur --> 4
    int E = floor(3.99);        // arrondir à l'unité inférieur --> 3
    double F = fabs(-100);      // absolute value
    double G = log(3);          // le log d'un nombre
    double H = sin(45);         // sinus
    double I = cos(45);         // cosinus
    double J = tan(45);         // tangente

//////////////// circle circumference program //////////////////////
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nEnter radius of a circle: ");
    scanf("%f", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\ncircumference: %lf", circumference);
    printf("\narea: %lf", area);

//////////////// hypotenuse calculator program //////////////////////
    double A;
    double B;
    double C;

    printf("Enter side A: ");
    scanf("%lf", &A);

    printf("Enter side B: ");
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);

    printf("Side C: %lf", C);

//////////////// if statements //////////////////////
    int age;
    printf("\nEnter yout age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("Super");
    } else if (age == 0){
        printf("Weird");
    } else if (age < 0){
        printf("Impossible");
    } else {
        printf("Sad for u");
    }

//////////////// switch statements //////////////////////
// COURS n°15 : 1:06:46


    return 0;
}