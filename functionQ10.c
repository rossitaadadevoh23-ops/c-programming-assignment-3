#include <stdio.h>
#include <stdlib.h>

float calculateTotal(float a, float b, float c);
float calculateAverage(float total);
void displayGrade(float average);
void displayStatus(float average);

int main(void) {
	float cprog, maths, elec, total, average;
	
	printf("Enter C Programming score:");
	scanf("%f" &cprog);
	printf("Enter Mathematics score:");
	scanf("%f", &maths);
	printf("Enter Electronics score:");
	scanf("%f", &elec);
	
	total=calculateTotal(cprog,maths,elec);
	average=calculateAverage(total);
	
	printf("\n---------STUDENT RESULT ---------\n\n");
	printf("C Programming: %.2f\n", cprog);
	printf("Mathematics: %.2f\n", maths);
	printf("Electronics: %.2f\n\n", elec);
}
	return 0;
}
