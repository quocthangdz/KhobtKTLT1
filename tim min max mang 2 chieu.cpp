#include<stdio.h>
#include<conio.h>
int main()
{ 
    int a[50][50];
    int i,j,m,n;
    printf("nhap so hang n="); scanf("%d",&n);
    printf("nhap so cot m="); scanf("%d",&m);
    printf("nhap vao ma tran:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("ma tran vua nhap la:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

printf(" \nPhan tu co gia tri lon nhat trong mang X \t");
int max=a[0][0],min=a[0][0];
for(i=0;i<n;i++)
{
    

      for(j=0;j<m;j++)
      {
          if(max<a[i][j])
            max=a[i][j];
          if(min>a[i][j])
            min=a[i][j];

      }
}

printf("max=%d, min=%d",max,min);
getch();
}
