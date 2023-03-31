#include<stdio.h>

int main(){
     int array[100],position,c,n;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(c=0;c<n;c++){
        scanf("%d",&array[c]);
    }
      printf("enter the location where you wish to delete an array:\n");
      scanf("%d",&position);
      for(c=position;c<n-1;c++){
        array[c]=array[c+1];
      }
    return 0;
}