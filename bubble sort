#include <stdio.h>
  void swap(int s[], int b,int c){
       int temp;
       temp= s[b];
       s[b]=s[c];
       s[c]=temp;
  }
 
int main() {
    int n,n1;
    scanf("%d",&n);
	int  a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int j=n-1;j>0;j--){
    for(int i=0;i<j;i++){
        if(a[i]>a[i+1]){
            swap(a,i,i+1);
        }
    }
    }
              

    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

