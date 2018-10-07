/**
 * @author ${hisham_maged10}
 *https://github.com/hisham-maged10
 * ${DesktopApps}
 */
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 3
#define type int
typedef struct
{
    int front,rear;
    int counter;
    type data[MAX_SIZE];
}queue;
void initialize(queue*q)
{
    q->front=q->rear=-1;
    q->counter=0;
}
void enqueue(queue*q,type value)
{
    if (isfull(q))
    {
        printf("Queue is full\n");
        return;
    }
    else if(isempty(q))
    {
        q->front=q->rear=0;
        q->data[rear]=value;
        q->counter++;
    }
    else
    {
        q->rear=(q->rear+1)%MAX_SIZE;
        q->data[q->rear]=value;
        q->counter++;
    }
}
int size(queue*q)
{
    return q->counter;
}
int isempty(queue*q)
{
    if(q->front==-1 && q->rear==-1)
        return 1;
    else
        return 0;
}
int isfull(queue*q)
{
    if((q->rear+1)%MAX_SIZE==q->front)
        return 1;
    else
        return 0;
}
type peak(queue*q)
{
    return q->data[q->front];
}
type dequeue(queue*q)
{
    if isempty(q)
    {
        printf("the queue is empty");
        return -1;
    }
    else if(q->front==q->rear)
    {
        q->rear=-1;
        return q->data[q->front--];
    }
    else
    {
       type value=q->data[q->front];
       q->front=(q->front+1)%MAX_SIZE;
       q->counter--;
        return value;
    }

}
int main()
{
    printf("Hello world!\n");
    return 0;
}
