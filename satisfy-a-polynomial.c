/* A C program that reads from the user input an integer number. 
The program should next check whether the number entered lies between the numbers 10 and 10,000. 
If not, then an error message should be printed to the screen and the next step should be skipped. 
If indeed the number is between 10 and 10,000, the program should check whether the number satisfies the equation (x^2 + 34x - 24)* x = 36,025.  */

#include <stdio.h>
int main(void) {
    int num;
    int x; // variable in equation
    printf("Check which number satisfies the equation  (x^2 + 34x-24)*x = 36,025.\n"); //added this to clarify my code when I look back to it
    
    printf("Please enter an integer number: \n"); //lines 7-8 are user input
    scanf("%d", &num);
    
    if ( (num >= 10) && (num <= 10000) ) { //check the user input is within bounds
        x = num; 
        x = ((x*x) + 34*x - 34)*x;
        if (x == 36025) { //nested if statement to address whether the number SATISFIES the equation
            printf("%d satisfies the equation.\n", num);
        }else {
            printf("Sorry %d does not satisfy the equation.\n", num);
            }
    } else {
        printf("ERROR must be a number between 10 and 10,000.");
    }
    return(0);
}
