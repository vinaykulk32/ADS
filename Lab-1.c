#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void create();
void display();
void sortList();
void displayFailed();


struct node{
int m1,m2,m3,total;
char name[20],usn[20];
struct node *next;
};

struct node *head=NULL;
int main()
{
    int c;
    while(1)
    {
        printf("\n 1.Insert\n");
        printf("\n 2.Display\n");
        printf("\n 3.Display Failed Students List\n");
        printf("\n 4.Exit\n");
        printf("Enter your choice:");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            create();
            break;
        case 2:
            sortList();
            display();
            break;
        case 3:
            displayFailed();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\n Wrong Choice:\n");
            break;
        }
    }
    return 0;
}

void create()
{
    struct node *temp,*ptr;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("\nOut of memory space");
        exit(0);
    }
    printf("Enter the data for the student:\n");
    printf("Enter the name of the student:\n");
    scanf("%s",&temp->name);
    printf("Enter the usn of the student:\n");
    scanf("%s",&temp->usn);
    printf("Enter the marks of 3 subjects:\n");
    scanf("%d %d %d",&temp->m1,&temp->m2,&tcase 2:
            sortList();
            display();
            break;emp->m3);
    int t=temp->m1+temp->m2+temp->m3;
    temp->total=t;
    temp->next=NULL;

    if(head==NULL)
    {
        head=temp;
    }
    else{
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}
void sortList()
{
    struct node *current = head, *index = NULL;
    int total1;char name1[20],usn1[20];
    if(head == NULL)
    {
        return;
    }
    else
    {
        while(current != NULL)
        {
            index = current->next;
                while(index != NULL)
                {
                    if(current->total > index->total) {
                        total1 = current->total;
                        //name1=current->name;
                        strcpy(name1,current->name);
                        //usn1=current->usn;
                        strcpy(usn1,currencase 2:
            sortList();
            display();
            break;t->usn);
                        current->total = index->total;
                        strcpy(current->name,index->name);
                        //current->name = index->name;
                        strcpy(current->usn,index->usn);
                        //current->usn = index->usn;
                        index->total = total1;
                        //index->name = name1;
                        strcpy(index->name,name1);

                        //index->usn = usn1;
                        strcpy(index->usn,usn1);
                    }
                    index = index->next;
                }
                current = current->next;
            }
        }
    }
void display()
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("\nList is empty:\n");
        return;
    }
    else
    {
        ptr=head;
        printf("\nStudent List:\n");
        while(ptr!=NULL)
        {
            printf("Name: %s\t", ptr->name);
            printf("USN: %s\t", ptr->usn);
            //printf("Marks1: %d\t", ptr->m1);
            //printf("Marks2: %d\t", ptr->m2);
            //printf("Marks3: %d\t", ptr->m3);
            printf("Total Marks: %d\t\n", ptr->total);
            ptr=ptr->next;
        }
    }
}
void displayFailed()
{

    struct node *ptr;
    if(head==NULL){
        printf("\nList is empty:\n");
        return;
    }
    else
    {
        ptr=head;
        printf("\nFailed Students List:\n");
        while(ptr!=NULL)
        {
            if(ptr->total<40)
            {
                printf("Name: %s\t", ptr->name);
                printf("USN: %s\t", ptr->usn);
                printf("Total Marks: %d\t\n", ptr->total);
                ptr=ptr->next;
            }
            else
            {
                return;
            }
        }
    }
}
