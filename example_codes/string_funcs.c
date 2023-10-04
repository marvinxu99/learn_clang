#include <stdio.h>
#include <string.h>

int main() {

    // string in c
    char greetings[] = "Hello World!";
    greetings[0] = 'J';
    printf("%s, its lenght is %d \n\n", greetings, sizeof(greetings));

    char greetings2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    char greetings3[] = "Hello World!";

    printf("%lu\n", sizeof(greetings2));   // Outputs 13
    printf("%lu\n", sizeof(greetings3));  // Outputs 13

    // **strlen() = string length
    printf("strin length = %d\n", strlen(greetings2));   // Outputs 12

    // sizeof returns the memory size in bytes
    char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("string length = %d\n", strlen(alphabet));   // 26
    printf("size of string = %d\n", sizeof(alphabet));   // 50
    
    // **strcat() - concatenate strings
    char str1[20] = "Hello ";
    char str2[] = "World!";

    // Concatenate str2 to str1 (result is stored in str1)
    strcat(str1, str2);

    // Print str1
    printf("%s\n", str1);
    /* Note that the size of str1 should be large enough to store the result of the two strings combined (20 in our example). */

    // ** strcopy - copy strings
    char str3[20] = "Hello World!";
    char str4[20];

    // Copy str3 to str4
    strcpy(str4, str3);

    // Print str2
    printf("%s\n", str4);

    // ** strcmp()
    // It returns 0 if the two strings are equal, otherwise a value that is not 0:
    char str_a[] = "Hello";
    char str_b[] = "Hello";
    char str_c[] = "Hi";

    // Compare str1 and str2, and print the result
    printf("%d\n", strcmp(str_a, str_b));  // Returns 0 (the strings are equal)

    // Compare str1 and str3, and print the result
    printf("%d\n", strcmp(str_a, str_c));  // Returns -1 (the strings are not equal)

   // Compare str1 and str3, and print the result
    printf("%d\n", strcmp(str_c, str_a));  // Returns 1 (the strings are not equal)

}
