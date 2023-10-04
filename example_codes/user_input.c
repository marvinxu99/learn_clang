#include <stdio.h>
#include <limits.h>
#include <assert.h>


int mygetline(char *buf, size_t size);


int main() {

    // Create an integer variable that will store the number we get from the user
    int myNum;

    // Ask the user to type a number
    printf("Type a number: \n");

    // Get and save the number the user types
    scanf("%d", &myNum);

    // Output the number the user typed
    printf("Your number is: %d\n", myNum);


    /* Multiple inputs */
    char myChar;

    // Ask the user to type a number AND a character
    printf("Type a number AND a character and press enter: \n");

    // Get and save the number AND character the user types
    scanf("%d %c", &myNum, &myChar);

    // Print the number
    printf("Your number is: %d\n", myNum);

    // Print the character
    printf("Your character is: %c\n", myChar);

    /* String input */
    // Create a string
    char firstName[30];

    // Ask the user to input some text
    printf("Enter your first name: \n");

    // Get and save the text
    scanf("%s", firstName);      // do not have to use the reference operatir &

    // Output the text
    printf("Hello %s\n", firstName);

    /* using fgets to get multi words */
    char fullName[30];

    fflush(stdin);

    printf("Type your full name: \n");
    
    fgets(fullName, sizeof(fullName), stdin);
    //mygetline(fullName, 30);

    printf("Hello %s\n", fullName);

    // Type your full name: John Doe
    // Hello John Doe
}

int mygetline(char *buf, size_t size) {
 
  assert(size > 0 && size <= INT_MAX);
 
  size_t i = 0;
  int ch;
  while ((ch = fgetc(stdin)) != EOF) {  // Read until EOF ...
    if (i + 1 < size) {
      buf[i++] = ch;
    }
    if (ch == '\n') {  // ... or end of line
      break;  
    }
    printf("%d", ch);
  } 
  buf[i] = '\0';
  if (i == 0) { 
    return EOF;
  }
  return i;
}