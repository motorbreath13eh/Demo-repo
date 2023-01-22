#include <stdio.h>
#include <stdlib.h>

int sum(int x, int y);
int dif(int x, int y);
float avg(float x, float y);
  
int main()
{
  system("CHCP 1253>nul");
  
  int a,b;
  printf("Please enter the first number: \n");
  scanf("%d", &a);
  
  printf("Please enter the second number: \n");
  scanf("%d", &b);
  
  printf("\nYou entered %d and %d.\n", a, b);
  printf("\nTheir sum is %d + %d = %d\n", a, b, sum(a,b));
  printf("Their difference is %d - %d = %d\n", a, b, dif(a,b));
  printf("Their average is (%d + %d)/2.0 = %.2f\n\n", a, b, avg(a,b));
  
  system("pause");
  return 0;
}

int sum(int x, int y)
{
  int sum1;
  sum1 = x + y;
  return sum1;
}

int dif(int x, int y)
{
  int dif1;
  dif1 = x - y;
  return dif1;
}

float avg(float x, float y)
{
  float avg1;
  avg1 = (x + y)/2.0;
  return avg1;
}
