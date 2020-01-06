#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("Usage: %s temperature\n", argv[0]);
        return 1;
    }

    const float fahrenheit = atof(argv[1]);
    const float celsius = (fahrenheit - 32) * (5.0/9);
    printf("%.2f degrees Fahrenheit is: %.2f Celsius",fahrenheit,celsius);
    return 0;
}
