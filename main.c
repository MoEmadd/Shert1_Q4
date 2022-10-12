#include <stdio.h>
void abs_func(float );
int main()
{
   float n;
   printf("Enter any number : ");
   scanf("%f",&n);
   abs_func(n);


    return 0;
}
void abs_func(float x)
{
    if(x<0.0)
      x=(-1)*x;
    else
      printf(" it did not need to perform the absolute operation.\n");
    printf("The value = %f",x);

}
