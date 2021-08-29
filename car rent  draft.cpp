#include <iostream>
#include <cstdlib>
#include<conio.h>
#include<unistd.h>
#include<fstream>
#include<string>
#include<windows.h>
using namespace std ;

COORD coord={0,0};

int first_launch;//variable to record the first launch of the program
 // variable for number of vehicles
enum vehicle_type{
automobile,truck,motorbike,bus};

struct vehicle {
string name;
vehicle_type type;
float price;

} ;

int main();
void gotoxy(int x, int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}



float exit_save()
{
fstream vehicle_info_create;
ofstream vehicle_info_write;
vehicle_info_create.open("vehicle_info.txt");
if ( ! vehicle_info_create.is_open() )
    {
    fstream vehicle_info_create ("vehicle_info.txt" ,ios :: out);
    vehicle_info_create.close();

    }
    vehicle_info_create.close();
    vehicle_info_write.open("vehicle_info.txt");

for (int i =0;i <vehicle_no;i++)
{


vehicle_info_write << vehicle_info[i].name<<endl;
vehicle_info_write << vehicle_info[i].type<<endl;
vehicle_info_write << vehicle_info[i].price<<endl;
   }

  vehicle_info_write.close();

  }
main ()
{


int launch_status=0;//this variable becomes 1 for the first launch
fstream wh;
wh.open("launch.txt");
if( ! wh.is_open())
{

ofstream wh("launch.txt");
wh.close();
launch_status =1;



}

wh.close();
if (launch_status ==0 )
{

ifstream vehicle_info_read("vehicle_info.txt");
    if( vehicle_info_read. is_open())
       {
string line;
ifstream vehicle_info_read;
vehicle_info_read.open("vehicle_info.txt");

for (int i=0;i <vehicle_no;i++)
{

    getline(vehicle_info_read,line);
vehicle_info[i].name=line;
   getline(vehicle_info_read,line);
vehicle_info[i].type=line;
   getline(vehicle_info_read,line);
vehicle_info[i].price=line;
}

vehicle_info_read.close();
       }

    else
   {
    cout <<"-----------------------------------------------------------------------------------------------------------\n";
    cout<<"ERROR can't find vehicle_info.txt ,any previous data maybe lost \n";
    cout <<"-----------------------------------------------------------------------------------------------------------\n";
usleep(2000000);
   }




}
char op1; // operator for the choice between encoder and reader
system("cls");
cout <<"-----------------------------------------------------------------------------------------------------------\n";
cout <<"press 1 ,if you wish to register a vehicle  \n";
cout <<"press 2 , if u wish to register a customer \n"
<<"press 0 , to save and exit \n";
cout <<"-----------------------------------------------------------------------------------------------------------\n";
op1= getch();


switch (op1)
{

case '1' :

vehicle_no=1;
ifstream vehicle_no_read.open("vehicle_no.txt")
if (! vehicle_no_read.is_open())
{
ofstream vehicle_no_file.open("vehicle_no.txt");
vehicle_no_file<<vehicle_no;
vehicle_no_info.close();
}
vehicle_no_read>>vehicle_no;
vehicle_no_read.close();
vehicle_no++;
vehicle vehicle_info[vehicle_no];
system("cls");
cout <<"-----------------------------------------------------------------------------------------------------------\n";
cout<<"enter vehicle's name \n";
string name;
cin>>name;
cout<<"enter vehicle's type from(automobile,truck,motorbike,bus) \n";
vehicle_type type;
cin>>type;
cout <<"enter vehicle's price per day \n";
float price;

vehicle_info[vehicle_no].name=name;
vehicle_info[vehicle_no].type=type;
vehicle_info[vehicle_no].price=price;
}



















