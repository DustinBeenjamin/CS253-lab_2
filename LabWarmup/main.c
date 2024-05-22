#include <stdio.h>

int main() {

int num_1, num_2;

    printf("Enter an integer:\n");
    scanf("%d", &num_1);
    printf("%d squared is %d\n", num_1, num_1 * num_1);
    printf("And %d cubed is %d\n", num_1, num_1 * num_1 * num_1);

    printf("\n");

    printf("Enter another integer:\n");
    scanf("%d", &num_2);
    printf("%d + %d = %d\n", num_1, num_2, num_1 + num_2);
    printf("%d * %d = %d\n", num_1, num_2, num_1 * num_2);

}