#include <stdio.h>
int main() {
int minutes;
float hours;
printf("Enter minutes: ");
scanf("%d", &minutes);
hours = minutes / 60.0f;
printf("Hours = %f\n", hours);
return 0;
}