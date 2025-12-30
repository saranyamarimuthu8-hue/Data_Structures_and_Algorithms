#include<stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;
int main(){
    int n;
    printf("Enter number of elements to insert(max %d):",MAX);
    scanf("%d",&n);
    if(n>MAX){
        printf("Stack overflow! Too many elements\n");
        return 0;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&stack[i]);
        top++;
        }
        if(top==-1){
            printf("Stack Underflow! No element to pop\n");
        }
        else{
            printf("\nPopped element: %d\n",stack[top]);
            top--;
        }
        printf("\nStack after pop:\n");
        if(top==-1){
            printf("Stack is empty\n");
        }else{
            for(int i=top;i>=0;i--){
                printf("%d\n",stack[i]);
            }
        }
    return 0;
}
