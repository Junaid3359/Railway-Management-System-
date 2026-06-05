# include <iostream>
# include <string>
# include <fstream>
# include <iomanip>
using namespace std;
void admin();
void view_information();
void booking_ticket();
void add_train();
void password();
void passenger();
void delete_train();
void cancel_ticket();
//------------------------------------------globally declare variable----------------------------------------
int a;
int n;
int i,j;
//-------------------------------------globaly declare files -------------------------------------------------
	
ofstream tro("traindetail.doc" , ios::app);
ofstream book("booking ticket.doc",ios::app);
//------------------------------------------------------------------------------------------------------------
//--------------------------------------struct add_train--------------------------------------------------

	struct Train_data{
		string serial_num;
		char train_num;
		string train_name;
		string start_palace;
		string destination_place;
		int Price_of_ticket;
		int num_of_available_seats;
		string time_of_departure;
	};
		Train_data no[1000];
//------------------------------------------------------------------------------------------------------------
//----------------------------------------struct book_ticket-------------------------------------------------
	struct ticket_data{
	
		string travelling_date;
		string passenger_name;
		string contact_passenger;
		string cnic_no;
	};
	ticket_data num [1000];
//------------------------------------------------------------------------------------------------------------
int main()
{
	
	int choice ;
    menu:
	cout<<"\n\t\t\t*********************************\n";
	cout<<"\t\t\t*******RAILWAY RESERVATION SYSTEM*******\n";
	cout<<"\t\t\t*********************************\n";
	cout<<"\n\t\t\t<<<<<<<<<<WELCOME USERS>>>>>>>>>>\n";
	cout<<"\n\n\t\t\t\t      MENU\n";
	cout<<"\t\t\t[1] : Admin\n\n"<<endl;
	cout<<"\t\t\t[2] : View information\n"<<endl;
	cout<<"\t\t\t[3] : Book ticket\n"<<endl;
	cout<<"\t\t\t[4] : Cancel ticket\n"<<endl;
	cout<<"\t\t\t[5] : Exit\n\n"<<endl;
	cout<<"\t\t\t*******************************"<<endl;
    cout<<"\t\t\t*******************************"<<endl;
	cout<<"\n\n Enter your choice:"<<endl;

	cin >>choice;
	switch (choice)
	{
     case 1:
      system("cls"),
 	  admin ();
 	  break;
 	  case 2:
      system("cls"),
 	  view_information ();
 	  break;
 	  case 3:
      system("cls");
      booking_ticket();
      
 	  break;
 	  case 4:
 	   system ("cls");
 	   cancel_ticket();
 	break;
 	case 5:
 		system ("cls");
 		break;
 	 default:{
 	 	cout<<"choice not form";
 	 	goto menu;
		break;
	  }
 	 	goto menu;
	}
}
void admin()

	{
password();
    cout << "Thank you for logging in.\n";
    	int choice;
	cout<<"Admin Panel"<<endl;
	cout<<"1 : view passenger"<<endl;
	cout<<"2 : Add train"<<endl;
	cout<<"3 : delete train"<<endl;
	cout<<"4 : back"<<endl;
	cout<<" Select Any choice:"<<endl;
	cin>>choice;
	switch (choice)
	{
		case 1:
			system("cls");
			passenger();
			break;
		case 2:
			add_train();
			break;
		case 3:
			system("cls");
			delete_train();
			break;
		case 4:
		
			system("cls");
			
		default:
			cout<<"invalid value please Enter correct Value"<<endl;

}
}
void view_information()
{
	
	system ("cls");
	
	cout<<"\n\t\t\t       **********************************************************";
    cout<<"\n\t\t\t       ********************RAILWAY RESERVATION SYSTEM********************";
	cout<<"\n\t\t\t       **********************************************************";
	cout<<"\n\t\t\t**********************************************************************************\n";
	ifstream tro("traindetail.doc" , ios::in);
	if ( tro.is_open() ) {
char mychar;
while ( tro ) {
mychar = tro.get();
cout << mychar;
}
}	
	
	tro.close();
}
void add_train()
{
	cout<<system("cls");
		cout<<"\n\t\t     **********************************************************";
	cout<<"\n\t\t     ********************RAILWAY RESERVATION SYSTEM********************";
	cout<<"\n\t\t     **********************************************************";
	cout<<"\n\n\t\t\thow many trains do you want to add: ";

	cin>>a;
	cout<<endl;
				

	for ( i=0;i<a;i++)
	{
	cout<<"enter train\t"<<i+1<<"data"<<endl;
		cout<<"\n Train number:";
		cin>>no[i].train_num;
		tro<<"\n \t\t\t\t\tTrain number:"<<no[i].train_num;
		cin.ignore();
		cout<< " \n serial number:";
		getline (cin,no[i].serial_num);
		tro<<"\nserial number:"<<no[i].serial_num;
		
		cout<<"\n Train name: ";
		getline(cin,no[i].train_name);
		tro<<"\n Train name: "<<no[i].train_name;
		cout<<"\n starting place :";
		cin>> no[i].start_palace;
		tro<<"\n starting place :"<<no[i].start_palace;
		cout<<"\n Destination palace:";
		cin>> no[i].destination_place;
		tro<<"\n starting place :"<<no[i].destination_place;
		cout<<"\n Price of ticket:";
		cin>>no[i]. Price_of_ticket;
		tro<<"\n Price of ticket:"<<no[i]. Price_of_ticket;
		cout<<"\n number of available  seats: ";
		cin>> no[i].num_of_available_seats;
		tro<<"\n number of available  seats: "<<no[i].num_of_available_seats;
		cout<<"\n time of departure ";
		cin>> no[i].time_of_departure;
		tro<<"\n time of departure "<<no[i].time_of_departure;		
	}
	cout<<"------------------------------------add successfully-----------------------------------------";

system("cls");
main();
tro.close();

}

	

	
	



void booking_ticket()
{
		cout<<"\n\t\t\t       **********************************************************";
    cout<<"\n\t\t\t       ********************RAILWAY RESERVATION SYSTEM********************";
	cout<<"\n\t\t\t       **********************************************************";
	cout<<"\n\t\t\t**********************************************************************************\n";
	cout<<"how many tickets you want to buy\n";
	cin>>n;
	cout<<endl;
	if (n>0&&n<=3)
	{
	for ( j=0;j<n;j++)
	{
		cout<<"enter some information of no "<<j+1<<"ticket\n";
		cin.ignore();
		cout<<"\ntravelling date:";
		getline(cin,num[j].travelling_date);
		book<<"\ntravelling date:"<<num[j].travelling_date;
		cout<<"\npassenger name:";
		cin>>num[j].passenger_name;
		book<<"\npassenger name:"<<num[j].passenger_name;
		cout<<"\n phone no of passenger:";
		cin>>num[j].contact_passenger;
		book<<"\nphone no of passenger:"<<num[i].contact_passenger;
		cout<<"\n cnin no";
		cin>>num[j].cnic_no;
		book<<"\ncnic no:"<<num[j].cnic_no;
		if (num[j].cnic_no.length()>13)
		{
			cout<<"invalid cnic no";
		}
		else
		{
	continue;		
		}
		
		}}
		else
		{
			cout<<"to many tickets to buy";
		}
		book.close();
			
		
	}
	

void password()
{
	cout<<"\t\t\t\t\t\t**** WELCOME ****\n";
        cout<<"\t\t\t\t\t\t****   TO   *****\n";
        cout<<"\t\t\t\t\t\t*** ADMIN LOGIN ***\n\n";
        string adminName;
    string adminPassword;
    int Attempt = 0;
    while (Attempt < 5)
    {
    	cin.ignore();
        cout << "Enter Name: ";
     	getline(cin,adminName);
       
        cout << "Enter password: ";
        cin>>adminPassword;

        if ( adminPassword =="23455")
        {

            system("cls");
            cout<<"\t\t\t\t\t\t\t************\n";
            cout <<"\t\t\t\t\t\t***login sucessfully!***\n";
            cout<<"\t\t\t\t\t\t\t************\n";
            break;
        }

        else
        {
            cout << "Invalid login attempt. Please try again.\n" << '\n';
            Attempt++;
        }

    }

    if (Attempt == 5)
    {
            cout << "Too many login attempts! The program will now terminate.";

    }
    else{
    	cout<<"choice no found";
       
	}
}
void passenger()
{
		cout<<"\n\t\t\t       **********************************************************";
    cout<<"\n\t\t\t       ********************RAILWAY RESERVATION SYSTEM********************";
	cout<<"\n\t\t\t       **********************************************************";
	cout<<"\n\t\t\t**********************************************************************************\n";
	ifstream book("booking ticket.doc",ios::in);
	if (book.is_open() )
	{
		char mychar;
		while(book)
		{
			mychar=book.get();
			cout<<mychar;
		}
	}
	book.close();

}

void delete_train()
{
		
	cout<<"\n\t\t\t       **********************************************************";
    cout<<"\n\t\t\t       ********************RAILWAY RESERVATION SYSTEM********************";
	cout<<"\n\t\t\t       **********************************************************";
	cout<<"\n\t\t\t**********************************************************************************\n";
	string deletetrain;
	string train;
	ifstream tro("traindetail.doc" , ios::in);
	ofstream tra("traindetail.doc" , ios::out);
	cout<<"enter train no you want to delete";
	cin>>deletetrain;
	while (getline(tro,train))
	{
		if (train!=deletetrain)
		{
			tra<<train<<endl;
		}
	}
	cout<<"train delete successfully";
	tra.close();
	tro.close();
}
void cancel_ticket()
{
		
	cout<<"\n\t\t\t       **********************************************************";
    cout<<"\n\t\t\t       ********************RAILWAY RESERVATION SYSTEM********************";
	cout<<"\n\t\t\t       **********************************************************";
	cout<<"\n\t\t\t**********************************************************************************\n";
	string ticket;
	string deleteticket;
	
	ifstream book("booking ticket.doc",ios::in);
	ofstream bik("booking ticket.doc",ios::out);
	cout<<"enter ticket no you want to delete";
	cin>>deleteticket;
	
	while (getline(book,ticket))
	
	{
	
		if (ticket!=deleteticket)
	
		{
	
			bik<<ticket<<endl;
	
		}
	
	}


	cout<<"ticket delete successfully";
	bik.close();
	book.close();
	
	
}

