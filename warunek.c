#include <stdio.h>

int main(){
    int a = 7;
    int b = 3;
    int max;

    max = a > b ? a : b;

    printf("maximum: %i", max);

    return 0;

}