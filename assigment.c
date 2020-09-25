#include <stdio.h>

void main()
{
    int marks;
  printf("enter the marks of the student");
  scanf("%d",&marks);
  if(marks<100 && marks>85)
   {
     printf("grade a");
   }
 else  if(marks<84 && marks>70)
   {
     printf("grade b");
   }
   else if(marks<69 && marks>55)
   {
     printf("grade c");
   }
   else if(marks<=54 && marks>40)
   {
     printf("grade d");
   }
   else
   {
     printf("grade f");
     }
}
