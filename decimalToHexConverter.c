#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Welcome to the converter: \n");
  printf("Enter the decimal number: \n");

  int the_number;
  scanf("%d", &the_number); //recebe o endereco
  
  printf("The decimal number: %9d \n", the_number);
  printf("Converter to hexadecimal: %9X \n", the_number);

  return 0;
}
