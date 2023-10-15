#include<stdio.h>
int main ()
{
    int n;
    float total=0,a;
    printf("enter no of subjects:");
    scanf("%d",&n);
    int marks[n];
    for( int i=0;i<n;i++)
    {
        printf("enter %d subject marks:\n",i+1);
        scanf("%d",&marks[i]);
        total=total+marks[i];
        
    }
    
    
    a=total/n;
    printf("your avg marks are %2.f\n",a);
    
    return 0;
}
    