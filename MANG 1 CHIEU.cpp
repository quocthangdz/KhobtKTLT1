#include<stdio.h>
#include<conio.h>
int main()
{
   int n;
   printf("\n nhap vao N ohan tu cua mang");
   scanf("%d",&n);
   int A[n];
   for (int i= 0;i <=n; i++)
   {printf("NHAP A[%d]: ",i);
        scanf("%d",&A[i]);
   }
   return 0;
}
