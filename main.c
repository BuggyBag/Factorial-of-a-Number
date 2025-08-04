#include <stdio.h>

//factorial recursion
int factorial(int number){

  if (number == 0)
    return 1;
  else 
    return number*factorial(number-1);
}

int main(void) {
  printf("Factorial of a number \n\n");

  int number;
  
  printf("Give a number to calculate its factorial: ");
  scanf("%d", &number);

  printf("The factorial of %d is %d", number, factorial(number));
  
  return 0;
}