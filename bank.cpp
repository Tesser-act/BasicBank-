#include <iostream>
#include <iomanip>
using namespace std;


void showBal(double balance);
double deposit();
double withdraw(double withdraw);

int main(){
 	
	double balance;
	int choice = 0; 
	
	do{
	cout << "_________________"   <<endl;
	cout << "ENTER YOUR CHOICE"   <<endl;
	cout << "-----------------"   <<endl;
	cout << "1.   Show Balance"   <<endl;
	cout << "2.   Deposit Amount"  <<endl;
	cout << "3.   Withdraw Amount" <<endl; 
	cout << "4.   EXIT" <<endl;
	
    cin >> choice;
    
    cin.clear();
    fflush(stdin);

    switch (choice){
    	case 1 :
    		showBal(balance);
    		break;
	   
	    case 2 : 
		    balance += deposit();
		    showBal(balance);
		    break;
	   
	    case 3 :
		    balance -= withdraw(balance);
		    showBal(balance);
	        break;
	
		case 4 :
			cout << "thanks for visiting :)" <<endl;
		    break;
		    
		default :
			cout << "invalid argument" <<endl;
			break;
			}
	
	}while(choice != 4);
	
	return 0;
	}
	
	
void showBal(double balance){
	cout << "your current balance is $" << setprecision(2) << fixed << balance <<endl;
}
double deposit(){
	double amount = 0;
	cout << "ENTER AMOUNT TO BE DEPOSITED($): " ;
	cin >> amount;
	
	if (amount > 0 ){
		return amount;
	}
	else{
		cout << "ERROR : that's not a valid argument" <<endl;
		return 0;
	}
}
double withdraw(double balance){

double amount = 0;
cout << "ENTER AMOUNT TO BE WITHDRAWN($): " ;
cin >> amount;
if (amount > balance) {
	cout << "ERROR : Insufficient Funds - (MONEY NOT WITHDRAWN)" <<endl;
	return 0;
}
else if (amount < 0) {
	cout << "ERROR : that's not a valid argument - (MONEY NOT WITHDRAWN)" <<endl;
	return 0;
}
else{
	return amount;
	}
}






