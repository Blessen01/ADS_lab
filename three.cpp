#include<stdio.h>
int main()
{
	int arr[100],n,i,pos,element,choice;
	printf("Enter number of elemnets in Array ");
	scanf("%d",&n);
	printf("Enter %d elements: \n",n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	while(1)
	{
		printf("\n\n Array Operations Menu:\n");
		printf("1 Display Array \n");
		printf("2 Insert element \n");
		printf("3 Delete element \n");
		printf("4 Exit \n");
		printf("Enter your Choice: ");
		scanf("%d",&choice);
		if (choice==1)
		{
			printf("Array elemnts are:\n");
			for(i=0;i<n;i++)
			{
			printf(" %d",arr[i]);
			}
			printf("\n");
		}
		else if(choice==2)
		{
			printf("Enter position to insert(1 to %d):",n+1);
				scanf("%d",&pos);
				if(pos<1 || pos>n+1)
				{
					printf("Invalid Position!\n");
				}
				else
				{
					printf("Enter Element to Insert: ");
					scanf("%d",&element);
					for(i=n;i>pos;i--)
					{
						arr[i]=arr[i-1];
					}
					arr[pos-1]=element;
					n++;
					printf("Element Inserted Succesfully!\n");
				}
		}
		else if(choice==3)
		{
		printf("Enter Position to Delete (1 to %d):",n);
		scanf("%d",&pos);
		if(pos<1 || pos>n)
		{
			printf("Invalid Position!\n");
		}
		else
		{
			for(i=pos-1;i<n-1;i++)
			{
				arr[i]=arr[i+1];
			}
			n--;
			printf("Element Deleted Successfully! \n");
		}
		}
		else if(choice==4)
		{
			printf("Exiting program...\n");
			break;
		}
		else
		{
			printf("Invalid Choice! Please Try Again...\n");
		}
	}
	return 0;
}