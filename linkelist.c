#include<stdio.h>
#include<stdlib.h>
void beginning();
void display();
void end();
void specified();
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *tail=NULL;
struct node *new=NULL;
struct node *temp=NULL;
int main(){
    int n;
    
    printf("enter the total nodes");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        new=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&new->data);
        if(head==NULL){
                    head=new;
                    tail=new;
        }
        else{
            tail->next=new;
            tail=new;
        }
    }
    display();
    beginning();
    end();
    specified();
    }
void display(){
    temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }

}
void beginning(){
    
    printf("enter element to add at beginning\n");
    
    new=(struct node*)malloc(sizeof(struct node));      // new->next=head;head=new;
    scanf("%d",&new->data);
    new->next=head;
    head=new;
    display();
}
void end(){
    printf("enter element to add at end\n");
    new=(struct node*)malloc(sizeof(struct node));              // tail->next=new;
    scanf("%d",&new->data);
    tail->next=new;
    new->next=NULL;
    tail=new;
    display();
}
void specified(){
    int p;
    printf("enter specified position to insert");
    scanf("%d",&p);
    new=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&new->data);
    temp=head;
    for(int i=0;i<p-2;i++){
        temp=temp->next;
    }
    new->next=temp->next;
    temp->next=new;
    display();
}