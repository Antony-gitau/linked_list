#include<stdlib.h>
#include<stdio.h>

//create a node structure
struct Node{
    int data; //the list is made of integers
    struct Node* next;  //point to the address of the next value
};

struct Node* head;//global varible of the first node. 
                //its a pointer to the address of the next node location


//insert function (to insert the input value between the first node and the head node)
void insert(int fromuser){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node)); //create a memory location fir the new node
    temp -> data = fromuser; //the value by the user is stored as data
    temp -> next = head; // the adddress of the new value is the same that of the head
    head = temp; //head takes the address of the new value

}

// the function that will print the values of the linked list
void print(){
    struct Node* temp = head; // we use temp so we cant modify head, else we loose its address
    printf( "List is: "); //printing the values in the linked list

        while(temp != NULL){
            printf("%d ", temp -> data); // keep printing the data variable
            temp = temp -> next; // keep transversing through the arrays
    }
    printf("\n");
}

int main(){
    head = NULL; // meaning the linked list is empty

    printf("how many numbers?\n"); //ask for number of lists from user
    int num, i, fromuser; // initialize some variables
    scanf("%d",&num); //allow the user to input the values

    //loop through all the numbers
    for (i=0;i<num;i++){
        printf("enter the number \n");
        scanf("%d",&fromuser);
        insert(fromuser); //the function that will insert the value in the beginning
        print(); //print the values of the linked list
    }
}