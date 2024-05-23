#include <stdio.h>
#include "swap.h"

void swap1(int *a, int *b) {
    printf("####BEGIN SWAP1 FUNCTION\n\n");

    printf("Before SWAP1:\n");
    printf("a= %d\n", *a);
    printf("b= %d\n", *b);

    int temp = *a;
    *a = *b;
    *b = temp;

    printf("\n");
    printf("After SWAP1:\n");
    printf("a= %d\n", *a);
    printf("b= %d\n", *b);
    printf("####END SWAP1 FUNCTION\n\n");
}

void swap2(int a, int b) {
    printf("####BEGIN SWAP2 FUNCTION\n\n");

    printf("Before SWAP2:\n");
    printf("a= %d\n", a);
    printf("b= %d\n", b);

    int temp = a;
    a = b;
    b = temp;

    printf("\n");
    printf("After SWAP2:\n");
    printf("a= %d\n", a);
    printf("b= %d\n", b);
    printf("####END SWAP2 FUNCTION\n\n");
}
