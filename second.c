#include<stdio.h>
int main()
{
  int n;
  printf("\nEnter the limit  ");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    for(int j=n-i;j>=1;j--)
    {
      printf(" ");
    }
    for(int k=1;k<=i;k++)
    {
    printf("%d ",k);
  }
    printf("\n");
  }

  }
