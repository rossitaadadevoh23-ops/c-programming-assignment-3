#include <stdio.h>
#include <stdlib.h>
 int add(int a, int b);

int main(void) {
	int x, y;
	printf("Enter first number : ");
	scanf("%d" , &x);
	printf("Enter second number : ");
	scanf("%d , &y");
	printf("sum=%d\n", add(x,y));
	return 0;
}

 int add(int a, int b){
 	return a+b;
 }
