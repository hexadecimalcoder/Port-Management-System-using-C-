#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <iomanip>
#include <conio.h>

using namespace std;

class Ship
{	char agency[20];
	int vessel_ID;
	char vessel_type[20];
	char vessel_name[30];
	char source[30];
	char destination[30];
	char D_O_fJourney[11];
	char D_O_tJourney[11];
	char area[20];
	float dist;
	float weight;
	long int expense;

	long int Expense(float w,float d)
	{
		

		if(d<=2000.0)
		{
			if (w<=40.0)
			{
				expense=w*d*50;
			}
			else if (w>40.0 && w<=75.0)
			{
				expense=w*d*75;
			}
			else if (w>40.0 && w<=75.0)
			{
				expense=w*d*100;
			}
		}

		else if(d>2000.0 && d<=5000.0)
		{
			if (w<=40.0)
			{
				expense=w*d*75;
			}
			else if (w>40.0 && w<=75.0)
			{
				expense=w*d*100;
			}
			else if (w>40.0 && w<=75.0)
			{
				expense=w*d*125;
			}
		}

		else if(d>5000.0)
		{
			if (w<=40.0)
			{
				expense=w*d*100;
			}
			else if (w>40.0 && w<=75.0)
			{
				expense=w*d*125;
			}
			else if (w>40.0 && w<=75.0)
			{
				expense=w*d*150;
			}
		}

		return expense;
	}
public:
	Ship()
	{
		char ch1[10]={'\0'};
		agency[20]=ch1[0];
		vessel_ID=0;
		vessel_type[20]=ch1[0];
		source[30]=ch1[0];
		destination[30]=ch1[0];
		D_O_fJourney[11]=ch1[0];
		D_O_tJourney[11]=ch1[0];
		area[20]=ch1[0];
		dist=0.0;
		weight=0.0;
		expense=0;
	}

	void getdata1()
	{
		cout<<"\tAgency				:	";
		gets(agency);
		cout<<"\tShip Name 				:	";
		gets(vessel_name);
		cout<<"\tShip ID				:	";
		cin>>vessel_ID;
		cout<<"\tShip Type				:	";
		gets(vessel_type);
		cout<<"\tSource				:	";
		gets(source);
		cout<<"\tDestination			:	";
		gets(destination);
		cout<<"\t\tDate of Journey\n";
		cout<<"\t\t 		From(DD/MM/YYYY)	:	";
		gets(D_O_fJourney);
		cout<<"\t\t 		  To(DD/MM/YYYY)	:	";
		gets(D_O_tJourney);
		cout<<"\tArea of Permit				:	";
		gets(area);
		cout<<"\t\tDistance (in kilometres)						:	";
		cin>>dist;
		cout<<"\t\tWeight of Goods (in tonnes)	:	";
		cin>>weight;
	}

	~Ship(){}

	void display1()
	{
		cout<<"\n\n\t\tAgency				:	"<<agency<<'\n';
		cout<<"\t\tName of the Ship				:	"<<vessel_name<<'\n';
		cout<<"\t\tType of the Ship				:	"<<vessel_type<<'\n';
		cout<<"\t\tSource				:	"<<source<<'\n';
		cout<<"\t\tDestination				:	"<<destination<<'\n';
		cout<<"\t\tDate of Journey				:	\n";
		cout<<"\t\t 		From(DD/MM/YYYY)	:	"<<D_O_fJourney<<'\n';
		cout<<"\t\t 		  To(DD/MM/YYYY)	:	"<<D_O_tJourney<<'\n';
		cout<<"\t\tArea of Permit				:	"<<area<<'\n';
		cout<<"\t\tDistance						:	"<<dist<<'\n';
		cout<<"\t\tWeight of Goods (in tonnes)	:	"<<weight<<'\n';
		cout<<"\t\tTotal Expense				:	Rs. "<<Expense(weight,dist)<<'\n';
	}

	int ret_ID()
	{
		return vessel_ID;
	}
	
	void show1()
	{
		if (vessel_ID != 0)
		{
			cout<<"\t\t 		"<<vessel_ID<<setw(18)<<" "<<vessel_name<<endl;
		}
	}
};



class Crew
{
	char category[20];
	int CDC_no;
	char c_name[30];
	char date_from[11];
	char date_to[11];
	char veg_nonveg[15];
	float food_cost;

public:
	Crew()
	{
		char ch[10]={'\0'};
		CDC_no=0;
		category[20]=ch[0];
		date_from[11]=ch[0];
		date_to[11]=ch[0];
		veg_nonveg[15]=ch[0];
		food_cost=0;

	}

	void getdata2()
	{
		cout<<"\tName (in BLOCK Letters)			:";
		gets(c_name);
		cout<<"\tCategory							:";
		gets(c_name);
		cout<<"\tCDC Number						:";
		cin>>CDC_no;
		cout<<"\tPeriod in Ship \n";
		cout<<"\tStart date (DD/MM/YYYY)			:";
		gets(date_from);
		cout<<"\tEnd date (DD/MM/YYYY)				:";
		gets(date_to);
		cout<<"\tVegeterian or Non-vegetarian		:";
		gets(c_name);
		cout<<"\tCost of Food per day (in INR)		:";
		cin>>CDC_no;

	}

	~Crew(){}

	void display2()
	{
		cout<<"\n\n\t\tName 							:"<<c_name;
		cout<<"\n\t\tCategory							:"<<category;
		cout<<"\n\t\tPeriod in Ship \n";
		cout<<"\n\t\tStart date (DD/MM/YYYY)			:"<<date_from;
		cout<<"\n\t\tEnd date (DD/MM/YYYY)			:"<<date_to;
		cout<<"\n\t\tVegeterian or Non-vegetarian		:"<<veg_nonveg;
		cout<<"\n\t\tCost of Food per day (in INR)	:"<<food_cost;
	}

	int ret_CDC()
	{
		return CDC_no;
	}

	void show2()
	{
		if (CDC_no != 0)
		{
			cout<<"\t\t 		"<<CDC_no<<setw(18)<<" "<<c_name<<endl;
		}
	}
	
};


class Passenger
{
	char name[30];
	char DOB[11];
	int age;
	char address[70];
	char dept_port[20];
	char dest_port[20];
	char cont_no[15];
	char email[30];
	int passenger_ID;
	char cabin_no[5];
	char journey_fdate[11];
	char journey_tdate[11];
	int fare;
	float dist;
	float luggage_weight;


	int calc_fare()
	{
		if(age<<5)
			fare=dist;
		else if (age>60)
			fare=dist*2;
		else
			fare=dist*3;
		return fare;
	}

public:

	Passenger()
	{
		char ch2[10]={'\0'};
		name[30] = ch2[0];
		DOB[11] = ch2[0];
		age = 0;
		address[70] = ch2[0];
		dept_port[20] = ch2[0];
		dest_port[20] = ch2[0];
		cont_no[15] = ch2[0];
		email[30] = ch2[0];
		passenger_ID = 0;
		cabin_no[5] = ch2[0];
		journey_fdate[11] = ch2[0];
		journey_tdate[11] = ch2[0];
		fare=0;
		dist= 0.0;
		luggage_weight = 0.0;
	}

	void getdata3()
	{
		cout<<"\tName (in BLOCK Letters)			:";
		gets(name);
		cout<<"\tPassenger ID				:	";
		cin>>passenger_ID;
		cout<<"\tDate of Birth (DD/MM/YYYY) 				:	";
		gets(DOB);
		cout<<"\tAge (in years)				:	";
		cin>>age;
		cout<<"\tAddress (must include PINCODE, city, state and country)				:	";
		gets(address);
		cout<<"\tDeparture Port				:	";
		gets(dept_port);
		cout<<"\tDestination Port			:	";
		gets(dest_port);
		cout<<"\tContact number (with country code)				:	";
		gets(cont_no);
		cout<<"\tEmail ID				:	";
		gets(email);
		cout<<"\tCabin No.				:	";
		gets(cabin_no);
		cout<<"\t\tDate of Journey\n";
		cout<<"\t\t 		From(DD/MM/YYYY)	:	";
		gets(journey_fdate);
		cout<<"\t\t 		  To(DD/MM/YYYY)	:	";
		gets(journey_tdate);
		cout<<"\t\tDistance (in kilometres)						:	";
		cin>>dist;
		cout<<"\t\tWeight of luggage (in KGs)	:	";
		cin>>luggage_weight;
	}

	~Passenger(){
	}

	void display3()
	{
		cout<<"\n\tName			:"<<name;
		cout<<"\n\tPassenger ID				:	"<<passenger_ID;
		cout<<"\n\tDate of Birth (DD/MM/YYYY) 				:	"<<DOB;
		cout<<"\n\tAge 			:	"<<age<<"   years";
		cout<<"\n\tAddress (must include PINCODE, city, state and country)				:	"<<address;
		cout<<"\n\tDeparture Port				:	"<<dept_port;
		cout<<"\n\tDestination Port			:	"<<dest_port;
		cout<<"\n\tContact number (with country code)				:	"<<cont_no;
		cout<<"\n\tEmail ID				:	"<<email;
		cout<<"\n\tCabin No.				:	"<<cabin_no;
		cout<<"\n\t\tDate of Journey\n";
		cout<<"\n\t\t 		From(DD/MM/YYYY)	:	"<<journey_fdate;
		cout<<"\n\t\t 		  To(DD/MM/YYYY)	:	"<<journey_tdate;
		cout<<"\n\t\tDistance 						:	"<<dist<<"   KMs";
		cout<<"\n\t\tWeight of luggage 	:	"<<luggage_weight<<"   KGs";
		cout<<"\t\t Fare 			:	Rs.	"<<calc_fare()<<'\n';
	}

	int ret_passID()
	{
		return passenger_ID;
	}

	void show3()
	{
		if (passenger_ID != 0)
		{
			cout<<"\t\t 		"<<passenger_ID<<setw(18)<<" "<<name<<endl;
		}
	}

	
};


void Entry_Details_Ship()
{
	ofstream fout1;
	fout1.open("Cargo.dat",ios::binary|ios::app);
	Ship S1[20];
	int k;
	cout<<"\t\t\t 	Number of Ship(s)	:	";
	cin>>k;
	for (int i = 0; i < k; ++i)
	{
		cout<<"\n\t\t\t 	SHIP "<<(i+1)<<"\n\n";
		S1[i].getdata1();
		system("cls");
	}
	fout1.write((char*)&S1,sizeof (S1));
	fout1.close();
}


void Search_Ship()
{
	Ship S2;
	int ID, flag=0;
	cout<<"\n\t\t\t Enter the Ship ID : ";
	cin>>ID;
	ifstream fin1;
	fin1.open("Cargo.dat",ios::in | ios::binary);
	if(!fin1)
	{
		cout<<"File not found ";
	}

	while(!fin1.eof())
	{
		fin1.read((char*)&S2,sizeof S2);
		if (ID==S2.ret_ID())
		{
			S2.display1();
			flag=1;
		}
	}
	if(flag!=1)
		cout<<"Sorry!!! File Not Found";

	fin1.close();
}


void ship_showlist()
{
	Ship S3;
	cout<<"\n\t\t\t LIST OF SHIPS\n\n";
	cout<<"=========================================";
	cout<<"		I D 				N A M E \n";
	cout<<"=========================================";
	ifstream fin4;
	fin4.open("Cargo.dat",ios::in | ios::binary);
	fin4.seekg(0, ios::beg);
	while(fin4.read((char*)&S3, sizeof (S3)))
	{
		if(!fin4.eof())
		S3.show1();
		fin4.clear();
	}
	fin4.close();
}


void Entry_Details_Crew()
{
	ofstream fout2;
	fout2.open("Crew.dat",ios::binary|ios::app);
	Crew C1[20];
	int k;
	cout<<"\t\t\t 	Number of Crew Member(s)	:	";
	cin>>k;
	for (int i = 0; i < k; ++i)
	{
		cout<<"\n\t\t\t 	CREW "<<(i+1)<<"\n\n";
		C1[i].getdata2();
		system("cls");
	}
	fout2.write((char*)&C1,sizeof (C1));
	fout2.close();
}



void Search_Crew()
{
	Crew C2;
	int no, flag=0;
	cout<<"\n\t\t\t Enter the CDC No. : ";
	cin>>no;
	ifstream fin2;
	fin2.open("Crew.dat",ios::in | ios::binary);
	if(!fin2)
	{
		cout<<"File not found ";
	}

	while(!fin2.eof())
	{
		fin2.read((char*)&C2,sizeof C2);
		if (no==C2.ret_CDC())
		{
			C2.display2();
			flag=1;
		}
	}
	if(flag!=1)
		cout<<"Sorry!!! File Not Found";

	fin2.close();
}


void crew_showlist()
{
	Crew C3;
	cout<<"\n\t\t\t LIST OF CREW MEMBERS\n\n";
	cout<<"=========================================";
	cout<<"		CDC No. 				N A M E \n";
	cout<<"=========================================";
	ifstream fin5;
	fin5.open("Crew.dat",ios::in | ios::binary);
	fin5.seekg(0, ios::beg);
	while(fin5.read((char*)&C3, sizeof (C3)))
	{
		if(!fin5.eof())
		C3.show2();
		fin5.clear();
	}
	fin5.close();
}



void Entry_Details_Passenger()
{
	ofstream fout3;
	fout3.open("Passenger.dat",ios::binary|ios::app);
	Passenger P1[20];
	int k;
	cout<<"\t\t\t 	Number of Passenger(s)	:	";
	cin>>k;
	for (int i = 0; i < k; ++i)
	{
		cout<<"\n\t\t\t 	CREW "<<(i+1)<<"\n\n";
		P1[i].getdata3();
		system("cls");
	}
	fout3.write((char*)&P1,sizeof (P1));
	fout3.close();
}



void Search_Passenger()
{
	Passenger P2;
	int pass_ID, flag=0;
	cout<<"\n\t\t\t Enter the Passenger ID : ";
	cin>>pass_ID;
	ifstream fin3;
	fin3.open("Passenger.dat",ios::in | ios::binary);
	if(!fin3)
	{
		cout<<"File not found ";
	}

	while(!fin3.eof())
	{
		fin3.read((char*)&P2,sizeof P2);
		if (pass_ID==P2.ret_passID())
		{
			P2.display3();
			flag=1;
		}
	}
	if(flag!=1)
		cout<<"Sorry!!! File Not Found";

	fin3.close();
}


void pass_showlist()
{
	Passenger P3;
	cout<<"\n\t\t\t LIST OF PASSENGERS\n\n";
	cout<<"=========================================";
	cout<<"		I D 				N A M E \n";
	cout<<"=========================================";
	ifstream fin6;
	fin6.open("Passenger.dat",ios::in | ios::binary);
	fin6.seekg(0, ios::beg);
	while(fin6.read((char*)&P3, sizeof (P3)))
	{
		if(!fin6.eof())
		P3.show3();
		fin6.clear();
	}
	fin6.close();
}




int main()
{
	int x;
	char w;
	cout<<"\n";
	cout<<"************************************************************************************************************************\n\n";
	cout<<"					W E L C O M E   T O   P O R T   I N D I A 				\n\n\n";
	cout<<"************************************************************************************************************************\n\n\n";
	cout<<"					! ! !   PRESS ANY KEY TO CONTINUE   ! ! !	 			\n\n\n\n\n";
	cout<<"             .  o ..                       _          \n";
	cout<<"             o . o o.o                    )_)         \n";
	cout<<"                  ...oo                   _~          \n";
	cout<<"                    __[]__             _~ )_)_~       \n";
	cout<<"                 __|_o_o_ol__          )_))_))_)      \n";
	cout<<"                /           	|         _!__!__!_      \n";
	cout<<"               |   ********  L        / ^^^^^^^ |     \n";
	cout<<"               /._.__.___.>..:|      (_^_^_^_^_^_)    \n";
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout<<"~~~~   ~~~~  ~~~~~ ~~  ~~~ ~~~~ ~~~~~  ~~~~~~   ~~~~~~~~  ~~~ ~~~~ ~~~\n";
	cout<<"   ~~~~  ~~~~~ ~~  ~~~~~~   ~~~~    ~~~~~ ~~~~  ~~~~~~  ~~~ ~~~~~~ ~~~\n";
	cout<<"~~~~   ~~~~  ~~~~~ ~~  ~~~  ~~~~~  ~~~   ~~~   ~~  ~~~  ~~~  ~~~ ~~~~~\n";



	getch();
	system("cls");

	P:cout<<"\n\n\t\t\t\t S E L E C T\n\n\n";
	cout<<"\t\t1. To entry details of Ship(s)\n\n";
	cout<<"\t\t2. To see the list of Ships\n\n";
	cout<<"\t\t3. To search for a Ship using Ship ID\n\n";
	cout<<"\t\t4. To entry details of Crew Member(s)\n\n";
	cout<<"\t\t5. To see the list of Crew Members\n\n";
	cout<<"\t\t6. To search for a Crew Member using CDC No.\n\n";
	cout<<"\t\t7. To entry details of Passenger(s)\n\n";
	cout<<"\t\t8. To see the list of Passengers\n\n";
	cout<<"\t\t9. To search for a Passenger using Passenger ID\n\n";
	cin>>x;
	system("cls");

	
		if(x==1)
			Entry_Details_Ship();
		else if(x==2)
			ship_showlist();
		else  if(x==3)
			Search_Ship();
		else if(x==4)
			Entry_Details_Crew();
		else if(x==5)
			crew_showlist();
		else  if(x==6)
			Search_Crew();
		else if(x==7)
			Entry_Details_Passenger();
		else if(x==8)
			pass_showlist();
		else  if(x==9)
			Search_Passenger();

		else
		{
			system("cls");
			cout<<"Wrong Entry ! ! ! Please Try Again.......";
			goto P;
		}
	

	Q:cout<<"\n\n\n\n\t\t\t Do you want to continue?\n";
	cout<<"\n\t\t\tEnter 'y' for yes or 'n' for no : ";
	cin>>w;

	if (w=='y'||w=='Y')
	{
		system("cls");
		goto P;
	}

	else if(w=='n'||w=='N')
	{
		system("cls");
		cout<<"\n\n\t\t\tThank You\n\n";
		cout<<"\t\tMADE BY -\n";
		cout<<"\tSOUHARDHYA PAUL\n";
		cout<<"\tSUBHRADIPTA CHOUDHURY\n";
	}

	else
	{
		system("cls");
		cout<<"!!! Wrong Entry !!! ... Try Again ...\n";
		goto Q;
	}
	
	return 0;
}
