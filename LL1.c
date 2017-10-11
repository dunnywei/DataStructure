
#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};

typedef struct Node Node;

Node* A = NULL;

//adding to the front
void createENode(int _number)
{
	
		Node *temp = (struct Node *)malloc(sizeof(struct Node));

		if (temp == 0)
		{
			printf("Can't allocate memory \n");
		}
		temp->data = _number;
		temp->next = A;
		A = temp;
    


	return;
}

int traverseList()
{
	int counter=0;
	Node* temp1 = A;
	while (temp1 != NULL)
	{
		printf("@traverseList,The data is %d \n", temp1->data);
		temp1 = temp1->next;
		counter+=1;
	}
	
	return counter;
}

void deletehead()
{
	Node *temp = A;
	if (A != NULL)
	{
		if ((A->next != NULL))
		{
			A = temp->next;
			free(temp);

		}
		else{
			printf("@A->next==NULL \n");
			free(temp);
			A = NULL;

		}
	}
	else{
		printf("Nothing to delete \n");
	}
}
/*
void deleteN(int _n)
{
	Node *temp1=A;
	Node *temp2=NULL;
    int counter;
	if ((A!=NULL))
	{
	   printf("@(A!=NULL)&&(_n<=traverseList() \n");
	   counter=1;
	   
	   while(counter<(_n-1))
	   {
		   temp1=temp1->next;
		   counter+=1;
	   }
	   printf("value of counter is %d \n",counter);
	   if(counter>1)
	   {
		   temp2=temp1->next;
		   temp1->next=temp2->next;
		   free(temp2);
	   }
	   else
	   {
		   A=temp1->next;
		   free(temp1);
	   }
	   
	   if(traverseList()==0)
	   {
		   A=NULL;
	   }
	   
	}
}
*/
void deletN(int _n)
{
	
}
void reverseIter()
{
	Node *temp1=A;
	Node *temp2=A;
	int counter=0;
	Node *temp_collect=NULL;

	while(temp1->next!=NULL)
	{
		temp2=(*temp1).next;
		if(counter>=1)
		{
           printf("@reverseIter and ounter>=1,The value of temp1->data is %d \n",temp1->data);
         
		   temp1->next=temp_collect;
		   temp_collect=temp1;
		   A=temp1;
		   //traverseList();
		}
		else
		{
			temp_collect=temp1;
			temp_collect->next=NULL;
			printf("@reverseIter and else,The value of temp_collect->data is %d \n",temp_collect->data);
			
		}
		
		temp1=temp2;
		counter+=1;
	}
	temp1->next=temp_collect;
	A=temp1;
	
}
int main()
{
	int x;
	for( x= -5 ; x<7; x++) printf("x is %d \n",x);
	printf("hey hey\n");
    createENode(9);
    
	createENode(10);
	createENode(11);
	
	printf("There are %d in the list \n",traverseList());

	/*delete
	//deletehead();
	deleteN(2);
	
    printf("There are %d in the list \n",traverseList());
	
    deleteN(2);
    printf("There are %d in the list \n",traverseList());
	
	deleteN(1);
    printf("There are %d in the list \n",traverseList());

    */
	//printf("The value of A->data is %d \n",A->data);
	/*
	addNodeEnd(9);
	traverseList();
	*/
	reverseIter();
	traverseList();
	
	return 0;
}

//make clean -f Mymakefile
//make all -f Mymakefile