#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int arr[50],num,a,b,temp;
	
	printf("Enter the number of elements\n");
	scanf("%d",&num);
	
	printf("Enter %d elements\n",num);
	
	for(a=0;a<num;a++)
	scanf("%d",&arr[a]);
	
	for(a=0;a<num-1;a++) //First for loop for the number of rotations
	{
		for(b=0;b<num-a-1;b++) //Second for loop for the number of passes
		{
			if(arr[b]>arr[b+1]) //if the first element is greater than its nexte element
			{
				temp=arr[b];
				arr[b]=arr[b+1];
				arr[b+1]=temp;
				
			}
		}
	}
	printf("Sorted array is \n");//printing all the sorted elements
	
	for(a=0;a<num;a++)
	printf("%d\n",arr[a]);

return 0;

	
}
