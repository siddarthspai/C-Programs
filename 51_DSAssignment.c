//Siddarth S Pai
//Roll Number:51 CS3B
//Program to remove all occurences of variable x from a given singly linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*link;
}*START=NULL,*p,*newnode;

void main()
{
	int n,i,value;
	printf("\nEnter the limit");
	scanf("%d",&n);
	printf("Enter the data to be stored in the linked list");
	for(i=0;i<n;i++)
	{	
		newnode=malloc(sizeof(struct node));
		scanf("%d",&newnode->data);
		if(START==NULL)
		{
			START=newnode;
			newnode->link=NULL;
		}
		else
		{
			p=START;
			while(p->link!=NULL)
				p=p->link;
			p->link=newnode;
		}
	}
	printf("\nThe Linked List\n");
	for(p=START;p!=NULL;p=p->link)
		printf("\n%d",p->data);
	printf("\nEnter the value of x to be deleted");
	scanf("%d",&value);
	for(p=START;p!=NULL;p=p->link)
	{
		if(p->data==value)
		{
			for(newnode=START;(newnode->link!=p) && (newnode!=p);newnode=newnode->link);
			if(p==START)
			{
				START=p->link;
			}
			else
				newnode->link=p->link;
			free(p);
		}
	}

	printf("\nThe new linked list\n");
	if(START==NULL)
		printf("\nThe List is Empty");
	else
		for(p=START;p!=NULL;p=p->link)
			printf("\n%d",p->data);
}
