#include<stdio.h>
int main()
{
    int n, num, i, found = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search for: ");
    scanf("%d", &num);
    printf("Position(s) of the number in array: ");
    for(i = 0; i < n; i++) 
	{
        if(arr[i] == num) 
		{
            printf("%d ", i+1);
            found = 1;
        }
    }
    if(!found)
	{
        printf("Number not found.");
    }
    return 0;
}
