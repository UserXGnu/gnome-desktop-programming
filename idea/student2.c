#include <stdio.h>

int
main (int   argc,
      char *argv[])
{
   double a, b;

   printf("Please enter two numbers separated by a space to be divided:  ");
   scanf("%lf %lf", &a, &b);
   printf("%lf / %lf = %lf\n", a, b, a / b);

   return 0;
}
