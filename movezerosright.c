#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int *arr = malloc(sizeof(int)*size);
    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("The array you entered is: ");
    for(int i = 0;i<size;i++){
        printf("%d ",arr[i]);
    }
    int count = 0;
    for(int i = 0;i<size;i++){
        if(arr[i] == 0){
            count++;
        }
    }
    printf("\nThe array after arranging the zeros is: ");
    for(int i = 0;i<size;i++){
        if(arr[i] != 0)
        printf("%d ",arr[i]);
    }
    for(int i = 0;i<count;i++){
        printf("%d ",0);
    }
}