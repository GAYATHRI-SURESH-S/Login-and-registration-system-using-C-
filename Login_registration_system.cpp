#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string command, name, password,in_name,in_password;
    cout<<"Enter choice : "<<endl;
    cout<<"Register\ Login\ Exit "<<endl;
    cin>>command;
    if(command == "Exit")
    cout<<"Logged out."<<endl;
    if(command== "Register")
    {
        ofstream regfile("Registration.txt");
        if(regfile.is_open())
        {
            cout<<"Enter username: "<<endl;
            cin>>name;
            regfile<<name;
            regfile<<'\n';
            cout<<"Enter the password: "<<endl;
            cin>>password;
            regfile<<password;
            regfile.close();
            cout<<"Registration successfull."<<endl;
        }
        else
        {
            cout<<"Sorry, couldn't open the file."<<endl;
        }
    }
        if(command == "Login")
        {
            ifstream logfile("Registration.txt");
            if(logfile.is_open())
            {
                getline(cin,in_name,'\n');
                getline(cin,in_password,'\n');
                logfile.close();
                cout<<"Enter username: "<<endl;
                cin>>name;
                cout<<"Enter the password: "<<endl;
                cin>>password;
                if(name ==in_name && password  == in_password)
                {
                    cout<<"Logged in successfully."<<endl;
                }
                else{
                    cout<<"Check your credentials for logging in.."<<endl;
                }
            }
            
        }
       return 0;
}

    
                