#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int arr[1000];
int size;
int i;

//Create function
void createArray(){
    printf("enter the size: ");
    scanf("%d",&size);
    if(size<=0){
        printf("Inter greater then 0\n\n");
    }else{
        arr[size];
        for(i=0; i<size; i++){
            printf("arr[%d]: ",i);
            scanf("%d",&arr[i]);
        }
        
        printf("------------------------------\n");
        printf("Yaaahoo!!! array created\n");
    }
    
}

//insert a value
void insertArray() {
    int pos,value;
    printf("enter position: ");
    scanf("%d",&pos);
    printf("enter a value: ");
    scanf("%d",&value);
    for(i=size; i>=pos; i--) {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
    size++;
    printf("\n");
    printf("------------------------------\n");
    printf("Value Inserted Successfully\n");
}

//read array function
void showArray() {
    printf("\n------------------------------\n");
    printf("The array is: ");
    for(i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n------------------------------\n\n");
}

//search from array function written here
void valueSearch(){
    int valSearch, flag=0;

    printf("Enter a number for searching: ");
    scanf("%d",&valSearch);
    for(i=1; i<=size; i++){
        if(arr[i]==valSearch){
            printf("\n------------------------------\n");
            printf("Value found!!\n%d is at arr[%d]\n", arr[i], i);
            printf("------------------------------\n\n");
            flag=1;
        }
    }
    if(flag==0){
        printf("------------------------------\n");
        printf("Value not found.\n");
        printf("------------------------------\n\n");
    }
}

//read from Index function
void indexSearch(){
    int indsa;
    printf("Enter a position: ");
    scanf("%d",&indsa);

    if(size < indsa){
        printf("array overflow!\n\n");
    }else{
        for(i=1; i<=size; i++){
            if(i == indsa){
                if(arr[i]==0){
                    printf("------------------------------\n");
                    printf("array[%d] is empty\n",indsa);
                    printf("------------------------------\n\n");
                }else{
                    printf("------------------------------\n");
                    printf("array[%d] is %d\n", indsa, arr[i]);
                    printf("------------------------------\n\n");
                }
            }
        }
    }
}

//Update Function
void update(){
    int pos, value, flag=0;

    printf("Enter a position 1 to %d: ",size);
    scanf("%d",&pos);
    printf("Enter a value: ");
    scanf("%d",&value);
    for(i=1; i<=size; i++){
        if(i == pos){
            arr[i-1]=value;
            flag =1;
            break;
        }
    }
    printf("\n------------------------------\n");
    printf("Value updated Successfully!\n");
    printf("------------------------------\n\n");
}

//Delete Fuction
void delete(){
    int deletePos;
    printf("enter position 1 to %d", size);
    scanf("%d", &deletePos);

    if(deletePos <= 0 || deletePos > size){
        printf("Invalid input!\n");
    }else{
        for(i=deletePos-1; i<size; i++){
            arr[i] = arr[i+1];
        }
        size--;
        for(i=0; i<size; i++){
            printf("%d ",arr[i]);
        }
    }
    printf("\n------------------------------\n");
    printf("Position deleted Successfully!\n");
    printf("------------------------------\n\n");
}
int main(){

        int choice,choice1,choice2,spy=0;

    do {
        printf("Press 1 to create a array. \n");
        printf("Press 2 to read the array. \n");
        printf("Press 3 to update the array. \n");
        printf("Press 4 to delete the array. \n");
        printf("Press 5 to Exit. \n");

        scanf("%d",&choice);

        switch (choice)
        {
        case (1):
            printf("\n------------------------------\n");
            printf("press 1 to create a full array.\n");
            printf("press 2 to insert a value in array.\n");
            scanf("%d",&choice1);
            if(choice1==1){
                createArray(); //function called here
                printf("------------------------------\n\n");
                spy=1;
            }else if(choice1==2){
                if(spy==0){
                    printf("you've to create a array fisrt\n");
                    printf("------------------------------\n\n");
                }else{
                    insertArray(); //function called here
                    printf("------------------------------\n\n");
                }    
            }
            break;
            
        case (2):
            printf("\n------------------------------\n");
            
            if(spy==0){
                
                printf("you've to create a array fisrt\n");
                printf("------------------------------\n\n");
                break;
            }else if(spy==1){
                printf("press 1 to read full array.\n");
                printf("press 2 to search a value from array.\n");
                printf("press 3 to read from index.\n");
                scanf("%d",&choice2);
                if(choice2==1){
                    showArray(); // read function is called here.
                }else if(choice2==2){
                    valueSearch(); //search from array function is called here.
                }else if(choice2==3){
                    indexSearch(); // index of array function is called here.
                }
            }
            break;
        case (3):
            if(spy==0){
                printf("\n------------------------------\n");
                printf("you've to create a array fisrt\n");
                printf("------------------------------\n\n");
                break;
            }else if(spy==1){
                update();
            }
            
            break;
        case (4):
            if(spy==0){
                printf("\n------------------------------\n");
                printf("you've to create a array fisrt\n");
                printf("------------------------------\n\n");
                break;
            }else if(spy ==1){
                delete();
            }
            
            break;
        case (5):
            exit(0);
        default:
            printf("please enter between 1-5\n");
            break;
        }

    }while(1);
    
    
    

    return 0;
}




