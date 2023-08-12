#include<stdio.h>
#define max_size 100
int item[max_size];
int top =-1;

void push() { //push function
  if (top == max_size - 1) {
    printf("full");
  } else {
    printf("enter data to be entered");
    int info;
    scanf("%d", &info);
  top++;
    item[top] = info;
    printf("data pushed is %d\n", info);
  }
}
//pop function
void pop() {      
  if (top == -1) {
    printf("empty stack");
  } else {
    int info;
    info = item[top];
    top--;
    printf("deleted data is %d\n",info);
  }
}
//traversing given stack
void traverse() {
  int i;
  for (i = 0; i <=top; i++) {
    printf("%d\n",item[i]);
  }
}
int main(){
printf("   ///   PROGRAM TO SHOW STACK OPERATION  \\\   \n");
  int choice;
  while(choice!=4){
    printf("\n  Please enter ur choice\n");
    printf(" \t 1.PUSH\n \t2.POP \n \t3.Traverse \n\t4.Exit");
    printf("PLease enter 1-4 \n");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
      push();
      break;
       case 2:
      pop();
      break;
       case 3:
      traverse();
      break;
       case 4:
      break; 
      default:
      printf("!!!OPPS You entered Invalid");
    }  
  }
  

  return 0;
}