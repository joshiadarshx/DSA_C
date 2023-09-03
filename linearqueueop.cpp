#include<iostream>
using namespace std;
int size=100;
int front =-1;
int rear = -1;
int queue[100];
void enqueue();
void dequeue();
void traverse();
void sizee();
//void peek();
int main(){
	int choice;
	do{
		cout<<"1. enqueue\n2. dequeue\n3. traverse\n4. size\n5. peek\n 6.exit"<<endl;
		cout<<"please enter"<<endl;
		cin>>choice;
		switch(choice){
			case 1: enqueue();
			break;
				case 2: dequeue();
			break;
				case 3: traverse();
			break;
				case 4: sizee();
			break;
//			case 5 : peek();
//			break;
			    case 6:exit(1);
			    break;
			    default: cout<<" please enter valid number "<<endl;
		}
	}while(choice!=6);

	return 0;
}
void enqueue(){
	if(rear==size-1){
		cout<<"Overflow"<<endl;
		
	}
	else{
		cout<<"Enter the data to be inserted"<<endl;
		int data;
		cin>>data;
		rear++;
		queue[rear]=data;
		cout<<"\n Your inserted data is "<<data<<endl;
	
	}
	if(front=-1){
		front=0;   //for first entered data
	}
}
void dequeue(){
	if(front ==-1 && rear ==-1){
		cout<<"under flow"<<endl;
                 }
    else{
    	cout<<" deleted element is "<<queue[front]<<endl;
    	if(front==rear){
    		front=rear=-1;   //for single element	
		}
	    else{
	    	front++;
		}
    	
	}
}
void traverse(){
	int i;
	if(front==-1&&rear==-1){
		cout<<"underflow \n\n";
	}
	cout<<"data in queue are"<<endl;
	for(i=front;i<=rear;i++){
		cout<<queue[i]<<endl;
	}
	cout<<"\nyour front is in    "<<queue[front]<<endl<<endl;
}
//void peek(){
//	if(rear==-1&&front==-1){
//		cout<<" empty queue\n\n"<<endl;
//	}
//	else{
//		cout<<" element in front is "<<queue[front]<<endl;
//	}
//}
void sizee(){
		if(rear<front){
		cout<<" empty queue";
	}
	else{
		cout<<" the size of queue is "<<(rear-front)+1;
	}
}
