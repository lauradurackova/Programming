#include<stdio.h>
#include<math.h>

void prienik(int A[6], int B[6])
{
	int i,j,C[6]={};
	
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			if(A[i]==B[j])
			{
				C[i]=A[i];
				printf("%d ",C[i]);
			}
		}
	}
}

int main(void)
{
	int i,j,A[6]={3,9,4,8,7,1},B[6]={1,2,3,4,5,6},C[6]={},D[12]={};
	
	printf("mnozina A: ");
	for(i=0;i<6;i++)
	{
		printf("%d ",A[i]);
	}
	
	printf("\n");
	
	printf("mnozina B: ");
	for(i=0;i<6;i++)
	{
		printf("%d ",B[i]);
	}
	
	printf("\n");
	
	printf("prienik mnozin: ");
	prienik(A,B);
	
}
