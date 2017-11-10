
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string>

using namespace std;
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
	Node *temp1=A;
	if (_n<2)
	{
		A=temp1->next;
		free(temp1);
		return;
	}
	
	for(int i=0;i<(_n-2);i++)
	{
		temp1=temp1->next;
	}
	Node *temp2=temp1->next;
	temp1->next=temp2->next;
	free(temp2);
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

bool IsCharDuplication(string &s) {

  bool result = false;
  bool controlArray[256];
  for(int i=0;i<256;i++)
  {
  	controlArray[i]=false;
  }

  cout<<"s.length() is"<<s.length()<<endl;
 
  
  int i=0;
  for (string::iterator it = s.begin(); it!=s.end(); it++) {
    int temp=(*it);
    
    if(controlArray[temp]==false)
    {
    	controlArray[temp]=true;
    }
    else
    {
    	cout<<"controlArray[temp]"<<controlArray[temp]<<endl;
    	cout<<"find repetition @ "<<i<<endl;
    	result=true;

    }
    
    cout<<"i is"<<i<<endl;
    i++;
  }
  
  return result;
}

void testamostrong(int _temp)
{
    int temp_store[10];
	int _temp2=_temp;
	int sum=0;
	int counter=0;
	int quotient=0;
	int remainder=0;
	
	while(1)
	{
		double test1=(double)_temp/10;
		cout<<"counter is "<<counter<<" test1 is "<<test1<<endl;

		if(test1<1)
		{
			break;
		}
		counter+=1;
		_temp=(double)test1;
		
		
	}//end while
	for(int i=0;i<10;i++)
	{
as	f
	for(int i=0;i<=counter;i++)
	{
		sum+=pow((temp_store[i]),(counter+1));
		//printf("sum is %d \n",sum);

	}
	printf("total sum is %d \n",sum);
	
	
}


int main()
{
	int temp;
	/*
	//check the duplication of string
	string s1="hellow";
	bool temp=IsCharDuplication(s1);
	*/
	
	//test amostrong number
	
	printf("enter a number for amstrong \n");
	scanf("%d",&temp);
	testamostrong(temp);
	
	
	/*
	int x;
	for( x= -5 ; x<7; x++) printf("x is %d \n",x);
	printf("hey hey\n");
    createENode(9);
    
	createENode(10);
	createENode(11);
	createENode(12);
	
	printf("There are %d in the list \n",traverseList());
    
   deletN(4);
   traverseList();
   printf("delete first \n");
   deletN(1);
   traverseList();
  */



	/*delete old
	deletehead();
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
	/*
	reverseIter();
	traverseList();
	*/
	return 0;
}

//make clean -f Mymakefile
//make all -f Mymakefile
