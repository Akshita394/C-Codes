#include<stdio.h>
int main()
{
    int integer[7],count=0,n,count1=0;
    printf("\n Enter the size of array ");
    scanf("%d",&n);
    printf("\n Program to count Frequency of each number in array ");
    printf("\n Enter the numbers ");
    for(int index=0;index<n;index++)
    {
        printf("\n Enter the value of element %d ",index+1);
        scanf("%d",&integer[index]);
    }
    for(int index=0;index<n;index++)
    {
        count=0;
        for(int index1=0;index1<n;index1++)
        {
            if(integer[index]==integer[index1])
            {
                if(index1<index)
                count++;
            }
        }
        if(count>0)
        {
            count1++;
        }
    }
    printf("\n Total number of duplicate elements in the given array is %d ",count1);
    return 0;
}

