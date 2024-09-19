#include <stdio.h>

int main()
{
    /*
    printf("hello"); // this is print Statement
    printf("world");
    */
    // multiline comment

    //    data types

    // int 5 1 4 84 32 555 441 111 55 %d

    // char a f g s g j y t %c

    // float 55.5 223.5  7.4 %f

    // float a = 30, b = 20;

    // printf("%f \n",a-b);

    // Rules of definig variable

    // myname  // right
    // MyName  // right
    // My_Name // right
    // myname3 // right
    // myname4 // right
    // myname6 // right

    // 4myname //wrong

    // my name //wrong

    // Constant
    // const int a = 40;

    // a = 30;

    // printf("%d \n",a);

    // Operators

    /*

    Arithmetic operators -> + - * / //

    Assignment operators -> = += -+ *= /=  a = 3 a += 5

    Comparison operators -> < > <= >= == !=

    Logical operators -> &&(and) ||(OR) !(NOT) RETURNS TRUE FALSE

        and
        true && true return true
        false && true return false

        or
        true || false return true

        false || true returns true

        NOT

        x = 2
        !(x < 5 && x < 10)
    */

    //    int a = 2;
    //    printf("%d \n",a+=5 );

    // 1 = true
    // 0 = false

    // printf("%d \n", 10!=20);

    // user input

    //    int age;

    //    printf("Enter Your Age : ");

    //    scanf("%d",&age);

    //    printf("\n AGE = %d \n", age);

    //     if(age >= 18 && age <25){
    //         printf("You can Drive bike \n");
    //     }
    //     else if(age >= 25){
    //         printf("You can Drive Car \n");
    //     }
    //     else{
    //         printf("You can not Drive \n");
    //     }

    // int time = 8;
    // (time < 18) ? printf("Good day.") : printf("Good evening."); // short hand if else & ternary


    //switch case

    int day = 5;

    switch (day){
        
    case 1:
        printf("monday");
        break;

    case 2:
        printf("tue");
        break;

    case 3:
        printf("wed");
        break;

    case 4:
        printf("thur");
        break;

    default:
        printf("enter valid day");
        break;
    }

    // loops
    // while
    // do while
    // for

    // int i = 1;

    // int table = 8;
    // while(i<=10){
    //     printf("%d x %d = %d \n",table,i, i*table);
    //     i+=1;
    // }

    // int i = 6;
    // do {
    //     printf("%d \n",i);
    //     i+=1;
    // }while(i<=5);

    // for(int i = 1; i<=10 ; i+=1){
    //     printf("%d \n",i);
    // }

    return 0;
}