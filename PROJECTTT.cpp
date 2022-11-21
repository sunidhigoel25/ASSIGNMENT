#include <iostream>
#include<fstream>
#include <iomanip>

using namespace std;

void mainmenu();

class management{
	public:
		management()
		{
			mainmenu();
		}
		
};

class details{
	public:
		string name, gender;
		int age;
	    int cid;
		string add;
		char arr[100];
		
		void information(){
			cout<<"entere the customer ID"<<endl;
			cin>>cid;
			cout<<"entere the name"<<endl;
			cin>>name;
			cout<<"entere the age"<<endl;
			cin>>age;
			cout<<"entere the address"<<endl;
			cin>>add;
			cout<<"entere the gender"<<endl;
			cin>>gender;
			cout<<"your details are saved with us"<<endl;
			
		} 
};


class registration
{
	public:
		int choice;
		int choice1;
		int back;
		float charges;
		void flights()
		{
			string flightsN[]={"dubai","venice","paris","romania","argentina","spain"};
			for (int a = 0; a<6; a++)
			cout<<(a+1)<<".flight to "<<flightsN[a]<<endl;
				
			cout<<"\nWelcome to the Airlines!"<<endl;
			cout<<"Press ther number of the country of which you want to book the flight:"; 
			cin>>choice;
			switch(choice)
			{
			case 1:
			{
				cout<<"Welcome to Dubai Emirates\n"<<endl;
				cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
				cout<<"Following are the flights \n"<<endl;
				cout<<"1. DUB - 498"<<endl;
				cout<<"\t08-12-2022 8:00AM 10hrs Rs. 14000"<<endl;
				cout<<"\t09-12-2022 4:00AM 12hrs Rs. 10000"<<endl;
				cout<<"2. DUB - 658"<<endl;
				cout<<"3. DUB - 508"<<endl;
				cout<<"\t11-12-2022 11:00AM 11hrs Rs. 9000"<<endl;
				cout<<"\nSelect the flight you want to book :"; 
				cin>>choice1;
				if(choice1==1)
				{
			
					charges=14000;
					cout<<"\nYou have successfully booked the flight DUB - 498"<<endl; cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else if (choice1==2)
				{
					charges=10000;
					cout<<"\nYou have successfully booked the flight DUB - 658"<<endl; cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else if (choice1==3)
				{
					charges=9000;
					cout<<"\nYou have successfully booked the flight DUB - 508"<<endl; 
					cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else
				{
					cout<<"invalid input , shifting too the previous menu ";
					flights();
				}
				cout<<"Press any key to go back to the main menu:"<<endl; 
				cin>>back;
				if (back==1)
				{
					mainmenu();
				}
				else
				{
					mainmenu();
				}
			}
			case 2:
			{
				cout<<"Welcome to Venice Emirates\n"<<endl;
				cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
				cout<<"Following are the flights \n"<<endl;
				cout<<"1. VEN- 498"<<endl;
				cout<<"\t08-12-2022 8:00AM 10hrs Rs. 24000"<<endl;
				cout<<"\t09-12-2022 4:00AM 12hrs Rs. 20000"<<endl;
				cout<<"2. VEN - 158"<<endl;
				cout<<"3. VEN - 198"<<endl;
				cout<<"\t11-12-2022 11:00AM 11hrs Rs. 19000"<<endl;
				cout<<"\nSelect the flight you want to book :"; cin>>choice1;
				if(choice1==1)
				{
			
					charges=24000;
					cout<<"\nYou have successfully booked the flight VEN - 498"<<endl; cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else if (choice1==2)
				{
					charges=20000;
					cout<<"\nYou have successfully booked the flight VEN - 158"<<endl; cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else if (choice1==3)
				{
					charges=19000;
					cout<<"\nYou have successfully booked the flight VEN - 198"<<endl; 
					cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else
				{
					cout<<"invalid input , shifting too the previous menu ";
					flights();
				}
				cout<<"Press any key to go back to the main menu:"<<endl; 
				cin>>back;
				if (back==1)
				{
					mainmenu();
				}
				else
				{
					mainmenu();
				}
		   }
		   case 3:
			{
				cout<<"Welcome to Paris Emirates\n"<<endl;
				cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
				cout<<"Following are the flights \n"<<endl;
				cout<<"1. PAR 698"<<endl;
				cout<<"\t08-12-2022 8:00AM 10hrs Rs. 34000"<<endl;
				cout<<"\t09-12-2022 4:00AM 12hrs Rs. 30000"<<endl;
				cout<<"2. PAR - 158"<<endl;
				cout<<"3. PAR - 658"<<endl;
				cout<<"\t11-12-2022 11:00AM 11hrs Rs. 29000"<<endl;
				cout<<"\nSelect the flight you want to book :"; cin>>choice1;
				if(choice1==1)
				{
			
					charges=34000;
					cout<<"\nYou have successfully booked the flight PAR- 698"<<endl; cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else if (choice1==2)
				{
					charges=30000;
					cout<<"\nYou have successfully booked the flight PAR - 158"<<endl; cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else if (choice1==3)
				{
					charges=29000;
					cout<<"\nYou have successfully booked the flight UPAR - 658"<<endl; 
					cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else
				{
					cout<<"invalid input , shifting too the previous menu ";
					flights();
				}
				cout<<"Press any key to go back to the main menu:"<<endl; 
				cin>>back;
				if (back==1)
				{
					mainmenu();
				}
				else
				{
					mainmenu();
				}
			}
			case 4:
			{
				cout<<"Welcome to Romania Emirates\n"<<endl;
				cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
				cout<<"Following are the flights \n"<<endl;
				cout<<"1. ROM- 157"<<endl;
				cout<<"\t08-12-2022 8:00AM 10hrs Rs. 44000"<<endl;
				cout<<"\t09-12-2022 4:00AM 12hrs Rs. 40000"<<endl;
				cout<<"2. ROM - 567"<<endl;
				cout<<"3. ROM - 696"<<endl;
				cout<<"\t11-12-2022 11:00AM 11hrs Rs. 39000"<<endl;
				cout<<"\nSelect the flight you want to book :"; cin>>choice1;
				if(choice1==1)
				{
			
					charges=44000;
					cout<<"\nYou have successfully booked the flight ROM - 157"<<endl; cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else if (choice1==2)
				{
					charges=40000;
					cout<<"\nYou have successfully booked the flight ROM - 567"<<endl; cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else if (choice1==3)
				{
					charges=39000;
					cout<<"\nYou have successfully booked the flight ROM - 696"<<endl; 
					cout<<"You can go back to menu and take the ticket"<<endl;
				
				}
				else
				{
					cout<<"invalid input , shifting too the previous menu ";
					flights();
				}
				cout<<"Press any key to go back to the main menu:"<<endl; 
				cin>>back;
				if (back==1)
				{
					mainmenu();
				}
				else
				{
					mainmenu();
				}
			}
			case 5:
			{
				cout<<"Welcome to Argentina Emirates\n"<<endl;
				cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
				cout<<"Following are the flights \n"<<endl;
				cout<<"1. ARG- 696"<<endl;
				cout<<"\t08-12-2022 8:00AM 10hrs Rs. 54000"<<endl;
				cout<<"\t09-12-2022 4:00AM 12hrs Rs. 50000"<<endl;
				cout<<"2. ARG - 157"<<endl;
				cout<<"3. ARG - 566"<<endl;
				cout<<"\t11-12-2022 11:00AM 11hrs Rs. 49000"<<endl;
				cout<<"\nSelect the flight you want to book :"; cin>>choice1;
				if(choice1==1)
				{
			
					charges=54000;
					cout<<"\nYou have successfully booked the flight ARG - 696"<<endl; cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else if (choice1==2)
				{
					charges=50000;
					cout<<"\nYou have successfully booked the flight ARG - 157"<<endl; cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else if (choice1==3)
				{
					charges=49000;
					cout<<"\nYou have successfully booked the flight ARG - 566"<<endl; 
					cout<<"You can go back to menu and take the ticket"<<endl;
					
				}
				else
				{
					cout<<"invalid input , shifting too the previous menu ";
					flights();
				}
				cout<<"Press any key to go back to the main menu:"<<endl; 
				cin>>back;
				if (back==1)
				{
					mainmenu();
				}
				else
				{
					mainmenu();
				}
			}
			case 6:
			{
				cout<<"Welcome to Spain Emirates\n"<<endl;
				cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
				cout<<"Following are the flights \n"<<endl;
				cout<<"1. SP- 200"<<endl;
				cout<<"\t08-12-2022 8:00AM 10hrs Rs. 54000"<<endl;
				cout<<"\t09-12-2022 4:00AM 12hrs Rs. 50000"<<endl;
				cout<<"2. SP - 500"<<endl;
				cout<<"3. SP - 700"<<endl;
				cout<<"\t11-12-2022 11:00AM 11hrs Rs. 49000"<<endl;
				cout<<"\nSelect the flight you want to book :"; cin>>choice1;
				if(choice1==1)
				{
			
					charges=54000;
					cout<<"\nYou have successfully booked the flight SP - 200"<<endl; cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else if (choice1==2)
				{
					charges=50000;
					cout<<"\nYou have successfully booked the flight SP - 500"<<endl; cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else if (choice1==3)
				{
					charges=49000;
					cout<<"\nYou have successfully booked the flight SP - 700"<<endl; 
					cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else
				{
					cout<<"invalid input , shifting too the previous menu ";
					flights();
				}
				cout<<"Press any key to go back to the main menu:"<<endl; 
				cin>>back;
				if (back==1)
				{
					mainmenu();
				}
				else
				{
					mainmenu();
				}
			}
			default :
				{
					cout<<"invalid input , shifting you to the main menu"<<endl;
					mainmenu();
					break;
				}
		}
	}
};

class ticket: public registration ,public details{
	public:
		void bill(){
			string des="";
			ofstream outf("records.txt");
			{
				outf<<"sunidhi airlines"<<endl;
				outf<<"ticket"<<endl;
				outf<<"________";
				outf<<"customer ID"<<details::cid<<endl;
				outf<<"customer Name"<<details::name<<endl;
				outf<<"customer Gender"<<details::gender<<endl;
				outf<<"description"<<endl;
				
				if(registration::choice==1){
					des=="dubai";
				}
				else if(registration::choice==2){
					des="venice";
				}
				else if(registration::choice==3){
					des="paris";
				}
				else if(registration::choice==4){
					des="romania";
				}
				else if(registration::choice==5){
					des="argentina";
				}
				else if(registration::choice==6){
					des="spain";
				}
				
				outf<<"destination"<<des<<endl;
				outf<<"flight cost "<<registration::charges<<endl;
				
			}
			outf.close();
		}
		void dispbill(){
			ifstream ifs("records.txt");
			{
				if(!ifs)
				{
					cout<<"file error"<<endl;
				}
				while(!ifs.eof()){
					ifs.getline(arr,100);
				}
			}
			ifs.close();
		}
};

			
void mainmenu()
{
	int lchoice;
	int schoice;
	int back;
	cout<<"\t   SUNIDHI AIRLINES "<<endl<<endl;
	cout<< "\t   main menu"<<endl;
	cout<<"\t press 1 to add the customer details "<<endl;
	cout<<"\t press 2 to add the flight registration"<<endl;
	cout<<"\t press 3 for ticket and charges"<<endl;
	cout<<"\t press 4 to exit "<<endl;
	cout<<"\t\t\t\t\t"<<endl;
	cout<<"enter the choice"<<endl;
	cin>>lchoice;
	details d; 
	registration r;
	ticket t;
	
	switch(lchoice){
		
		case 1:
			{
				cout<<"customers"<<endl;
				t.information();
				cout<<"press any key to go back to main menu";
				cin>>back;
				if(back==1){
					mainmenu();
				}
				else{
					mainmenu();
				}
				break;
			}
		case 2:
			{
				cout<<"book a flight using this system"<<endl;
				t.flights();
				break;
			}
		case 3:
			{
				cout<<"GET YOUR TICKETS";
				t.bill();
				cout<<"your ticket is printed , you can collect it "<<endl;
				cout<<"press 1 to display your ticket";
				cin>>back;
				
				if(back==1){
					t.dispbill();
					cout<<"press any key to go back to main menu";
					cin>>back;
					if(back==1){
						mainmenu();
					}
					else{
						mainmenu();
					}
					break;
				}
			}
		case 4:
			{
				cout<<"thank you"<<endl;
				break;
			}
			default:
			{
				cout<<"invalid input please try again"<<endl;
				mainmenu();
				break;
			}
	}
} 

int main()
{
	management obj;
	return 0;
}
