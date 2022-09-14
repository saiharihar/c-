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
    
    for(int j=1;j<n;j++){
        int i=j;
        while(1==1){
            if(a[i]>a[i-1] ||i==0){
                break;
            }
            else if(a[i]<a[i-1]){
                swap(a,i,i-1);
                i--;
            }

        }
             
        }

    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

