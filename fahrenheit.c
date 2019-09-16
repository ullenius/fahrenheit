#include <stdio.h>
#include <stdlib.h>
/* 
 * Converts Fahrenheit to Celsius
 * written by Anosh 2019-09-16
 */
int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: Fahrenheit temperature\n");
        return 0;
    }
    float fahrenheit = atof(argv[1]);
    float celsius = (fahrenheit - 32) * (5.0/9);
    printf("%.2f",fahrenheit);
    printf(" degrees Fahrenheit is %.2f Celsius\n", celsius);
    return 0;
}
