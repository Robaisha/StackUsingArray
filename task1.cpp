#include<iostream>
using namespace std;
class Stack{
	int top;
	public:
		int max;
		int a[9];
		Stack(){
			top=0;
			max=0;
		}
		Stack(int m){
			top=-1;
	        max=m;
		}
		bool push(int x){
			if(top>(max-1)){
				cout<<"Stack overflow\n";
				return false;
			}
			else{
				a[++top]=x;
				cout<<"Pushed "<<x<<" into stack "<<endl;
				return true;
			}
		}
		int pop(){
		    if(top<0){
		    	cout<<"Stack underflow\n";
		    	return false;
			}
			else{
				int x=a[top--];
				return x;
			}
		}
		int peek(){
			if(top<0){
				cout<<"\nStack is empty\n";
			}
			else{
				int x=a[top];
				return x;
			}
		}
		bool isempty(){
			if(top<0){
				return true;
			}
			else{
				return false;
			}
		}
};
int main(){
	Stack obj(9);
	int x=0;
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	for(int i=0;i<10;i++){
		x=arr[i];
		obj.push(x);
	}
	obj.push(10);
	for(int j=0;j<10;j++){
		x=obj.pop();
		cout<<" "<<x<<" is poped \n";
	}
	obj.peek();
}
