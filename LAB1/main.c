#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

struct stack{
    int top;
    int data[SIZE];
};

typedef struct stack STACK;

void push(STACK *s,int item){
    if(s->top == SIZE-1)
        printf("Stack overflow");
    else{
        s->top=s->top+1;
        s->data[s->top]=item;
    }
}

void pop(STACK *s){
    if(s->top==-1)
        printf("\n Stack underflow");
    else{
        printf("\n Element pop is %d",s->data[s->top]);
        s->top=s->top-1;
    }
}

void display(STACK s){
    int i;
    if(s.top==-1)
        printf("\n Stack is empty");
    else{
        printf("\nStack contents are:");
            for(i=s.top;i>=0;i--)
                printf("%d\n",s.data[i]);
    }

}

int main()
{
    int ch,item;
    STACK s;
    s.top = -1;
    for(;;){
        printf("\n 1.PUSH");
        printf("\n 2.POP");
        printf("\n 3.DISPLAY");
        printf("\n 4.EXIT");

        printf("\n READ CHOICE:");
        scanf("%d",&ch);

        switch(ch){
            case 1: printf("\n Read elements to be pushed:");
                    scanf("%d",&item);
                    push(&s,item);
                    break;

            case 2: pop(&s);
                    break;

            case 3: display(s);
                    break;

            default:exit(0);

        }
    }

    return 0;
}
