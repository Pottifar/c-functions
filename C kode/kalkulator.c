#include <stdio.h>

int main(){
    int operation;
    int num1;
    int num2;
    int res;

    printf("Choose operaion:\nAdd: 1, Sub: 2, Div: 3, Mul: 4\n");
    scanf("%s", operation);

    printf("Number 1:\n");
    scanf("%d", num1);

    printf("Number 2:\n");
    scanf("%d", num2);

    switch (operation){
        case 1:
            res = add(num1, num2);
            break;
        case 2:
            res = sub(num1, num2);
            break;
        case 3:
            res = div(num1, num2);
            break;
        case 4:
            res = mul(num1, num2);
            break;
    }

    printf("Result of calculation is:\n%d", res);
}

double add(double num1, double num2){
    double result = num1 + num2;
    return result;
}

double sub(double num1, double num2){
    double result = num1 - num2;
    return result;
}

double div(double num1, double num2){
    double result = num1 / num2;
    return result;
}

double mul(double num1, double num2){
    double result = num1 * num2;
    return result;
}