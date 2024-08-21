#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management
{
	public:
		
		Management()
		{
			mainMenu();
		}
};


class Details
{
	public:
		
		static string name, gender;
		//int phoneNo;
		int age;
		string add;
		static int cId;
		char arr[100];
		
		void information()
		{
			cout<<"\nEnter the customer ID:";
			cin>>cId;
			cout<<"\nEnter the name :";
			cin>>name;
			cout<<"\nEnter the age :";
			cin>>age;
			cout<<"\n Address :";
			cin>>add;
			cout<<"\n Gender :";
			cin>>gender;
			cout<<"Your details are saved with us\n"<<endl;
			
		}
};

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
	public:
		static int choice;
		int choice1;
		int back;
		static float charges;
		int numAdultTickets;  // Added variable for the number of adult tickets
        int numChildTickets; 
		static int availableSeats[6]; // Added array to store available seats for each flight
		void flights()
		{
			string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};
			
			for(int a=0;a<6;a++)
			{
				cout<<(a+1)<<".flight to"<<flightN[a]<<endl;
				
			}
			
			cout<<"\nWelcome to the Airlines!"<<endl;
			cout<<"Press the number of the country of which you want to book the flight:";
			cin>>choice;
			cout << "Enter the number of adult tickets: ";
        cin >> numAdultTickets;

        cout << "Enter the number of child tickets: ";
        cin >> numChildTickets;
		           if (numAdultTickets < 0 || numChildTickets < 0)
                   {
                    cout << "Invalid number of tickets. Please try again." << endl;
                    flights();
                    return;
                   }

                // Check if there are enough seats available
               if (numAdultTickets + numChildTickets > availableSeats[choice - 1])
               {
                   cout << "Sorry, not enough seats available for the requested number of tickets." << endl;
                   return;
               }
			
			switch(choice)
			{
				case 1:
					{
						cout<<"_______________________Welcome to Dubai Emirates____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. DUB - 498"<<endl;
						cout<<"\t08-01-2022 8:00AM 10hrs Rs. 14000"<<endl;
						cout<<"2. DUB - 658"<<endl;
						cout<<"\t09-01-2022 4:00AM 12hrs Rs. 10000"<<endl;
						cout<<"3. DUB - 508"<<endl;
						cout<<"\t11-01-2022 11:00AM 11hrs Rs. 9000"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							//charges=14000;
							charges = 14000 * numAdultTickets + 7000 * numChildTickets;
							cout<<"\nYou have successfully booked the flight DUB - 498"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						else if(choice1==2)
						{
							//charges=10000;
							charges=10000 * numAdultTickets + 5000 * numChildTickets;
							cout<<"\nYou have successfully booked the flight DUB - 658"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else if(choice1==3)
						{
							//=9000;
							charges=9000 * numAdultTickets + 4500 * numChildTickets;
							cout<<"\nYou have successfully booked the flight DUB - 508"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						availableSeats[0] -= (numAdultTickets + numChildTickets);
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
			}
			
			case 2:
				{
					cout<<"_______________________Welcome to Canadian Airlines____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. CA - 198"<<endl;
						cout<<"\t09-01-2022 2:00PM 20hrs Rs. 34000"<<endl;
						cout<<"2. CA - 158"<<endl;
						cout<<"\t11-01-2022 6:00AM 23hrs Rs. 29000"<<endl;
						cout<<"3. CA - 208"<<endl;
						cout<<"\t14-01-2022 12:00AM 21hrs Rs. 40000"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							//charges=34000;
							charges=34000 * numAdultTickets + 17000 * numChildTickets;
							cout<<"\nYou have successfully booked the flight CA - 198"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						else if(choice1==2)
						{
							//charges=29000;
							charges=29000 * numAdultTickets + 14500 * numChildTickets;
							cout<<"\nYou have successfully booked the flight CA - 158"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else if(choice1==3)
						{
							//charges=40000;
							charges=40000 * numAdultTickets + 20000 * numChildTickets;
							cout<<"\nYou have successfully booked the flight CA - 208"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						availableSeats[1] -= (numAdultTickets + numChildTickets);
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
						
				}
				
				case 3:
				{
					
					cout<<"_______________________Welcome to UK Airways____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. UK - 798"<<endl;
						cout<<"\t12-01-2022 10:00AM 14hrs Rs. 44000"<<endl;
						
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							//charges=44000;
							charges=44000 * numAdultTickets + 22000 * numChildTickets;
							cout<<"\nYou have successfully booked the flight UK - 798"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						availableSeats[2] -= (numAdultTickets + numChildTickets);
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
					
				}
				case 4:
					{
						cout<<"_______________________Welcome to US Airways____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. US - 567"<<endl;
						cout<<"\t10-01-2022 9:00AM 22hrs Rs. 37000"<<endl;
						cout<<"2. US - 658"<<endl;
						cout<<"\t09-01-2022 6:00AM 22hrs Rs. 39000"<<endl;
						cout<<"3. US - 508"<<endl;
						cout<<"\t12-01-2022 10:00AM 21hrs Rs. 42000"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							//charges=37000;
							charges=37000 * numAdultTickets + 18500 * numChildTickets;
							cout<<"\nYou have successfully booked the flight US - 658"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						else if(choice1==2)
						{
							//charges=39000;
							charges=39000 * numAdultTickets + 19500 * numChildTickets;
							cout<<"\nYou have successfully booked the flight DUB - 658"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else if(choice1==3)
						{
							//charges=42000;
							charges=42000 * numAdultTickets + 21000 * numChildTickets;
							cout<<"\nYou have successfully booked the flight DUB - 508"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						availableSeats[3] -= (numAdultTickets + numChildTickets);
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
					}
				case 5:
					{
						cout<<"_______________________Welcome to Australian Airlines____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. As - 698"<<endl;
						cout<<"\t018-01-2022 9:00AM 20hrs Rs. 44000"<<endl;
						cout<<"2. AS - 158"<<endl;
						cout<<"\t019-01-2022 4:00AM 22hrs Rs. 34000"<<endl;
						cout<<"3. AS - 708"<<endl;
						cout<<"\t17-01-2022 10:00AM 21hrs Rs. 42000"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							//charges=44000;
							charges=44000 * numAdultTickets + 22000 * numChildTickets;
							cout<<"\nYou have successfully booked the flight DUB - 498"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						else if(choice1==2)
						{
							//charges=34000;
							charges=34000 * numAdultTickets + 17000 * numChildTickets;
							cout<<"\nYou have successfully booked the flight DUB - 658"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else if(choice1==3)
						{
							//charges=42000;
							charges=42000 * numAdultTickets + 21000 * numChildTickets;
							cout<<"\nYou have successfully booked the flight DUB - 508"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						availableSeats[4] -= (numAdultTickets + numChildTickets);
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
					}
					case 6:
						{
							cout<<"_______________________Welcome to European Airlines____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. EU - 898"<<endl;
						cout<<"\t02-01-2022 2:00AM 18hrs Rs. 36000"<<endl;
						cout<<"2. EU - 958"<<endl;
						cout<<"\t03-01-2022 6:00AM 19hrs Rs. 37000"<<endl;
						cout<<"3. EU - 608"<<endl;
						cout<<"\t12-01-2022 10:00AM 20hrs Rs. 31000"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							//charges=36000;
							charges=36000 * numAdultTickets + 18000 * numChildTickets;
							cout<<"\nYou have successfully booked the flight EU - 898"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						else if(choice1==2)
						{
							//charges=37000;
							charges=37000 * numAdultTickets + 18500 * numChildTickets;
							cout<<"\nYou have successfully booked the flight EU - 958"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else if(choice1==3)
						{
							//charges=31000;
							charges=31000 * numAdultTickets + 15500 * numChildTickets;
							cout<<"\nYou have successfully booked the flight EU - 608"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						availableSeats[5] -= (numAdultTickets + numChildTickets);
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							mainMenu();
							
						}
						else
						{
							mainMenu();
							
						}
						}
						default :
							{
								cout<<"Invalid input, Shifting you to the main menu !"<<endl;
								mainMenu();
								break;
							}
		}
	}
};
float registration::charges;
int registration::choice;
int registration::availableSeats[] = {120, 120, 120, 120, 120, 120}; 

class ticket : public registration, Details
{
	public:
		
		void Bill()
		{
			string destination="";
			ofstream outf("records.txt");
			ofstream appendf("Admin1.txt", ios::app);
			{
				outf<<"_____________XYZ Airlines____________"<<endl;
				outf<<"______________Ticket_________________"<<endl;
				outf<<"_____________________________________"<<endl;
				
				outf<<"Customer ID:"<<Details::cId<<endl;
				outf<<"Customer Name:"<<Details::name<<endl;
				outf<<"Customer Gender:"<<Details::gender<<endl;
				outf<<"\tDescription"<<endl<<endl;
				
				if(registration::choice==1)
				{
					destination="Dubai";
				}
				
				else if(registration::choice==2)
				{
					destination="Canada";
				}
				else if(registration::choice==3)
				{
					destination="UK";
				}
				else if(registration::choice==4)
				{
					destination="USA";
				}
				else if(registration::choice==5)
				{
					destination="Australia";
				}
				else if(registration::choice==6)
				{
					destination="Europe";
				}
				
				outf<<"Destination\t\t"<<destination<<endl;
				outf<<"Flight cost :\t\t"<<registration::charges<<endl;
				 appendf << "Customer Name: " << Details::name << ", Customer ID: " << Details::cId <<
				          ", Destination: "<<destination<<",Flight cost: "<<registration::charges<<
						      "\nAvailable Seats After Booking:\n";
                           for (int i = 0; i < 6; ++i)
                           {
                           appendf << "Flight to " << (i + 1) << ": " << availableSeats[i] << " seats\n";
                           }
			}
			outf.close();
	


    
			
		}
		void dispBill()
		{
			ifstream ifs("records.txt");
			{
				if(!ifs)
				{
					cout<<"File error!"<<endl;
				}
				while(!ifs.eof())
				{
					ifs.getline(arr, 100);
					cout<<arr<<endl;
				}
			}
			ifs.close();
		}
};




void mainMenu()
{
	int lchoice;
	int schoice;
	int back;
	
	cout<<"\t               XYZ Airlines \n"<<endl;
	cout<<"\t______________Main Menu______________"<<endl;
	
	cout<<"\t____________________________________________________"<<endl;
	cout<<"\t|\t\t\t\t\t\t|" <<endl;
	
	cout<<"\t|\t Press 1 to add the Customer Details    \t|"<<endl;
	cout<<"\t|\t Press 2 for Flight Registration        \t|"<<endl;
	cout<<"\t|\t Press 3 for Ticket and Charges         \t|"<<endl;
	cout<<"\t|\t Press 4 to Exit                        \t|"<<endl;
	cout<<"\t|\t\t\t\t\t\t|" <<endl;
	cout<<"\t_____________________________________________________"<<endl;
	
	cout<<"Enter the choice : ";
	cin>>lchoice;
	
	Details d;
	registration r;
	ticket t;
	
	switch(lchoice)
	{
		
		case 1:
			{
			   cout<<"__________Customers__________\n"<<endl;
			   	d.information();
			   	cout<<"Press any key to go back to Main menu ";
			   	cin>>back;
			   	
			   	if(back==1)
			   	{
			   		mainMenu();
				   }
				   else
				   {
				   	mainMenu();
				   }
				   break;
			}
			
			case 2:
				{
					cout<<"________Book a flight using this system ____________\n"<<endl;
					r.flights();
					break;
				}
				
				case 3:
					{
					
				cout<<"_____GET YOUR TICKET____\n"<<endl;
				t.Bill();
				
				cout<<"Your ticket is printed, you can collect it \n"<<endl;
				cout<<"Press 1 to display your ticket ";
				
				cin>>back;
				
					if(back==1)
					{
						t.dispBill();
						cout<<"Press any key to go back to main menu:";
						cin>>back;
						if(back==1)
						{
							mainMenu();
						}
						else
						{
							mainMenu();
						}
						
					}
					else
					{
						mainMenu();
					}
					break;
				}
		
		case 4:
			{
				cout<<"\n\n\t_________Thank-you_______"<<endl;
				//break;
				exit(0);
			}
			
			default :
				{
					cout<<"Invalid input, Please try again!\n"<<endl;
					mainMenu();
					break;
				}
	}
	
	
	
	
}




int main()
{
	Management Mobj;
	return 0;
}