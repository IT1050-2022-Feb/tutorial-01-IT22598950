/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1;
  int mark2;
  int average;
  printf("Enter marks :");
  scanf("%d",&mark1);
  printf("\n");
  printf("Enter marks");
  scanf("%d",&mark2);
  printf("\n");
  average=(mark1+mark2)/2;
  printf("\n%d",average);
  
  
  return 0;
}

