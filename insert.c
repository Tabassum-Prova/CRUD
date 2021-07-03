#include <stdio.h>
int main(){
    int size=5,i;
    int arr[size];
    for(i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    for(i=5; i>=2; i--){
        arr[i]=arr[i]-1;
    }
    arr[2-1]=25;

    size++;
    for(i=0; i<size; i++){
        printf("%d ",arr[i]);
    }

    
    return 0;
}