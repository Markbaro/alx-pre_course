#include <stdio.h>

/**
 *main - system to grade 5 subjects
 *Return : always (0) (success)
 */

int main(void)
{
	float maths, english, swahili, science, social;
	float total, average, percentage;
	char grade;

	printf("enter five subjects:");
	scanf("%f %f %f %f %f", &maths, &english, &swahili, &science, &social);

	total = maths + english + swahili + science + social;
	average = total / 5.0;
	percentage = (total / 500) * 100;

	if (average >= 90)
		grade = 'A';
	else if (average >= 80 && average < 90)
		grade = 'B';
	else if (average >= 70 && average < 80)
		grade = 'C';
	else if (average >= 60 && average < 70)
		grade = 'D';
	else if (average >= 50 && average < 60)
		grade = 'E';
	else 
		grade = 'P';
	

	printf("The Total Marks is: %.2f\n", total);
	printf("The Average Mark is : %.2f\n", average);
	printf("The Percentage is : %.2f%\n", percentage);
	printf("The Grade is : %c\n", grade);

	return (0);
}
