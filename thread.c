#include<stdio.h>
#include<stdlib.h>
typedef struct n
{
char a ;
struct n *next;
}sll;
void create(sll **);
void sort(sll *);
void display(sll *);
void main()
{
sll *head=0;
 int i;
 // for(i=0;i<5;i++)
  
    create(&head);
   
   sort(head);
   display(head);
}


void create(sll **ptr)
{
   sll *new;
    int i;
   for(i=0;i<5;i++)
   {
   new=malloc(sizeof(sll));
   printf("\n enter the  data\n");
   scanf(" %c",&new->a);
   new->next=*ptr;
   *ptr=new;
   }
}

void sort(sll *ptr)
{
 sll t , *a,*b ;
int i,j;
a=ptr;
for(i=0;i<5;i++)
{
	b=a->next;
	for(j=0;j<5-1-i;j++)
        {
          if((a->a)>(b->a))
	     {
                  (t.a)=(a->a);
		  (a->a)=(b->a);
		  (b->a)=(t.a);
              }
                 b=b->next;
        }
                 a=a->next;
}                                    
  
          
}
    
void display (sll *ptr)
{
  while(ptr!=0)
  {
    printf(" %c ",ptr->a);
     ptr=ptr->next;
   }
}

