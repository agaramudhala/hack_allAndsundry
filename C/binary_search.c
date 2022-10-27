#include<stdio.h>

int main(){
    int size,arr[100],flag;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the array elements separated with space: ");
    for(int i=0; i<size; ++i){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to search: ");
    scanf("%d",&flag);
    int found = size;
    int left = 0,right = size - 1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(arr[mid] < flag){
            left = mid + 1;
        }
        else if(arr[mid] > flag){
            right = mid - 1;
        }
        else{
            found = mid;
            break;
        }
    }
    if(found == size){
        printf("%d not found",flag);
    }
    else{
        printf("%d found at index %d",flag,found);
    }
    return 0;
}
