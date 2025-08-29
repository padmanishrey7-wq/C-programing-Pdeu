#include <stdio.h>
int main() {
float grams, kg;
printf("Enter grams: ");
scanf("%f", &grams);
kg = grams / 1000.0f;
printf("Kilograms = %f\n", kg);
return 0;
}