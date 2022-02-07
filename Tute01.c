/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2; // declaring variables
	float avg; 
	
	printf("Input 1st Subject marks:");
	scanf("%d",&mark1); //read marks
	printf("Input 1st Subject marks:");
	scanf("%d",&mark2); //read marks
	
	avg=(mark1+mark2)/2.0; //calculation 
	printf("Average: %.2f",avg);
	
	return 0;
}

