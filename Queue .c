#include<stdio.h>
#include<stdlib.h>
#define max 10

typedef struct que
{
    int rear,front;
    int a[max];
}queue;
void create_Queue(queue*q)
{
    q->rear=-1;
    q->front=-1;
}
void Push(queue*q,int value)
{
    if(q->front==max-1)
    {
        printf("\nQueue is OverFlow or Full\n");
    }
    else if(q->rear==-1)
    {
        q->rear=0;
        return;
    }
    else
    {
        q->front=q->front+1;
        
        
        q->a[q->front]=value;   
        
    } 
}
int Pop(queue*q)
{
    int store;
    
    if(q->front==-1)
    {
        return -1;//Means the Queue is empty and it retuens Nothing
    }
    else
    {
        if(q->rear==q->front)
        {
            q->front=q->rear=-1;
        }
        else
        {
            
        store=q->a[q->rear];
        q->rear=q->rear+1;
        return store;
        
    }
}
}
 
void Display(queue*q)
{
    
    if(q->front==-1)
    {
        printf("Queue is Underflow or Empty");
    }
    else{
         
         for(int i=(q->rear);i<=q->front;i++)
        {
             printf("%d\t",q->a[i]);
     }
  }
  }
int main()
{    queue q;
    int value,y,choice;
    create_Queue(&q);
    while(1)
    {
        printf("\nEnter=\n1 For PUSH\n2 For POP\n3 For Display\n4 For Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        
            printf("\nEnter value u want to insert\n");
            scanf("%d",&value);
            Push(&q,value);
            break;
             
        case 2:
        
            y=Pop(&q);
            printf("\nDeleted Item = %d \n",y);
            break; 
        
        
        case 3:
        
            Display(&q);
            break;
            
        case 4:
        
            exit(0);
            
    }
    
   
    }
}


