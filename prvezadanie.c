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

void zjednotenie(int A[6], int B[6])
{
	int i,j=0,n=0,h=0,D[12]={};
	
	for(i=0;i<6;i++)
	{
		while(D[j]!=0)
		{
			if(A[i]==D[j])
			{
				n=1;
			}
			j++;
		}
		if(n==0)
		{
			D[j]=A[i];
			h++;
		}
	}
	
	for(i=0;i<6;i++)
	{
		j=0;
		n=0;
		while(D[j]!=0)
		{
			if(B[i]==D[j])
			{
				n=1;
			}
			j++;
		}
		if(n==0)
		{
			D[j]=B[i];
			h++;
		}
	}
	
	for(i=0;i<h;i++)
	{
		printf("%d ",D[i]);
	}
}

int main(void)
{
	int i,j,n=0,h=0,A[6]={3,9,4,8,7,1},B[6]={1,2,3,4,5,6},C[6]={},D[12]={};
	
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
	
	printf("\n");
	
	printf("zjednotenie mnozin: ");	
	zjednotenie(A,B);	
	
}
