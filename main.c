#include <stdio.h>
#include <stdlib.h>

/**********************************
 * That is a program that implements a data structure call Stack
 * it was created as an exercise in C Programming Language
 **********************************/

/**********************************
 * We begin our code defining the amount of spaces
 * to hold our numbers in our Stack
 **********************************/
int const MAXSIZE = 10;
int top = -1;

/**********************************
 * This function it's a tool to know if our stack it's
 * empty
 **********************************/
int isEmpty()
{
    if(top > -1){
        return 0;
    }else{
        return 1;
    }
}

/**********************************
 * This function it's a tool to know if our stack it's
 * full
 **********************************/
int isFull()
{
    if(top >= (MAXSIZE - 1)){
        return 1;
    }else{
        return 0;
    }
}

/**********************************
 * That's the function that we use to take things out
 * of our stack
 **********************************/
void pop(int *stack){
    if(!isEmpty()){
        int value = stack[top];
        top = top - 1;
        printf("\nValue took out! %d \n",value);
    }else{
        printf("\nIt's empty!\n");
    }
}

/**********************************
 * In this function we use it to push thing inside
 * of our stack
 **********************************/
void push(int *stack){
    if(!isFull()){
        int value;
        top = top + 1;
        printf("\nType a integer number: \n");
        scanf("%d",&value);
        stack[top] = value;
    }else{
        printf("\nIt's full!!\n");
    }
}

/**********************************
 * Here it's where our magic happens
 * Here our programming is executed =]
 **********************************/
int main()
{
    int stack[MAXSIZE];

    int opc = 0;
    do{
        printf("Options \n(1) for insert, \n(2) for take out of our stack and \n(3) to finish of running our programming:");
        scanf("%d", &opc);
        if(opc == 1){
            push(&stack);
        }else if(opc == 2){
            pop(&stack);
        }
    }while(opc != 3);
    printf("\nEnd of our Program!\n");
    return 0;
}
