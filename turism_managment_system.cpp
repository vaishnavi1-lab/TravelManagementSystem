#include<iostream>
#include<fstream>
#include<iomanip>
#include<string.h>
#include<windows.h>

using namespace std;
void menu();

class manage_menu
{
protected:
string user_name; // hide admin name

public:
     manage_menu()
	 {
	 	system("color 0A");  //changr terminal colour
	 	cout << " \n\n\n\n\n\n\n\n\n\t  ENTER NAME TO CUSTOMER AS AN ADMAIN: ";
	 	cin >> user_name;
	 	system("CLS");
	 	menu();
	 	
	}	
	
	~manage_menu()
	{ }
};
class customers
{
public:
	string name,gender,address;
    int age;
	long double mob_no;
	static int cus_id;
	char all[900];

void getdetails()
{
	ofstream out("old-customers.txt",ios::app);
	{
		cout << "ENTER CUSTOMER ID:  " << endl;
		cin >> cus_id;
		
		cout << "ENTER YOUR NAME:  " << endl;
		cin >> name;
		cout << "ENTER YOUR AGE:  " << endl;
		cin >> age;
		cout << "ENTER YOUR GENDER:  " << endl;
		cin >> gender;
		cout << "ENTER YOUR MOBILE NUMBER:  " << endl;
		cin >> mob_no;
		cout << "ENTER YOUR CURRENT ADDRESS:  " <<endl;
		cin >> address;
	}
	out << "\n CUSTOMER ID:  "<<cus_id <<"\n NAME:  "<<name <<"\n AGE:  "<<age <<"\n GENDER:  " << gender <<"\n MOBILE NUMBER:  "<<mob_no <<"\n ADDRESS:  "<<address <<"\n";
	out.close();
	cout<<"\n SAVED \n NOTE:  WE SAVE YOUR DETAILS SUCCESSFULLY FOR FUTURE PURPOSE \n"<<endl;
	
}
void show_details()
{
	ifstream in("old-customers.txt");
	{
		if(!in)
		{
			cout<<"File error ! "<<endl;
		}
		while(!(in.eof()))
		{
			in.getline(all,900);
			cout<<all<<endl;
		}
		in.close();
	}
}

};

int customers::cus_id;
class cabs
{
public:
	int cab_choice;
	int kilometers;
    float cab_cost;
	static float last_cab_cost;
	
	void cab_details()
	{
		cout << " We Collabarated with FASTEST,SAFEST and SMARTEST Cab service arround the country" << endl;
		cout << "--------------S_V_S-------------\n"<<endl;
		cout << " 1. Rent a SANDARD CAB - Rs.20 for 1KM " << endl;
		cout << " 2. Rent a LUXURY CAB - Rs.30 per 1KM " << endl;
		
		cout << "\nTo calculate the cost for your jurney:" << endl;
		cout << " ENTER WHICH KIND OF CAB YOU NEDD: ";
		cin >> cab_choice;
		cout << " ENTER KILOMETER YOU HAVETO TRAVEL:";
		cin >> kilometers;
		
		int hire_cab;
		
		if(cab_choice == 1)
		{
			cab_cost = kilometers * 20;
			cout << "\n YOUR TOUR COST IS:  " << cab_cost << " RS for a standard cab " << endl;
			cout << " press 1 to hire cab: or";
			cout << " press 2 to select another cab "; 
			cin >> hire_cab;
			
			system ( "CLS");
			
			if(hire_cab == 1)
			{
				last_cab_cost = cab_cost;
				cout << "\n YOU HAVE SUCCESSFULLY HIRED A STANDARD CAB" <<endl;
				cout << "GoTO Menu and take the receipt " <<endl;
				
			}
			
			else if( hire_cab == 2)
			{
				cab_details();
			}
			else
			{
				cout <<"Invalid Input !  Redirecting to previous menu \n please wait ....!" << endl;
				Sleep(900);
				system("CLS");
				cab_details();
			}
			
			
		}
		
		else if(cab_choice == 2)
		{
		cab_cost = kilometers * 30;
			cout << "\n YOUR TOUR COST IS:  " << cab_cost << " RS for a luxury cab " << endl;
			cout << " press 1 to hire cab: or";
			cout << " press 2 to select another cab "; 
			cin >> hire_cab;
			
			system ( " CLS ");
			
			if(hire_cab == 1)
			{
				last_cab_cost = cab_cost;
				cout << "\n YOU HAVE SUCCESSFULLY HIRED A LUXURY CAB" <<endl;
				cout << "GoTO Menu and take the receipt " <<endl;
				
			}
			
			else if( hire_cab == 2)
			{
				cab_details();
			}
			else
			{
				cout <<"Invalid Input !  Redirecting to previous menu \n please wait ....!" << endl;
				Sleep(900);
				system("CLS");
				cab_details();
			}
				
		}
		else
		{
		        cout <<"Invalid Input !  Redirecting to main menu \n please wait ....!" << endl;
				Sleep(900);
				system("CLS");
				menu();	
		}
		cout << "press 1 to redirect Main menu: ";
		cin >> hire_cab;
		system("CLS");
		if(hire_cab == 1)
		{
			menu();
		}
		else
		{
			menu();
		}
	}
	
};

float  cabs ::last_cab_cost;
class booking 
{
	public:
		
		int choice_hotel,pack_choice;
	    static float hotel_cost;
		
		void hotels()
		{
			string hotel_no[] = { " RAJVEER", " SHIVTEJ", "MADHUBAN"};
			for(int i = 0; i < 3; i++)
			{
				cout << ( i + 1) << " . HOTEL" << hotel_no[i] << endl;
			}
			
			cout << "\nCurrently we collaborated with the above hotels...!"<<endl;
			cout << "press any key to back or \n enter number of the hotel you want to book";
			cin >> choice_hotel;
			
			system("CLS");
			
			if(choice_hotel == 1)
			{
				cout<<"---------WELCOME TO HOTEL *RAJVEER*---------\n" << endl;
				cout << " The garden , food and the beverage. /n Enjoy all can drink , saty cool and get chilled in the summer sun..." <<endl;
				
				cout << "The packages Offered by the hotel RAVEERAJ:\n" <<endl;
				
				cout << "1. Standard Pack:-\n";
				cout << "\t All basic facilities you need just for : Rs 10000.00" <<endl;
				cout << "2. Premium Pack:-\n";
				cout << "\t Enjoyy Premium: Rs 15000.00" <<endl;
				cout << "3. Luxury Pack:-\n";
				cout << "\tLive a Luxuryy at RAVEERAJ : Rs 20000.00" <<endl;
				 
				cout << "\nPress another key to back or \nEnter package number you want to book :";
				cin >> pack_choice;
				
				if(pack_choice == 1)
				{
					hotel_cost = 10000.00;
					cout << "\n You have successfully booked STANDARD PACK at RAVEERAJ" <<endl;
					cout << " GoTo menu and take the receipt" << endl;
				}
				else if( pack_choice == 2)
				{
					hotel_cost = 15000.00;
					cout << "\n You have successfully booked PREMIUM PACK at RAVEERAJ" <<endl;
					cout << " GoTo menu and take the receipt" << endl;
				}
				else if(pack_choice == 3)
				{
				hotel_cost = 20000.00;
					cout << "\n You have successfully booked LUXUR PACK at RAVEERAJ" <<endl;
					cout << " GoTo menu and take the receipt" << endl;	
				}
				else
				{
					cout << "Invalid Input..! redirecting to previous Menu \n Plese wait...."<<endl;
					Sleep(900);
					system("CLS");
					hotels();
				}
				
				int GoTO_menu;
				cout << "\nPress 1 to redirect main menu:";
				cin >> GoTO_menu;
				if( GoTO_menu == 1)
				{
					menu();
				}
				else
				{
					menu();
				}
			 }
			 
		if(choice_hotel == 2)
			{
				cout<<"---------*WELCOME TO HOTEL SHIVTEJ*---------\n" << endl;
				cout <<"Swimming Pool | Free Wifi | Family Rooms \n Fitness Center | Restaurant & Bar" <<endl;
				
				cout << "The packages Offered by Choice You:\n" <<endl;
				
				cout << "1. Family Pack:-"<<endl;
				cout << "\t All basic facilities you need just for : Rs 20000.00" <<endl;
				cout << "2. Couple pack:-"<<endl;
				cout << "\t Enjoyy Premium: Rs 15000.00" <<endl;
				cout << "3. Single pack:-"<<endl;
				cout << "\tLive a Luxuryy at SHIVTEJ : Rs 10000.00" <<endl;
				 
				cout << "\nPress another key to back or \nEnter package number you want to book :";
				cin >> pack_choice;
				
				if(pack_choice == 1)
				{
					hotel_cost = 20000.00;
					cout << "\n You have successfully booked FAMILY PACK at SHIVTEJ" <<endl;
					cout << " GoTo menu and take the receipt" << endl;
				}
				else if( pack_choice == 2)
				{
					hotel_cost = 15000.00;
					cout << "\n You have successfully booked COUPLE PACK at SHIVTEJ" <<endl;
					cout << " GoTo menu and take the receipt" << endl;
				}
				else if(pack_choice == 3)
				{
				hotel_cost = 10000.00;
					cout << "\n You have successfully booked SINGLE PACK at SHIVTEJ" <<endl;
					cout << " GoTo menu and take the receipt" << endl;	
				}
				else
				{
					cout << "Invalid Input..! redirecting to previous Menu \n Plese wait...."<<endl;
					Sleep(900);
					system("CLS");
					hotels();
				}
				
				int GoTO_menu;
				cout << "\nPress 1 to redirect main menu:";
				cin >> GoTO_menu;
				if( GoTO_menu == 1)
				{
					menu();
				}
				else
				{
					menu();
				}
			 }	  
			 
			 if(choice_hotel == 3)
			{
				cout<<"---------*WELCOME TO HOTEL MADHUBAN*---------\n" << endl;
				cout << "SET IN TROPICAL GARDEN ON THE BANK OF THE MAHA OYA REVER WHILE SEEING MADHUBAN" <<endl;
				
				cout << "Amezing oftein this summer : Rs 5000.00 for a one day....!!!!\n" <<endl;
				cout << "\nPress another key to back or \nPress 1 to book this special package: ";
				cin >> pack_choice;
				
				if(pack_choice == 1)
				{
					hotel_cost = 5000.00;
					cout << "\n You have successfully booked MADHUBAN SPECIAL PACK" <<endl;
					cout << " GoTo menu and take the receipt" << endl;
				}

				else
				{
					cout << "Invalid Input..! redirecting to previous Menu \n Plese wait...."<<endl;
					Sleep(900);
					system("CLS");
					hotels();
				}
				
				int GoTO_menu;
				cout << "\nPress 1 to redirect main menu:";
				cin >> GoTO_menu;
				if( GoTO_menu == 1)
				{
					menu();
				}
				else
				{
					menu();
				}
			 }
			 
			 else 
			 {
			 	cout<< "Invalid Input ..! Redirecting to previous menu \n please wait ..."<< endl;
			 	Sleep(900);
			 	system("CLS");
			 	menu();
			 }
		}
};

float booking :: hotel_cost;

class charges : public booking, public cabs,public customers
{
	
	public:
		void print_bill()
		{
		
		ofstream outf( " receipt.txt");
		{
			outf << "--------SVS TRAVEL AGENCY--------" <<endl;
			outf << "-------------RECEIPT-------------" << endl;
			outf << "_________________________________" << endl;
			outf << " Customer ID: " << customers :: cus_id << endl <<endl;
			outf << "Description\t\t Total " <<endl;
			outf << "Hotel cost:\t\t " <<fixed <<setprecision(2) << booking::hotel_cost << endl;
			outf << "Travel (cab) cost:\t"<<fixed <<setprecision(2) << cabs::last_cab_cost <<endl; 
			
			outf << "_________________________________" << endl;
			outf << " Total charges:\t\t " <<fixed << setprecision(2) << booking::hotel_cost + cabs::last_cab_cost <<endl;
			outf << "_________________________________" << endl;
			outf << "------------THANK YOU------------" << endl;
			
		}	
		
		outf.close();
		
	}
	
	void show_bill()
	{
		ifstream inf("receipt.txt");
		{
			if(!inf)
			{
				cout << "File opening error..!"<<endl;
			}
			while((!(inf.eof())))
        {
	        inf.getline(all,900);
	        cout << all <<endl;
	   }		
	}
	inf.close();
	}
};

void menu()
{
	int main_choice;
	int choice;
	int GoTo_menu;

    cout << "\t\t          *SVS TRAVELS*\n"<<endl;
	cout << "-----------------------MAIN MENU-----------------------" <<endl;
	
	cout << "\t-------------------------------------------" <<endl;
	cout << "\t|\t\t\t\t\t|" <<endl;
	cout << "\t|\t Customer Management  -> 1\t|" <<endl;
	cout << "\t|\t Cabs Management      -> 2\t|" <<endl;
    cout << "\t|\t Booking Management   -> 3\t|" <<endl;
    cout << "\t|\t Charges & Bills      -> 4\t|" <<endl;
    cout << "\t|\t Exit                 -> 5\t|" <<endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    cout << "\t--------------------------------------------" <<endl;
	
	cout << "\nEnter your Choice: ";
	cin >> main_choice;
	system("CLS");
	
	customers s;
	cabs c;
	booking b;
	charges c2;
	
	if( main_choice == 1)
	{
		cout << "------Customers------\n"<<endl;
		cout <<" 1. Enter new Customer" << endl;
		cout << "2. See Old customers" << endl;
		
		cout << "\n Enter choice: ";
		cin >> choice;
		
		system ("CLS");
		
		if( choice == 1)
		{
			s.getdetails();
		}
		else if(choice == 2)
		{
		    s.show_details();	
		}
		else 
		{
			cout<< "Invalid Input ..! Redirecting to previous menu \n please wait ..."<< endl;
			 	Sleep(900);
			 	system("CLS");
			 	menu();
		}
		
		cout << "\nPress 1 to redirect main menu: ";
		cin >> GoTo_menu;
		
		system ("CLS");
		if(GoTo_menu == 1)
		{
			menu();
		}
		else 
		{
			menu();
		}
	}
	
	
	else if(main_choice == 2)
	{
		c.cab_details();
	}
	else if(main_choice == 3)
	{   
	    cout << " BOOK A LUXURY HOTEL USING THE SYSTEM  <----- " <<endl;
		b.hotels();
	}
	else if( main_choice == 4)
	{
		cout << " -----> GET YOUR RECEIPT <-----" << endl;
		c2.print_bill();  
		
		cout << " Your receopt is already printed you can get if from file path\n" << endl;
		cout << "to displey the your receipt in the screen , Enter 1 : or Enter anpther key to back the  main menu";
		cin >>  GoTo_menu;
		if ( GoTo_menu == 1)
		{
			 system ("CLS");
			 c2.show_bill();
			 cout << "\nPress 1  to redirect main menu:..."<< endl;
			 cin >> GoTo_menu;
			 system ( "CLS");
			 
			 if(GoTo_menu == 1)
			 {
			 	menu();
			 }
			 else 
			 {
			 	menu();
			 }
			}   
			else 
			{
				system("CLS");
				menu();
			 } 
	} 
	else if( main_choice == 5)
	{
		cout << " ------GOOD BYEE------" << endl;
		Sleep(900);
		system ( "CLS");
		menu();
	}
	
	else 
	{
		cout<< "Invalid Input ..! Redirecting to previous menu \n please wait ..."<< endl;
		Sleep(900);
		system("CLS");
		menu();
	}
}
int main()
{
	manage_menu m;
	return 0;
	
}

