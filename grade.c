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
	percentage = (average / 500) * 100;

	if (average >= 90)
		grade = 'A';
	else if (average >= 80 && < 90)
		grade = 'A-';
	else if (average >= 70 && < 80)
		grade = 'B+';
	else if (average >= 60 && < 70)
		grade = 'B';
	else if (average >= 50 && < 60)
		grade = 'B-';
	else if (average >= 40 && < 50)
		grade = 'C';
	else if (average >= 30 && < 40)
		grade = 'D';
	else
		grade = 'E';

	printf("The Total Marks is: %.2f", total / 500\n);
	printf("The Average Mark is : %.2f", average\n);
	printf("The Percentage is : %.2f%", percentage);
	printf("The Grade is : %c", grade);

	return (0);
}
