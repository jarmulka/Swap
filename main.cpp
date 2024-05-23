#include <stdio.h>
#include "swap.h"

int main() {
    printf("SWAP EXAMPLE\n\n");

    int a = 2;
    int b = 5;
    printf("Before any SWAP:\n");
    printf("a= %d\n", a);
    printf("b= %d\n", b);


    swap1(&a, &b);
    printf("After SWAP1 in main:\n");
    printf("a= %d\n", a);
    printf("b= %d\n", b);


    a = 2;
    b = 5;


    swap2(a, b);
    printf("After SWAP2 in main:\n");
    printf("a= %d\n", a);
    printf("b= %d\n", b);

    return 0;
}
