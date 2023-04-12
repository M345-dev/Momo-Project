#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	float balance, counter;
	float yes;
	float no;
	float an;
	float amount;
	const int default_pin = 0000;
    balance = 1000;
	int trials;
	int contact;
	float reference;
	int amount_of;
	int choose;
	int pin;
	int old_pin;
    int c_pin;
	int new_pin;
	string digits;
	char option;
	float select;
	float crack;
	cout << " Authentication"<<endl;
	cout << "1.Reset/ Change pin.\n";
	cout << "2. Check balance.\n";
	cout << "3. send money.\n";
	cin >> choose;
	
	if(choose ==1) {
		
	cout << "Are you sure you want to reset your momo code"<<endl;
	cout << "choose yes/no"<<endl;
	cin >> option;
}
	if (choose ==yes) {
	cout << " Enter old pin,Enter new pin.\n"<<old_pin<<new_pin<<endl;
	cin >> old_pin, new_pin;
	pin == new_pin;
	cout << "Your new pin is "<<new_pin;
}

     if (choose==2)
    do{ 
    cout << "Please enter your momo pin :"<<endl;
	cin >> pin;
	trials ++;
	  if (pin != default_pin) {
		cout << "Incorrect momo pin, try again"<<endl;
	}
else if(pin == default_pin) {
		cout << "Your Mobile Money balance is 1000" <<endl;
} 
}
    while (pin != default_pin && trials <3);
	if (trials >3) {
		cout << "Total trials reached"<<endl;
		cout << "Program closed"<<endl;
	}
  
   switch(pin){
   	crack;
   }
   
  if (choose==3){
   cout << "Enter Mobile Money Number"<<endl;
   cin >> contact;
   cout << "Enter amount you wish to send"<<endl;
   cin >>amount;
   cout << "Transfer an amount of :"<<amount<<contact<<endl;
   cout <<"Input reference"<<endl;
   cin >> reference;
   cout << " Enter your four-digit code"<<endl;
   cin >> pin;
   
   do {
   	trials ++;
   	
     if (pin != default_pin){
    	cout << "Incorrect momo pin, please try again later.\n";	
	}
	 else 	if (pin == default_pin){
   		cout << "You have successfully sent "<<amount_of<<"to"<<contact<<endl;
   		cout << " Your current balance is" <<balance- amount<<endl;
	   }
   }
    while (pin != default_pin && trials <3);
	if (trials >3) {
		cout << "Total trials reached"<<endl;
		cout << "Program closed"<<endl;
	}
  
   switch(pin){
   	crack;
   }
	return 0;
}
}