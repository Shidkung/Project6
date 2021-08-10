#include<stdio.h>
int main() {
	float x, y ;
	scanf_s("%f %f", &x, &y);
	printf("%f\n%f\n%f\n%f",x + y,x - y, x * y, x/y);
	return 0;
}