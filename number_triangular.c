#include <stdio.h>

void triangle (int limit)
{
  int n = 1, count;
  for (count=1; count<limit; count++) {
    n = n + (count+1);
  }
  printf("O %i° número triangular é igual a %i\n", limit, n);
}

void main ()
{
  int number;
  printf("Digite o número que deseja da sequência de números triangulares: ");
  scanf("%i", &number);
  triangle(number);
}
