#include<stdio.h>

void main()
{

    int arr[10];
   
    printf("Enter the elements in array ---\n");
    
    for(int i=0; i<10; i++)
    scanf("%d",&arr[i]);

    printf("Elements in reverse order of the array are ----\n");
     for(int i=9; i>=0; i--)
    printf("%d ",arr[i]);

}