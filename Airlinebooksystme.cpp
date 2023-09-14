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
		int phoneNo;
		int age;
		string add;
		static int cId;
		char arr [100];
		
		void information() 
		{
			cout<<"\nEnter the customer ID:";
			cin>>cId;
			cout<<"\nEnter the name :";
			cin>>name;
			cout<<"\nEnter the age:";
			cin>>age;
			cout<<"\n Address :";
			cin>>add;
			cout<<"\n Gender";
			cin>>gender;
			cout<<"Your Details are saved with us\n"<<endl;		
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
		
		void flights ()
		{
			string flightN[]={"Indore","Jaipur","Mumbai","Chennai","Jodhpur","Delhi"};
			
			for(int a=0;a<6;a++)
			{
				cout<<(a+1)<<".flight to"<<flightN[a]<<endl;
				
			}
			
			cout<<"\nWelecome to the Airlines!"<<endl;
			cout<<"Press the number of the city of which you want to book the flight :";
			cin>>choice;
			
			switch(choice)
			{
				case 1:
					{
						cout<<"				Welcome to AIRINDIA			\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"This are the Flight \n"<<endl;
						
						cout<<"1. AI -498"<<endl;
						cout<<"\t05-09-2023 8:00AM 1hrs Rs.2900"<<endl;
						cout<<"2.AI - 658"<<endl;
						cout<<"06-09-2023 4:00PM 2hrs Rs.2500"<<endl;
						cout<<"3. AI - 508"<<endl;
						cout<<"\t07-09-2023 8:00PM 1hr Rs.3000"<<endl;
						
						cout<<"\nSelect the lflight you want to book:";
						cin>>choice1; 
						
						if (choice1==1)
						{
							charges=2900;
							cout<<"\nYou have Sucessfully booked the flight AI -498"<<endl;
							cout<<"You can go back to Menu and take the ticket"<<endl;
							 
						}
						else if(choice==2)
						{
							charges=2500;
							cout<<"\nYou have Sucessfully booked the flight AI -658"<<endl;
							cout<<"you can go back to Menu and take the ticket"<<endl;
							
						}
						else if(choice==3)
						{
							charges=3000;
							cout<<"\nYou have Sucessfully booked the flight AI -508"<<endl;
							cout<<"you can go back to Menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invaild input ,shifting to the previous menu:"<<endl;
							flights();
							
						}
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if (back==1)
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
					cout<<"				Welcome to VISTRA  AIRLINES 				\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"This are the Flight \n"<<endl;
							
						cout<<"1. VA -135"<<endl;
						cout<<"\t05-09-2023 9:00AM 1hrs Rs.3000"<<endl;
						cout<<"2.VA - 256"<<endl;
						cout<<"\t06-09-2023 2:00PM 2hrs Rs.3100"<<endl;
						cout<<"3.VA - 47"<<endl;
						cout<<"\t07-09-2023 6:00PM 1hr Rs.3200"<<endl;
						
						cout<<"\nSelect the lflight you want to book:";
						cin>>choice1; 
						
						if (choice1==1)
						{
							charges=3000;
							cout<<"\nYou have Sucessfully booked the flight VA -135"<<endl;
							cout<<"you can go back to Menu and take the ticket"<<endl;
							 
						}
						else if(choice==2)
						{
							charges=3100;
							cout<<"\nYou have Sucessfully booked the flight VA -256"<<endl;
							cout<<"you can go back to Menu and take the ticket"<<endl;
							
						}
						else if(choice==3)
						{
							charges=3200;
							cout<<"\nYou have Sucessfully booked the flight VA -47"<<endl;
							cout<<"you can go back to Menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invaild input ,shifting to the previous menu:"<<endl;
							flights();
							
						}
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if (back==1)
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
					cout<<"				Welcome to GO AIRLINE				\n"<<endl;
						
					cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
					cout<<"This are the Flight \n"<<endl;
						
					cout<<"1. GA -498"<<endl;
					cout<<"\t05-09-2023 7:00AM 1hrs Rs.2954"<<endl;
					cout<<"2.GA - 658"<<endl;
					cout<<"\t06-09-2023 5:00PM 2hrs Rs.2741"<<endl;
					cout<<"3.GA - 508"<<endl;
					cout<<"\t07-09-2023 1:45PM 1hr Rs.3100"<<endl;
						
					cout<<"\nSelect the lflight you want to book:";
					cin>>choice1; 
						
					if (choice1==1)
					{
						charges=2954;
						cout<<"\nYou have Sucessfully booked the flight GA -111"<<endl;
						cout<<"you can go back to Menu and take the ticket"<<endl;
							 
					}
					else if(choice==2)
					{
						charges=2741;
						cout<<"\nYou have Sucessfully booked the flight GA -289"<<endl;
						cout<<"you can go back to Menu and take the ticket"<<endl;
							
					}
					else if(choice==3)
					{
						charges=3100;
						cout<<"\nYou have Sucessfully booked the flight GA -"<<endl;
						cout<<"you can go back to Menu and take the ticket"<<endl;
					}
					else
					{
						cout<<"Invaild input ,shifting to the previous menu:"<<endl;
						flights();
							
					}
					cout<<"Press any key to go back to the main menu:"<<endl;
					cin>>back;
						
					if (back==1)
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
						cout<<"				Welcome to INDIGO AIRLINES				\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"This are the Flight \n"<<endl;
						
						cout<<"1. IA -121"<<endl;
						cout<<"\t05-09-2023 8:45AM 1hrs Rs.2840"<<endl;
						cout<<"2.IA - 654"<<endl;
						cout<<"\t06-09-2023 4:25PM 2hrs Rs.2457"<<endl;
						cout<<"3. IA - 521"<<endl;
						cout<<"\t07-09-2023 10:00PM 1hr Rs.2890"<<endl;
						
						cout<<"\nSelect the lflight you want to book:";
						cin>>choice1; 
						
						if (choice1==1)
						{
							charges=2840;
							cout<<"\nYou have Sucessfully booked the flight IA -121"<<endl;
							cout<<"you can go back to Menu and take the ticket"<<endl;
						}
						
						else if(choice==2)
						{
							charges=2457;
							cout<<"\nYou have Sucessfully booked the flight IA -654"<<endl;
							cout<<"you can go back to Menu and take the ticket"<<endl;
							
						}
						else if(choice==3)
						{
							charges=2890;
							cout<<"\nYou have Sucessfully booked the flight IA -521"<<endl;
							cout<<"you can go back to Menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invaild input ,shifting to the previous menu:"<<endl;
							flights();
							
						}
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if (back==1)
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
						cout<<"				Welcome to SPICE JET AIRLINES				\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"This are the Flight \n"<<endl;
						
						cout<<"1. SPA -52"<<endl;
						cout<<"\t05-09-2023 10:45 1hrs Rs.2956"<<endl;
						cout<<"2. SPA - 777"<<endl;
						cout<<"\t06-09-2023 4:00PM 2hrs Rs.2614"<<endl;
						cout<<"3. SPA -823"<<endl;
						cout<<"\t07-09-2023 8:00PM 1hr Rs.3100"<<endl;
						
						cout<<"\nSelect the lflight you want to book:";
						cin>>choice1; 
						
						if (choice1==1)
						{
							charges=2956;
							cout<<"\nYou have Sucessfully booked the flight SPA -52"<<endl;
							cout<<"you can go back to Menu and take the ticket"<<endl;
							 
						}
						else if(choice==2)
						{
							charges=2614;
							cout<<"\nYou have Sucessfully booked the flight SPA -777"<<endl;
							cout<<"you can go back to Menu and take the ticket"<<endl;
							
						}
						else if(choice==3)
						{
							charges=3100;
							cout<<"\nYou have Sucessfully booked the flight SPA -823"<<endl;
							cout<<"you can go back to Menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invaild input ,shifting to the previous menu:"<<endl;
							flights();
							
						}
						cout<<"Press any key to go back to the main menu:"<<endl;
						cin>>back;
						
						if (back==1)
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
							cout<<"					Welcome to VIRGIN AIRLINES				\n"<<endl;
							cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
							
							cout<<"This are the Flight \n"<<endl;
						
							cout<<"1. VIA -702"<<endl;
							cout<<"\t05-09-2023 10:45 1hrs Rs.3500"<<endl;
							cout<<"2. VIA - 562"<<endl;
							cout<<"06-09-2023 4:00PM 2hrs Rs.3154"<<endl;
							cout<<"3. VIA -783"<<endl;
							cout<<"\t07-09-2023 8:00PM 1hr Rs.3204"<<endl;
						
							cout<<"\nSelect the lflight you want to book:";
							cin>>choice1; 
						
							if (choice1==1)
							{
								charges=3500;
								cout<<"\nYou have Sucessfully booked the flight VIA -702"<<endl;
								cout<<"you can go back to Menu and take the ticket"<<endl;
							 
							}
							else if(choice==2)
							{
								charges=3154;
								cout<<"\nYou have Sucessfully booked the flight VIA -562"<<endl;
								cout<<"you can go back to Menu and take the ticket"<<endl;
							
							}
							else if(choice==3)
							{
								charges=3204;
								cout<<"\nYou have Sucessfully booked the flight VIA -783"<<endl;
								cout<<"you can go back to Menu and take the ticket"<<endl;
							}
							else
							{
								cout<<"Invaild input ,shifting to the previous menu:"<<endl;
								flights();
							
							}
							cout<<"Press any key to go back to the main menu:"<<endl;
							cin>>back;
						
							if (back==1)
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
									cout<<"Invaild input, Shifting you to this main menu !"<<endl;
									mainMenu();
									break;
									
							}
		}
	}
	
};
float registration::charges;
int registration::choice;

class ticket : public registration,Details
{
	public:
		void Bill()
		{
			string destination=" ";
			ofstream outf("records.txt");
			{
				outf<<"				Airlines			"<<endl;
				outf<<"				Ticket				"<<endl;
				outf<<"									"<<endl;
				
				outf<<"Customer ID "<<Details::cId<<endl;
				outf<<"Customer Name"<<Details::name<<endl;
				outf<<"Customer Gender"<<Details::gender<<endl;
				outf<<"\tDescription "<<endl<<endl;
				
				if (registration::choice==1)
				{
					destination="Indore";
				}
				
				else if (registration::choice==2)
				{
					destination="Jaipur";
					
				}
				else if (registration::choice==3)
				{
					destination="Mumbai";
					
				}
				else if (registration::choice==4)
				{
					destination="Banglore";
					
				}
				else if (registration::choice==5)
				{
					destination="Jodhpur";
					
				}
				
				outf<<"Destination\t\t"<<destination<<endl;
				outf<<"Flight cost :\t\t"<<registration::charges<<endl;	
				
			}
			outf.close();
			
		}
		void display()
		{
			ifstream ifs("records.txt");
			{
				if (ifs)
				{
					cout<<"file error!"<<endl;
				}
				while(!ifs.eof())
				{
					ifs.getline(arr,100);
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
	
	cout<<"\t 	  AIRLINE REGISVATION SYSTEM  	\n"<<endl;
	cout<<"\t	       Main Menu	\n"<<endl;

	
	
	cout<<"\t|\t Press 1 to add the Customer Details   \t|"<<endl;
	cout<<"\t|\t Press 2 for Flight Registration       \t|"<<endl;
	cout<<"\t|\t Press 3 for Ticket and Charges        \t|"<<endl;
	cout<<"\t|\t Press 4 to Exit 					   \t|"<<endl;
	
	cout<<"Enter the choice: ";
	cin>>lchoice;
	
	Details d;
	registration r;
	ticket t;
	
	switch(lchoice)
	{
		case 1:
			{
				cout<<"			Customer 		\n"<<endl;
				d.information();
				cout<<"Press 1 to go back to Main Menu"<<endl;
				cin>>back;
				
				if (back==1)
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
					cout<<"			Book a flight using this system		\n"<<endl;
					r.flights();
					break;
				}
				
				case 3:
				cout<<"					Get your ticket 	\n"<<endl;
				t.Bill();
			
				cout<<"Your ticket is printed, you can collect it  \n"<<endl;
				cout<<"Press 1 to  display your ticket ";
				cin>>back;
					if(back==1)
					{
						t.display();
						cout<<"Press any key to go back to main : ";
						cin>>back;
						if (back==1);
						{
							mainMenu();
						}
					}
					else
					{
						mainMenu();
					}
					break;
					
			case 4:
			{
				cout<<"				Thank You			"<<endl;
				break;
			}
			default :
				{
				 cout<<"Invaild input,Please try again!\n"<<endl;
				 mainMenu();
				}
	}
}

int main()	
{
	Management Mobj;
	return 0;
}
	


	