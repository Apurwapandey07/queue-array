/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************///Apurwa kumari 2100290120043
//array implementation linear queue


#include <stdio.h>
# define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(int x)
{
    if(rear==N-1){
        printf("overflow condition");
        
    }
    else if(front==-1&&rear==-1){
        front=rear=0;
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
    }
}
void dequeue()
{
    if(front==-1&&rear==-1)
    {
        printf("underflow condition");
        }
        else if(front==rear)
        {
            front=rear=-1;
        }
        else{
            printf("dequeue elements is %d \n",queue[front]);
            front++;
            
        }
}
void display()
{
    int i;
    if(front==-1&&rear==-1){
        printf("queue is empty");
    }
    else
    {
        for(i=front;i<rear+1;i++)
        {
            printf("queue is %d\n",queue[i]);
        }
}
}
void peek()
{
    if(front==-1&&rear==-1)
    {
        printf("queue is empty");
    }
    else
    {
       printf(" front element is :%d \n",queue[front]) ;
    }
}

void main()
{
  enqueue(3);
   enqueue(2);
   enqueue(6);
   display();
   peek();
   dequeue();
   dequeue();
   dequeue();
   display();
}

