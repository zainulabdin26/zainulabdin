//Name : Mohammad Zainulabdeen
//Roll-no : ECE-22-11
#include<stdio.h>
int main()
{
	int i, n, prod, l;
	printf("Enter the number for which multiplication table is required: \n");
	scanf("%d", &n);
	printf("Enter the number upto which multiplication table is required: \n");
	scanf("%d", &l);
	for(i=0;i<=l;i++)
	{
		prod=n*i;
		printf("%d * %d = %d \n",n,i,prod);
	}
}
