/*     Program to impliment linked list with delete fucntion added.
Author-Suyog Shrestha
Reference- Data structure using C and C++       */

#include <stdio.h>
#include <stdlib.h>

struct node{
	int info;
	struct node *next;
};

typedef struct node *nodeptr;
nodeptr getnode();
void freecode(nodeptr);
void insertatfirst(nodeptr*,int);
int deletefromfirst(nodeptr*);
void displaylist(nodeptr);
int main(){
	nodeptr list;
	list= NULL;
	insertatfirst(&list,5);
	insertatfirst(&list,6);
	insertatfirst(&list,7);
	insertatfirst(&list,8);
	insertatfirst(&list,9);
	deleteatfirst(&list);
	deleteatfirst(&list);
	displaylist(list);

}
	nodeptr getnode(){
		return(nodeptr) malloc(sizeof(struct node));
		
	}
	
	void freenode(nodeptr p){
		
		free(p);
	}
	
	void insertatfirst(nodeptr *p, int x){
		nodeptr q;
		q= getnode();
		q ->info=x;
		q->next= *p;
		*p = q;
	}
	
	int deleteatfirst(nodeptr *p,int x){
	
	if(*p==NULL)
	{
		printf("Underflow");
		exit(0);
	}
	else
	{
	nodeptr q;
	int x;
	q=*p;
	x=q->info;
	*p=q->next;
	freenode(q);
	return x;
	}
		
	}
	
	void displaylist(nodeptr p){
		
		nodeptr ptr = p;
		while (ptr!= NULL){
			printf("%d",ptr->info);
			ptr=ptr->next;
		}
	}
	
