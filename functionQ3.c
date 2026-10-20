#include <stdio.h>
#include <stdlib.h>

  int add(int a, int b);
  int subtract(int a, int b);
  int multiply(int a , int b);
  float divide(float a, float b);
  
int main(void) {
	int x, y;
	printf("Enter first number: ");
	scanf("%d",&x);
	printf("Enter second number: ");
	scanf("%d",&y);
	
	printf("Addition = %d\n", add(x, y));
	printf("Subtraction =%d\n", subtract(x ,y));
	printf("Multiplication =%d\n", multiply(x, y));

if(y==0)
    printf("Division = Error: cannot divide by zero\n");
else
    printf("Division = %.2f\n", divide(x, y)); 
	return 0;
}
  int add(int a, int b)     {return a + b;}
  int subtract(int a, int b) {return a - b;}
  int multiply(int a, int b) {return a * b;}
  
  
  float divide(float a , float b){
  	return a  / b;
  }
  
  
