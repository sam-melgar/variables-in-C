/* A C program in which you declares six variables of type char and initialize them with ASCII-values (numbers!) 
so that printing them out one after the other using the format specifier %c results in the program output Hello.  */

#include <stdio.h>

int main (void) {
  /*initialize char variables with ASCII numbers*/
    char h = 72;
    char e = 101;
    char l = 108;
    char o = 111;
    char new_line = 10;
    char period = 46;

    /*print them out using format specifier %c (for char variables)*/
    printf("%c%c%c%c%c%c%c", h, e, l, l, o, period, new_line);
    printf("%c%c%c%c%c%c%c", h, e, l, l, o, period, new_line);

    return(0);
}
