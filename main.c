#include <stdio.h>
int main()
{
  int num1,num2,num3,num4,num5,avg;   /* Declartion Of Variables */
  scanf("%d",&num1);         /*  Input From User */
  scanf("%d",&num2);         /*  Input From User */
  scanf("%d",&num3);         /*  Input From User */
  scanf("%d",&num4);         /*  Input From User */
  scanf("%d",&num5);         /*  Input From User */
  avg = (num1 + num2 + num3 + num4 + num5)/5;              
  printf("The Average Of These 5 Numbers Is %d",avg);
  return 0;
}
