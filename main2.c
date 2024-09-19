#include <stdio.h>

int main(){

    // Todays Topics

    /*
        srting %s

        bitwise operator

        pointers %p

        arrays
    */

    //srting %s

    // char name[] = "Kunal";

    // printf("%s " , name);


    // bitwise Operators

    // you need binary knowledge for bitwise operator
    // 0 1
    // int c = 0; //   0  0 0 0 1 0 

                // 32 16 8 4 2 1

    // int a = 10; //  0  0 1 0 1 0

    // int b = 3; //   0  0 0 0 1 1

    // int d = 0; //   0 1 0 1 1 0

    //  bitwise and &

    // c = a & b ;

    // d = a | b ;

    // d = a << b ;

//               0 1 2 3 4 5 6 7 8 9
    int arr[] = {1,2,3,4,5,6,7,8,9,3} ;

    int size = sizeof(arr) / sizeof(arr[0]);

    // printf("%d", size);

    // printf("%d",arr[5]); // 6

    for (int i = 0; i < size; i++)
    {
        printf("%d ,", arr[i]);
    }
    

    // pointers

    // int a = 20; //address  00000036757FF91C  value 20

    // int *pA = &a; // 00000044757FF91C  value 00000036757FF91C


    // printf("%p \n",&a);

    // printf("%d", *pA);

    // printf("%d",c);

    // printf("%d",d);

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
 
    return 0;
}