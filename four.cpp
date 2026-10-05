#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int *stack;
int top=-1;
int max;
bool isEmpty()
{
	return top==-1;	
}
bool isfull()
{
	return top==max-1;
}
void push()
{ 
	int value;
	if(isfull())
	{
		printf("Stack is full\n");
	}
	else
	{
		printf("Enter push item:");
		scanf("%d",&value);
		top=top+1;
		stack[top]=value;
		printf("Pushed to stack\n",value);
	}
}
void pop()
{
	if(isEmpty())
	{
		printf("Stack is Empty\n");
	}
	else
	{
		printf("%d is Popped out\n",stack[top]);
		top=top-1;
	}
}
void display()
{
	int i;
	if (!isEmpty())
	{
		for(i=0;i<=top;i++)
		{
			printf("stack[%d]=%d\n",i+1,stack[i]);
		}
	}
	else
	{
		printf("Stack is Empty\n");
	}
}
void peek()
{
	if(!isEmpty())
	{
		printf("top element is:%d\n",stack[top]);
	}
	else
	{
		printf("stack is Empty\n");
	}
}
int main()
{
	int choice;
	printf("Enter the maximum size of the stack:");
	scanf("%d",&max);
	stack=(int*)malloc(max*sizeof(int));
	if(stack==NULL)
	{
		printf("Memory Allocation Failed!\n");
		return 1;
		
	}
	do
	{
		printf("\n...........................................\n");
		printf("1.PUSH \n");
		printf("2.POP\n");
		printf("3.PEEK\n");
		printf("4.DISPLAY\n");
		printf("5.QUIT \n");
		printf("...................\n");
		printf("Select Your Choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			case 5:
				free(stack);
				printf("Existing program Goodbye!\n");
				exit(0);
			default:
				printf("Invalid Operation! Try again.....\n");
		}
	}
	while(1);
	return 0;	
}
