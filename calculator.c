#include <stdio.h>
#include <math.h>

int main(){

    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator. (+ - * /)\n");
    scanf("\n%c", &operator);

    printf("Enter the first number.\n");
    scanf("\n%lf", &num1);

    printf("Enter the second number.\n");
    scanf("\n%lf", &num2);

    switch(operator){
    case '+':
        result = num1 + num2;
        printf("The answer is %.0lf", result);
        break;
    case '-':
        result = num1 - num2;
        printf("The answer is %.0lf.", result);
        break;
    case '*':
        result = num1 * num2;
        printf("The answer is %.0lf.",result);
        break;
     case '/':
        result = num1 / num2;
        printf("The answer is %.0lf.",result);
     default: 
        printf("(%c) is not a valid operator.",operator);
    }

    return 0;
}
