//Name : Mohammad Zainulabdin
//Roll-no : ECE-22-11

#include<stdio.h>
int main()
{
	int i, q, row;
	printf("Enter valid data: \n");
	scanf("%d", &row);
	for(i=1;i<=row;i++)
	{
		for(q=row;q>i;q--)
		{
			printf(" ");
		}
	    for(q=i;q>=1;q--)
	    {
			printf("%d",q);
		}
		for(q=2;q<=i;q++)
	    {
			printf("%d",q);
		}
		for(q=row;q>i;q--)
		{
			printf(" ");
		}
		printf("\n");
	}
}
