#include<stdio.h>
int main() {
	float x, y ;
	scanf_s("%f %f", &x, &y);
	printf("%f\n", x+y);
	printf("%f\n", x-y);
	printf("%f\n", x*y);
	printf("%f\n", x/y);
	return 0;
}