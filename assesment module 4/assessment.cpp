#include<iostream>


using namespace std;

main()
{
	cout<<"\n\n\t***************************Event Management System***************************";
	string ename,name1,name2;
	//int num;
	float min,num;
	cout<<"\nEnter the Name of the Event: ";
	cin>>ename;
	cout<<"\nEnter FIRST NAME,LAST NAME. : ";
	cin>>name1>>name2;
	cout<<"\nEnter Number of Guests: ";
	cin>>num;
	cout<<"\nNumber of Minutes: ";
	cin>>min;
cout<<"	--------------------------------------------";
	cout << "\n\n\tEvent Summary:";
    cout << "\n\tEvent Name: " << ename;
    cout << "\n\tFirst Guest: " << name1 << " " << name2;
    cout << "\n\tNumber of Guests: " << num;
    cout << "\n\tDuration (in minutes): " << min;
    
    cout<<"\n\n\t const double CostPerHour = 18.50 ";
    cout<<"\n\n\t const double CostPerMinute = 0.40";
    cout<<"\n\n\t const double CostOfDinner = 20.70";
  cout<<"\n\n\t--------------------------------------------";  
    float cost1,cost2,cost3,hour,time;
    
    //time=min/60;
    cost1=(min/60)*18.50;
	cout<<"\n\n\t The cost for Servers: "<<cost1;	
	
	cost2=(min*60)*0.40;
	cout<<"\n\n\t The cost for Food is: "<<cost2;
	
	cost3=num*20,70;
	cout<<"\n\n\t avrage cost of total gest: "<<cost3;
	
	 int servers =(num / 20.0);
	cout << "\n\n\t Number of servers required: " << servers;
cout<<"	\n\n\t--------------------------------------------";	
	float AverageCost;
	AverageCost=cost2/18.50;
	cout<<"\n\n\t total Averagecost of food per Person "<<AverageCost;
	
	float totalcost;
	totalcost=cost1+cost2+cost3;
	cout<<"\n\n\t Total cots is "<<totalcost;
	float per;
	cout<<"	\n\n\t--------------------------------------------";
	cout<<"\n\n\t Please Deposit a 25% deposit to reserve the event";
	per=(totalcost*25)/100;
	cout<<"\n\n\t your deposit needed is "<<per;
}
