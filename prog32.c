#include<stdio.h>
int main()
{
   int marks;
   scanf("%d",&marks);
   if(marks>=90 && marks<=100)
      printf("a grade");
   else if(marks<90 && marks>=70)
      printf("b grade");
   else if(marks<70 && marks>=50)
      printf("c grade");
   else(marks<50 && marks<=0)
      printf("d grade");
   else
      printf("enter a valid marks");
   return 0;
}
      
  

