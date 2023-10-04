#include <stdio.h>

int main() {
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));

    // string in c
    char greetings[] = "Hello World!";
    greetings[0] = 'J';
    printf("%s, its lenght is %d \n\n", greetings, sizeof(greetings));

    char greetings2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    char greetings3[] = "Hello World!";

    printf("%lu\n", sizeof(greetings2));   // Outputs 13
    printf("%lu\n", sizeof(greetings3));  // Outputs 13
}

/*
Note that we use the %lu format specifer to print the result, instead of %d. 
It is because the compiler expects the sizeof operator to return a long unsigned int (%lu), 
instead of int (%d). On some computers it might work with %d, but it is safer to use %lu.
*/