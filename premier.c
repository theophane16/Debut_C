#include <stdio.h>
#include <stdbool.h>    // si on veut utiliser des booléens
#include <string.h>     // si on veut utiliser des strings
#include <math.h>      // pour utiliser des fonctions mathematiques
#include <ctype.h>
#include <stdlib.h>     // 1er pour nb aléatoires
#include <time.h>       // 2eme pour nb aléatoires


//////////////// functions + arguments + return statement //////////////////////
void birthday(char name[], int age)
{
    printf("\nHapy birthday dear %s", name);
    printf("\nYou are %d years old", age);
}

double square(double x){
    return x * x;
}

int findMax(int x, int y){
    return (x > y) ? x : y;             // Donc : si x est supérieur à y --> on retourne x, sinon on retourne y
}

void sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[i])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d",array[i]);
    }
    
}



//////////////// function prototype //////////////////////
void hello(char[],int);                     // --> ici on previent le programme que l'on va définir cette méthode (après le main), si l'on veut l'appeler on peut mais il faudra respecter le type des arguments
                                            // POINT IMPORTANT : Many compilers do not check the parameter matching // Missing argument will result in unexpected behavior // A function prototype causes the compiler to flag if arguments are missing
                                            // ADVANTAGES --> Easier to  navigate a program // Helps with debugging // Commonly used in header files


//////////////// structs //////////////////////
    struct Player
    {
        char name[12];
        int score;
    };
    
//////////////// typedef //////////////////////
    typedef struct 
    {
        char name[25];
        char password[12];
        int id;
    } User;
    

//////////////// enums //////////////////////
    enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};









////////////////////////////////////////////
//////////////// MAIN //////////////////////
////////////////////////////////////////////


int main(){

    // Commentaire (comme en Java)
    /* Commentaire aussi */
    /* escape sequence : 
        \n = newline
        \t = tab
    */

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
    // switch = more efficient alternative to using many "else-if" statements
                // allow a value to be tested for equality against many cases
    
    char grade;
    printf("\nEnter a letter Grade");
    scanf("%c",&grade);
    
    switch (grade)
    {
    case 'A' :
        printf("Good");
        break;                  // si il n'y a pas de break on continue les autres possibilités
    case 'B' :
        printf("not Bad");
        break;
    default:
        printf("Plz enter a good value");
        break;
    }

//////////////// temperature conversion program //////////////////////
    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C): ?");
    scanf("%c",&unit);

    unit = toupper(unit);       // Pour gérer le problème de casse

    if(unit == 'C'){
        printf("\nEnter the temp in Celsius");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temp in Farenheit is: %.1f", temp);
    }
    else if (unit == 'F'){
        printf("\nEnter the temp in Farenheit");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temp in Celsius is: %.1f", temp);
    } else {
        printf("\n %c is not a valid unit of measurement", unit);
    }

//////////////// calculator program //////////////////////
    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator (+ - * /):");
    scanf("%c", &operator);

    printf("\nEnter number 1");
    scanf("%c", &num1);

    printf("\nEnter number 2");
    scanf("%c", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("\nresult: %lf", result);
        break;
    case '-':
        result = num1 - num2;
        printf("\nresult: %lf", result);
        break;
    case '*':
        result = num1 * num2;
        printf("\nresult: %lf", result);
        break;
    case '/':
        result = num1 / num2;
        printf("\nresult: %lf", result);
        break;
    default:
        break;
    }

//////////////// AND logical operator //////////////////////
    // AND --> && --> two conditions are true

    float temp = 25;
    bool sunny = false;

    if(temp >= 0 && temp <= 30 && sunny){           // ici sunny est un booléen --> mettre "sunny" == "sunny == true" == "sunny = 1"
        printf("\nIt's ok");
    } else {
        printf("\nIt's not");
    }

//////////////// AND logical operator //////////////////////
    // OR --> || --> checks if at least one condition is true

    float temp = 25;

    if(temp >= 0 || temp >= 30){
        printf("\nIt's ok");
    } else {
        printf("\nIt's not");
    }

//////////////// NOT logical operator //////////////////////
    // NOT --> ! --> reverse the state of the condition

    bool sunny = false;

    if(!sunny){
        printf("\nIt's not ok");
    } else {
        printf("\nIt's ok");
    }

//////////////// functions + arguments + return statement //////////////////////
    char name[] = "BROOO";
    int age = 21;
    birthday(name, age);     // appel de la fonction

    double x = square(3.14);
    printf("%lf",x);

//////////////// ternary operator //////////////////////
    // ternary operator = shortcut to if/else when assigning/returning a value
    // (condition) ? value if true : value if false

    int max = findMax(3, 4);

    printf("%d", max);

//////////////// string functions //////////////////////
    char string1[] = "Super";
    char string2[] = "Ninja";

    strlwr(string1);                        // converts a string to lowercase
    strupr(string1);                        // converts a string to uppercase
    strcat(string1, string2);               // appends string2 to end of string1
    strncat(string1, string2, 1);           // appends n characters from string2 to string1
    strcpy(string1, string2);               // copy string2 to string1
    strncpy(string1, string2, 3);           // copy n characters of strings2 to string1

    strset(string1, '?');                   // sets all characters of a string to a given character
    strnset(string1, 'x', 1);               // sets first n characters of a string to a given character
    strrev(string1);                        // reverses a string

    int resultat = strlen(string1);                     // returns string length as int
    int resultat = strcmp(string1, string2);            // string compare all characters
    int resultat = strncmp(string1, string2, 1);        // string compare n characters
    int resultat = strcmpi(string1, string2);           // string compare all (in=gnore case)
    int resultat = strnicmp(string1, string1, 1);       // string compare n characters (ignore case)

//////////////// for loops //////////////////////
    // = repeat a section of code a limited amount of times
    for (int i = 0; i <= 10; i++)                           // Pour l'incrémentation on peut aussi mettre i+=2 pour faire 2 par 2
    {
        printf("%d\n",i);
    }


//////////////// while loop //////////////////////
    // = repeat a section of code possibly unlimited times
    char name[25];
    printf("\nWhat's your name");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0)
    {
        printf("\nYou did not enter your name");
        printf("\nWhat is it ?");
        fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';
    }

    printf("\nHello %s, name");


//////////////// do while loop //////////////////////
    // always executes a block of code once, Then checks a condition

    int number = 0; 
    int sum = 0;

    do
    {
        prinf("\nEnter a # above 0:");
        scanf("%d",&number);
        if (number > 0)
        {
            sum += number;
        }
        
    } while (number > 0);

//////////////// nested loops //////////////////////
    // a loop inside another loop
    int rows;
    int colums;
    char symbol;

    for(int i = 1; i <= rows; i++){
        for (int j = 1; i <= colums; i++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

//////////////// break and continue //////////////////////
    // continue = skips rest of code & forces the next iteration of the loop
    // break = exits a loop
    for (int i = 0; i <= 20; i++)
    {
        if (i == 23)
        {
            continue;
            // ou break;        --> sors de la boucle
        }

    }

//////////////// arrays //////////////////////
    // array = a data structure that can store many values of the same data type

    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 30.0};
    printf("%.2lf", prices[2]);

    // Pour l'afficher
    for (int i = 0; i < 5; i++)
    {
       printf("%.2lf\n", prices[i]);
    }

    printf("%d bytes\n", sizeoff(prices));      // --> donne 48 bits ici

    for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)              // ici on aurait pu prendre la taille d'un autre élément
    {
        printf("&%.2lf\n", prices[i]);
    }

//////////////// 2D Arrays //////////////////////
    // 2D array = an array where each elements is an entire array --> useful if you need a matrix, grid, or table of data
    int numbers[2][3] = {
        {1, 2, 3},
        {1, 2, 3}
        };
    
    // ou

    int numbers[2][3];

    int rows = sizeof(numbers) / sizeof(numbers[0]);
    int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);


    int numbers[0][0] = 1;
    int numbers[0][1] = 1;
    int numbers[0][2] = 1;
    int numbers[1][0] = 1;
    int numbers[1][1] = 1;
    int numbers[1][2] = 1;

    // ou

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d", numbers[i][j]);
        }
        printf("\n");
    }
    

//////////////// array of strings //////////////////////
    char cars[][10] = {"Mustang","Corvette","Camaro"};                  // on peut voir ça comme un tableau de tableau de caractères
    strcpy(cars[0], "Tesla");       // --> avoir le #include <string.h>

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }

//////////////// swap values of two variables //////////////////////
    char x[15] = 'X';
    char y[15] = 'Y';
    char tempo[15];

    strcpy(tempo, x);
    strcpy(x, y);
    strcpy(y, tempo);

//////////////// sort an array //////////////////////
    int array[] = {9, 2, 9, 8, 5, 6, 4};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);                      // --> marche avec les cacractères aussi
    printArray(array, size);


//////////////// structs //////////////////////
    // struct = collection of related members ("variables"), they can be of different data types listed under one name in a block of memory --> VERY SIMILAR to classes in other languages (but NO METHODS)
    // Voir avant le main()
    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Bro");
    player1.score = 4;

    strcpy(player2.name, "Bru");
    player2.score = 5;

    printf("%s",player1.name);
    printf("%s",player1.score);

//////////////// typedef //////////////////////
    // typedef = reserved keyword that gives an existing datatype a " nickname"
    // voir avant le main
    User user1 = {"Bro", "password123", 1216548};
    User user2 = {"Bra", "password183", 1254545};


//////////////// Array of structs //////////////////////
    // on réutilise Player (dans "structs")
    struct Player player01 = { "Super", 5.0};
    struct Player player02 = { "Franky", 4.0};
    struct Player player03 = { "Sunny", 8.0};
    struct Player player04 = { "Brook", 7.0};

    struct Player players[] = {player01, player02, player03, player04};

    for (int i = 0; i < sizeof(players)/sozeof(players[0]); i++)
    {
        printf("%-12s\t", players[i].name);
        printf("%.2f\n", players[i].gpa);
    }
    
//////////////// enums //////////////////////
    // enums = a user defined type af named integer identifiers // help to make a program more readable
    // voir avant le main()
    enum Day today = Sat;

    if(today == Sun || today == Sat)                        // sert à renommer (ici au lieu d'avoir 1 et 7 on a Sun et Sat)
    {
        printf("\nIt's the weekend ! Party time");          // enums are not Strings but they can treated as int
    }
    else 
    {
        printf("I have to work today:(");
    }
    
//////////////// random numbers //////////////////////
    srand(time(0));

    int number001 = (rand() % 20) +1;           // on peut changer le nombre après le %

    printf("%d\n", number001);

//////////////// number guessing game (à faire) //////////////////////



    











    ///////////////////////////////////////////////////////////////////////////////////////////
    ////////////////// OBLIGATOIRE A LA FIN DE CHAQUE PROGRAMME ///////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////
    return 0;
}


//////////////// function prototype //////////////////////
    // ici on peut définir les fonctions complètes

