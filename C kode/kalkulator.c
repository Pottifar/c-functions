#include <stdio.h>

// Function prototypes
int add(int num1, int num2);
int sub(int num1, int num2);
int div(int num1, int num2);
int mul(int num1, int num2);

int main() {
    int operation;
    int num1;
    int num2;
    int res;

    printf("Choose operation:\nAdd: 1, Sub: 2, Div: 3, Mul: 4\n");
    scanf("%d", &operation);

    printf("Number 1:\n");
    scanf("%d", &num1);

    printf("Number 2:\n");
    scanf("%d", &num2);

    switch (operation) {
        case 1:
            res = add(num1, num2);
            break;
        case 2:
            res = sub(num1, num2);
            break;
        case 3:
            if (num2 == 0) {
                printf("Division by zero is not allowed.\n");
                return 1;
            }
            res = div(num1, num2);
            break;
        case 4:
            res = mul(num1, num2);
            break;
        default:
            printf("Invalid operation.\n");
            return 1;
    }

    printf("Result of calculation is: %d\n", res);
    return 0;
}

int add(int num1, int num2) {
    return num1 + num2;
}

int sub(int num1, int num2) {
    return num1 - num2;
}

int div(int num1, int num2) {
    return num1 / num2;
}

int mul(int num1, int num2) {
    return num1 * num2;
}
