#include <stdio.h>
#define max_size 100

struct stack {
  int item[max_size];
  int top;
};

typedef struct stack st;//giving short name to stack

void push(st *stack) { //push function
  if (stack->top == max_size - 1) {
    printf("full");
  } else {
    printf("enter data to be entered");
    int info;
    scanf("%d", &info);
    stack->top++;
    stack->item[stack->top] = info;
    printf("data pushed is %d\n", info);
  }
}
//pop function
void pop(st *stack) {      
  if (stack->top == -1) {
    printf("empty stack");
  } else {
    int item;
    item = stack->item[stack->top];
    stack->top--;
    printf("deleted data is %d\n", item);
  }
}
//traversing given stack
void traverse(st *stack) {
  int i;
  for (i = 0; i <= stack->top; i++) {
    printf("%d\n", stack->item[i]);
  }
}

int main(void) {
  st stc;
  stc.top = -1; // Initialize stack top
  
  int a, b = 4; // Initialize a
  do {
    printf("Enter option (1: push, 2: pop, 3: traverse): ");
    scanf("%d", &a);
    
    switch (a) {
      case 1:
        push(&stc);
        break;
      case 2:
        pop(&stc);
        break;
      case 3:
        traverse(&stc);
        break;
    }
    
    printf("Enter 5 to continue: ");
    scanf("%d", &b);
  } while (b!=5);

  printf("Hello World\n");
  return 0;
}
