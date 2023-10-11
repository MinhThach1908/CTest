//
// Created by Admin on 10/11/2023.
//

#include <stdio.h>
int sum(int x, int y);
int substraction(int x, int y);
int multiplication(int x, int y);
float division(int x, int y);

int ex1_main() {
//int main() {
    int x, y;
    char choice;


    do {
        printf("1. Input Number\n");
        printf("2. Calculate Sum\n");
        printf("3. Calculate Substraction\n");
        printf("4. Calculate Multiplication\n");
        printf("5. Calculate Division\n");
        printf("6. Exit\n");
        printf("Select an option from (1-6): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Input Number 1: ");
                scanf("%d", &x);
                printf("Input Number 2: ");
                scanf("%d", &y);
                break;
            case 2:
                sum(x, y);
                printf("Calculate Sum : %d\n", x + y);
                break;
            case 3:
                substraction(x, y);
                printf("Calculate Substraction : %d\n", x - y);
                break;
            case 4:
                multiplication(x, y);
                printf("Calculate Multiplication : %dn", x * y);
                break;
            case 5:
                division(x, y);
                printf("Calculate Division : %d\n", x / y);
                break;
            case 6:
                break;
            default:
                printf("Invalid selection");
                printf("\n");
        }

    } while (choice != 6);
}

int sum(int a, int b) {
    return a + b;
}
int substraction(int a, int b) {
    return a - b;
}
int multiplication(int a, int b) {
    return a * b;
}
float division(int a, int b) {
    return a / b;
}