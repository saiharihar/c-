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
    n1=n;
    
    int minindex=0;
    for(int j=0;j<n;j++){
        minindex=j;
    for(int i=j+1;i<n;i++){
        if(a[minindex]>a[i]){
              minindex=i;
        }
    }
     if(minindex==j){
         continue;
     }
     else{
         swap(a,minindex,j);
     }
    }

    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

