//
// Created by Admin on 10/11/2023.
//

#include <stdio.h>

int ex2_main() {
//int main() {
int num[10];
int i;
printf("Input 10 numbers:\n");
for (i = 0; i < 10; i++) {
printf("+ Number %d:", i + 1);
scanf("%d", &num[i]);
}
printf("Result:\n ");
for (i = 9; i >= 0; i--) {
printf(" %d", num[i]);
if (i != 0) {
printf(",");
}

}return 0;
}