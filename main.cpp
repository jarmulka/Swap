#include <iostream>


void swap1(int *a, int *b){
    printf("####BEGIN SWAP FUNCTION\n\n");

    printf("Before SWAP:\n",*a);
    printf("a= %d\n",*a);
    printf("b=%d\n",*b);

    int temp =*a;
    *a=*b;
    *b=temp;

    printf("\n");
    printf("After SWAP:\n",*a);
    printf("a= %d\n",*a);
    printf("b=%d\n",*b);
    printf("#### END SWAP FUNCTION\n\n");
}


void swap2(int a, int b){
    printf("####BEGIN SWAP FUNCTION\n\n");

    printf("Before SWAP:\n",a);
    printf("a= %d\n",a);
    printf("b=%d\n",b);

    int temp =a;
    a=b;
    b=temp;

    printf("\n");
    printf("After SWAP:\n",a);
    printf("a= %d\n",a);
    printf("b=%d\n",b);
    printf("#### END SWAP FUNCTION\n\n");
}


int main() {
    printf("SWAP EXAMPLE\n\n");


    int a=2;
    int b=5;
    printf("Before SWAP:\n",a);
    printf("a= %d\n",a);
    printf("b=%d\n",b);



    printf("\n");
    printf("After SWAP:\n",a);
    printf("a= %d\n",a);
    printf("b=%d\n",b);

    return 0;
}