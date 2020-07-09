#include<stdio.h>

//Write the function named sum together with the main function, 
//which places the mutual totals of the elements of the 5-element array of two integer types sent to it in the 3rd series with the 5-element sent to it. 
//In the main, before calling the function, first call the sequences to be collected, 
//and then print the 3rd series, both of which have been collected, using the offset notation on the screen. 
//The variables (formal parameters) in the sum function should be pointers and access to the array elements should be done according to the offset notation.

/*SAMPLE STUDY: Series1: 4 5 3 7 0 
                Series2: 1 1 0 5 6 
				----------------------- 
				Series 3: 5 6 3 12 6*/
				
void sum(int *p1,int *p2,int sum[],int size){
	
	int j;
	for(j=0;j<size;j++){
		sum[j]=p1[j]+p2[j];
	}
	printf("\n-------------------");
	printf("\nSeries3: ");
	for(j=0;j<size;j++){
		printf("%d ",sum[j]);
	}
	
}				
int main(){
	
	int array1[5];
	int array2[5];
	int sumall[5];
	int i;
	printf("Enter 5 integers for array 1:");
	for(i=0;i<5;i++){
		scanf("%d",&array1[i]);
	}
	
	printf("\nEnter 5 integers for array 2:");
	for(i=0;i<5;i++){
		scanf("%d",&array2[i]);
	}
	printf("Series1: ");
	for(i=0;i<5;i++){
		printf("%d ",array1[i]);
	}
	printf("\nSeries2: ");
	for(i=0;i<5;i++){
		printf("%d ",array2[i]);
	}
	
	sum(&array1,&array2,sumall,5);
	
	return 0;
}
