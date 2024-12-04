//PERSONAL BUDGET PLANAR

#include <iostream>
using namespace std;
int main(){
	int choice;
	int income=0;
	int expense=0;
	int totalincome=0;
    int balance=1000;
    
	
	do{
		
	cout<< "personal budget planar" << endl;
	cout<< "1.ADD INCOME " << endl;
	cout<< "2.ADD EXPENSE " << endl;
	cout<< "3.VIEW BALANCE " << endl;
	cout<< "4.EXIT " << endl;	
	cout<<	"PLEASE SELECT OPTIONS (1-4) " << endl;
	
	cin>>choice;
	
	if(choice<0 || choice>4)
	cout<<"invalid choice";
	continue;
	
	switch (choice){
		case 1:
			cin>> income;
			if(income<0){
			cout<< "enter positive value" <<endl;}
			else{
					cout<< "ADD ICOME" << income+balance <<endl;
					break;
			}
		case 2:
		cout <<"ADD EXPENSE" <<endl;
		cin>>expense;
		if(expense<0 || expense>income){
			cout<< "enter positive value" <<endl;}
			else{
					cout<< "ADD expense" << expense-balance <<endl;
					break;
			}
		
		case 3:	
		
		cout << "viewbalance" << balance  <<endl;
		break;
		
		case 4:
			cout<< "exiting" <<endl;
			break;
			
		default:
		cout<< "invalid" <<endl;
	}
	
		
		
		
		
		
	}while(choice!=4) 
	
	cout<<"exiting" <<endl;
	
	  
     
    
	
	
	
return 0;	
	
	
}
