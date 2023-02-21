#include <stdio.h>

int main(){
    int n;
    int oddCheck=0;
    int i,j; 
    int counter=0;

    printf("input odd number");
    scanf("%d",&n);
    if(n%2==0){
        oddCheck=1;                     //make check for adding +1 colum and line  
    }
    for(i=0;i<n+oddCheck;i++){
        for(j=0;j<n+oddCheck;j++){
            if(j==n/2 || j==n/2+counter || j==n/2-counter || i==n/2){  //check if middle or i more and i less 
                printf("*");
                if(j==n/2 && n%2==0){
                    printf("*");
                }
            }
            else{
                printf("a");
            }            
        }
        if(i<n/2){                                                      //count down after the half way
            counter++;
        }
        else{
            counter--;
        }
        printf("\n");
    }


    return 0;
}