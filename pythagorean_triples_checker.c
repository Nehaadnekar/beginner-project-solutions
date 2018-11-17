#include<stdio.h>
void main()
{
  int a,b,c;
  int i,n=0;
  printf("want to find the pythagorean  triples??\n***************\nlet's start\n********\n\n");
  printf("enter 0 to stop the program\n\n");

  printf("enter first side of the triangle\n");
  scanf("%d",&a);

  while(a!=0)
  {
         printf("enter second side of the triangle\n");
         scanf("%d",&b);
         printf("enter third side of the triangle\n");
         scanf("%d",&c);

           if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
           {
                printf("the sides of this triangle are pythagorean triples\n");
           }
           else
           {
                printf("input sides are not a pythagorean triple\n");
           }
         printf("enter first side of the triangle\n");
         scanf("%d",&a);
  }



}

