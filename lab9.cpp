#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void file(ifstream& input, ofstream& output) //this function checks for file opening successfully and gets passed by referenece
{
    input.open("/Users/ashwaqaljanahi/lab9/roster.txt"); //input file opening 
    if (input.is_open())//error checking 
    {
        cout<<"File opened!"<<endl;
    }
    else
    {
        cout<<"Error, file is not open"<<endl;
    }
output.open(".txt",ios::app);//output file opening 
 if (output.is_open())//error checking
    {
        cout<<"File opened!"<<endl;
    }
    else
    {
        cout<<"Error, file is not open"<<endl;
    }
}
void read_output() //read the input file that was passed by referenece
{
    ifstream in; 
    ofstream out;
    int num=true;
    string name; 
    int number=true;
    char answer=true;
 file(in,out); //function to get files to open and check
    
cout<<"Please enter ID number to find person's name"<<endl; //request user for ID number for search
   cin>>number;//user input
   for(int i=0; i<7;i++)//loop for file search
   {while(in>>num>>name)//reading file
    {   
        if(num==number)//if user input has a match
        {
        cout<<"ID name has been found! It is "<<name<<" And ID number is "<<num<<endl;
        break;
        }
        
        
    }
    break;
   }
      if (num != number)//if user has no match 
        {   cout<<"ID name has not been found. Would you like to include ID name. Press Y/y?"<<endl;
            cin>>answer;
        while(answer == 'y'|| answer == 'Y')//if user wants to add ID number along with name
            {
                cout<<"Please enter the name"<<endl;
                
                cin.ignore();
                
                getline(cin,name);
                out<<number<<" "<<name<<endl;

                break;
            }
        }
        in.close(); //close input file
        out.close();//close output file
    }
int main()// main func
{
    char ch=true;
do {//do while loop to repeat till user chooses to quit

read_output();//calling read file and output file

cout<<"Would like to look for another ID? Press Y/y."<<endl;
cin>>ch;

} while(ch == 'y'|| ch=='Y');

}