#include <stdio.h>
int main() {
int a, b, sum, sub, multiply;
float Divide ;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
sum= a + b;
printf("sum = %d\n",sum);
sub= a - b;
printf("Subtraction = %d\n",sub);
multiply= a * b;
printf("Multiplication = %d\n",multiply);
Divide = a / b;
printf("Division = %f\n", Divide);
return 0;
}
