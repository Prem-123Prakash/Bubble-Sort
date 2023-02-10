#include<stdio.h>
int main(){
    int i,j, swap,n,a[10];
    printf("Enter the number of array elements :\n");
    scanf("%d",&n);
    printf("Enter the array elements:-\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
            }
            
        }
        
    }
    printf("The sorted elements of the array is:-\n");
        for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;

    
}
