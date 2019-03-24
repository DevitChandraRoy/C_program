#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,k,ar[100],num,p,innum,sum,max,min;
    double average= 0 ;
    sum= 0;
    max=ar[0];
    printf("Enter the array size: ");
    scanf("%d",&num);
    printf("\nEnter the entry of the array: ");
    for(i=0;i<num;i++)
    {
        scanf("%d",&ar[i]);
    }
    min = ar[0];
    for(i=0;i<num;i++)
    {
        sum+=ar[i];
        average = (float)sum/(i+1);
        printf("  %d ",ar[i]);
        if(max<ar[i])
        max = ar[i];
        else if(min>ar[i])
        min = ar[i];
    }
    printf("\nsum = %d",sum);
    printf("\naverage = %.2lf",average);
    printf("\nmaximum = %d",max);
    printf("\nminimum = %d",min);
    printf("\n\nEnter the number to be inserted: ");
    scanf("%d",&innum);
    printf("\n\nEnter the position for inserting: ");
    scanf("%d",&p);

    i = num -1;
    while(p<=i)
    {
        ar[i+1] = ar[i];
        i--;
    }
    ar[p-1] = innum;
    num++;
    printf("\n\nAfter inserting the array look like: ");
    for(j=0;j<num;j++)
    {
       printf(" %d",ar[j]);
    }
    return 0;
}
