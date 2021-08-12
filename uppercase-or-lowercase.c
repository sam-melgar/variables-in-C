/*A C-program that reads from the user input one alphanumeric character (a letter or a digit) 
and that decides whether this character is a lower-case or an upper-case letter from the alphabet or a digit. */

#include <stdio.h> 
int main(void) {
    
char alphanumeric; //store the user input in a char variable 

    printf("Please input one letter or one digit:\n");
    scanf("%c", &alphanumeric);
    
  /*identify the variable through ASCII codes*/
    if ((alphanumeric >= 97) && (alphanumeric <= 122) ) {
        printf("\'%c\' is a lower-case letter from the alphabet.", alphanumeric);
        
    } else if ( (alphanumeric >= 65) && (alphanumeric <= 90) ) {
        printf("\'%c\' is an upper-case letter from the alphabet.", alphanumeric);
        
    } else if ( (alphanumeric >= 48) && (alphanumeric <= 57) ) {
        printf("\'%c\' is a digit.", alphanumeric);
        
    } else { 
        printf("Error: need a letter or a digit");
    }

return(0);
}
