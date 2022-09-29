#include <stdio.h>
int main() {
    int temp=0,n,i,j,a[10][10];
    printf("Enter range:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the element:");
        scanf("%d",&a[i]);
        }
    printf("\nArray Before Swapping\n");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;i++){
            if (a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nArray After Swapping");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
return 0;}