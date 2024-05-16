#include <stdio.h>
#include <math.h>

int main(void) {
   int userNum;
   int userNum2;
   
   printf("Enter integer:\n");
   scanf("%d", &userNum);
   printf("Your entered: %d\n", userNum);
   printf("%d squared is %d\n", userNum, userNum * userNum);
   printf("And %d cubed is %d!!\n", userNum, userNum * userNum * userNum);
   printf("Enter another integer:\n");
   scanf("%d", &userNum2);
   printf("%d + %d is %d\n", userNum, userNum2, userNum2 + userNum);
   printf("%d * %d is %d\n", userNum, userNum2, userNum2 * userNum);

   return 0;
}