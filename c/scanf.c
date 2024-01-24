#include <stdio.h>

int main()

{	

	int age;
	float gpa;
	char grade;

	printf("How old are you? \n", &age);
	scanf(" %i\n", &age);

	printf("What is your gpa?: \n", &gpa);
	scanf(" %f\n", &gpa);

	printf("What is your letter grade?: \n", &grade);
	scanf(" %c\n", &grade);

	printf("Age: %i\n", &age); 
	printf("GPA: %f\n", &gpa); 
	printf("Grade: %c\n", &grade);

	
	return 0;
}

