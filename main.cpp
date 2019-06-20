
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<fstream>
#include<string.h>
#include<iomanip>
using namespace std;
class student
{
	public: char name[10];
		char usn[10];
		char age[5];
		char sem[5];
		char sub[5];
		char att[5];
		char IA1[5];
		char IA2[5];
		char branch[5];

		char buffer[100];
};

fstream file;
student s;
int s_no=0;
int adminLogin();
int adminView();
int writerecord();
int displayFile();
int search();
int modify();
int deleterecord();
int studentView();
int studentLogin();
int delay();
int delay()
{
for(int i = 0; i<3; i ++)
{
	cout<<"\n Saving Records ...";
    for(int ii = 0; ii<20000; ii ++)
    {
    	for(int iii = 0; iii<20000; iii ++)
       	{

	    }
    }
}

cout<<"\n Exiting Now ...";
for(int i = 0; i<3; i ++){
   for(int ii = 0; ii<20000; ii ++) {
     for(int iii = 0; iii<20000; iii ++){
	 }
    }
}

return 0;
}

int studentLogin()
{
system("cls");
cout<<"\n -------- Student Login ---------";
studentView();
delay();
return 0;
}
int studentView()
{
	char usn[10];
	char extra[50];

	file.open("program_3.txt",ios::in);
	if(!file)
	{
		cout<<"\nunable to open the file in read mode";
		getch();
		exit(0);
	}
	cout<<"\nenter the record's usn you want to search = ";
	cin>>usn;

	while(!file.eof())
	{
		file.getline(s.name,10,'|');
		file.getline(s.usn,10,'|');
		file.getline(s.age,5,'|');
		file.getline(s.sem,5,'|');
		file.getline(s.sub,5,'|');
		file.getline(s.att,5,'|');
		file.getline(s.IA1,5,'|');
		file.getline(s.IA2,5,'|');
		file.getline(s.branch,5,'\n');


		if(strcmp(s.usn,usn)==0)
		{
			cout<<"\nrecord found";
			cout<<"\nname\tusn\tage\tsem\tsub\tatt\tIA1\tIA2\tbranch";

			cout<<"\n"<<s.name<<"\t"<<s.usn<<"\t";
			cout<<s.age<<"\t"<<s.sem<<"\t"<<s.sub<<"\t"<<s.att<<"\t"<<s.IA1<<"\t"<<s.IA2<<"\t"<<s.branch;

			file.close();
			getch();
			return 0;
		}
	}
	cout<<"\nrecord not found";
	file.close();
	getch();
	return 0;
}

int adminLogin()
{
system("cls");
cout<<"\n --------- Admin Login --------";

string username;
string password;

cout<<"\n Enter username : ";
cin>>username;
char ch;
cout<<"\n Enter password : ";

   ch = _getch();
   while(ch != 13){
      password.push_back(ch);
      cout << '*';
      ch = _getch();
  }
if(username=="admin" && password=="fslab")
{
    adminView();
    getchar();
     delay();
}
else
{
cout<<"\n Error ! Invalid Credintials..";
cout<<"\n Press any key for main menu ";
getchar();getchar();
}

return 0;

}
int adminView()
{
int goBack = 0;
while(1)
{
system("cls");
cout<<"\n 1 Register a Student";
cout<<"\n 2 display all students";
cout<<"\n 3 modify ";
cout<<"\n 4 search";
cout<<"\n 5 delete a student";
cout<<"\n 0. Go Back <- \n";
int choice;

cout<<"\n Enter your choice: ";
cin>>choice;

switch(choice)
{
	case 1: writerecord();break;
	case 2: displayFile(); break;
	case 3: modify(); break;
	case 4: search(); break;
	case 5: deleterecord(); break;
	case 0: goBack = 1;break;
    default: cout<<"\n Invalid choice. Enter again ";
     getchar();
}

if(goBack == 1)
{
break; //break the loop
}

}
return 0;

}
int writerecord()
{
	file.open("program_3.txt",ios::app);
	if(!file)
	{
		cout<<"cannot open the file in append mode";
		getch();
		exit(1);
	}
	cout<<"\nenter the student name = ";
	cin>>s.name;
	cout<<"\nenter the usn = ";
	cin>>s.usn;
	cout<<"\nenter the age = ";
	cin>>s.age;
	cout<<"\nenter the sem = ";
	cin>>s.sem;
		cout<<"\nenter the subcode = ";
	cin>>s.sub;
	cout<<"\nenter the attendance = ";
	cin>>s.att;
	cout<<"\nenter the IA1 = ";
	cin>>s.IA1;
	cout<<"\nenter the IA2 = ";
	cin>>s.IA2;
	cout<<"\nenter the branch = ";
	cin>>s.branch;


	strcpy(s.buffer,s.name);
	strcat(s.buffer,"|");
	strcat(s.buffer,s.usn);
	strcat(s.buffer,"|");
	strcat(s.buffer,s.age);
	strcat(s.buffer,"|");
	strcat(s.buffer,s.sem);
	strcat(s.buffer,"|");
		strcat(s.buffer,s.sub);
	strcat(s.buffer,"|");
	strcat(s.buffer,s.att);
	strcat(s.buffer,"|");
	strcat(s.buffer,s.IA1);
	strcat(s.buffer,"|");
	strcat(s.buffer,s.IA2);
	strcat(s.buffer,"|");
	strcat(s.buffer,s.branch);
	strcat(s.buffer,"\n");
	file<<s.buffer;
	file.close();
	return 0;
}

int search()
{
	char usn[10];
	char extra[50];

	file.open("program_3.txt",ios::in);
	if(!file)
	{
		cout<<"\nunable to open the file in read mode";
		getch();
		exit(0);
	}
	cout<<"\nenter the record's usn you want to search = ";
	cin>>usn;

	while(!file.eof())
	{
		file.getline(s.name,10,'|');
		file.getline(s.usn,10,'|');
		file.getline(s.age,5,'|');
		file.getline(s.sem,5,'|');
		file.getline(s.sub,5,'|');
		file.getline(s.att,5,'|');
		file.getline(s.IA1,5,'|');
		file.getline(s.IA2,5,'|');
		file.getline(s.branch,5,'\n');


		if(strcmp(s.usn,usn)==0)
		{
			cout<<"\nrecord found";
			cout<<"\nname\tusn\tage\tsem\tsub\tatt\tIA1\tIA2\tbranch";

			cout<<"\n"<<s.name<<"\t"<<s.usn<<"\t";
			cout<<s.age<<"\t"<<s.sem<<"\t"<<s.sub<<"\t"<<s.att<<"\t"<<s.IA1<<"\t"<<s.IA2<<"\t"<<s.branch;

			file.close();
			getch();
			return 0;
		}
	}
	cout<<"\nrecord not found";
	file.close();
	getch();
	return 0;
}

int displayFile()
{
	int i;
	file.open("program_3.txt",ios::in);

	if(!file)
	{
		cout<<"\ncannot open the file in read mode";
		getch();
		exit(1);
	}

	i=0;
	printf("\n\nNAME\t\tUSN\t\tAGE\t\tSEM\t\tSUB\t\tATT\t\tIA1\t\tIA2\t\tBRANCH\n");


	while(!file.eof())
	{
		file.getline(s.name,10,'|');
		file.getline(s.usn,10,'|');
		file.getline(s.age,5,'|');
		file.getline(s.sem,5,'|');
		file.getline(s.sub,5,'|');
		file.getline(s.att,5,'|');
		file.getline(s.IA1,5,'|');
		file.getline(s.IA2,5,'|');
		file.getline(s.branch,5,'\n');
		printf("\n%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s",s.name,s.usn,s.age,s.sem,s.sub,s.att,s.IA1,s.IA2,s.branch);
		i++;
	}
	file.close();
	getch();
	return 0;
}

int modify()
{
	char usn[10];

	int i;
	int j;
	student s[100];

	file.open("program_3.txt",ios::in);
	if(!file)
	{
		cout<<"\nunable to open the file in input mode";
		getch();
		exit(1);
	}
	cout<<"\nenter the usn ";
	cin>>usn;

	i=0;
	while(!file.eof())
	{
		file.getline(s[i].name,10,'|');
		file.getline(s[i].usn,10,'|');
		file.getline(s[i].age,5,'|');
		file.getline(s[i].sem,5,'|');
		file.getline(s[i].sub,5,'|');
		file.getline(s[i].att,5,'|');
		file.getline(s[i].IA1,5,'|');
		file.getline(s[i].IA2,5,'|');
		file.getline(s[i].branch,5,'\n');
		i++;
	}
	i--;

	for(j=0;j<i;j++)
	{
		if(strcmp(usn,s[j].usn)==0)
		{
			cout<<"\nthe old values of the record with usn"<<usn<<"are";
			cout<<"\nname = "<<s[j].name;
			cout<<"\nusn = "<<s[j].usn;
			cout<<"\nage = "<<s[j].age;
			cout<<"\nsem = "<<s[j].sem;
				cout<<"\nsub = "<<s[j].sub;
			cout<<"\natt = "<<s[j].att;
			cout<<"\nIA1 = "<<s[j].IA1;
			cout<<"\nIA2= "<<s[j].IA2;
			cout<<"\nbranch = "<<s[j].branch;

			cout<<"\nenter the new values\n";
			cout<<"\nname = ";
			cin>>s[j].name;
			cout<<"\nusn = ";
			cin>>s[j].usn;
			cout<<"\nage = ";
			cin>>s[j].age;
			cout<<"\nsem = ";
			cin>>s[j].sem;
				cout<<"\nsub = ";
			cin>>s[j].sub;
			cout<<"\natt= ";
			cin>>s[j].att;
			cout<<"\nIA1 = ";
			cin>>s[j].IA1;
			cout<<"\nIA2 = ";
			cin>>s[j].IA2;
			cout<<"\nbranch = ";
			cin>>s[j].branch;
			break;
		}
	}

	if(j==i)
	{
		cout<<"\nthe record with usn " <<usn<< "is not present ";
		getch();
		return 0;
	}
	file.close();

	file.open("program_3.txt",ios::out);
	if(!file)
	{
		cout<<"\nunable to open the file in output mode";
		getch();
		return 0;
	}

	for(j=0;j<i;j++)
	{
		file<<s[j].name<<'|'<<s[j].usn<<'|'<<s[j].age
			<<'|'<<s[j].sem<<'|'<<s[j].sub<<'|'<<s[j].att
			<<'|'<<s[j].IA1<<'|'<<s[j].IA2<<'|'<<s[j].branch<<'\n';
	}
	file.close();
	return 0;
}
int deleterecord()
{
system("cls");

	fstream file;
	fstream temp;
	file.open("program_3.txt",ios::in);
	temp.open("temp1.txt",ios::out);
	char name[25];
	char usn[10];
	char age[10];
	char sem[10];
	char sub[10];
	char att[10];
	char IA1[10];
	char IA2[10];
	char branch[10];
	char usn1[10];
	cin.ignore();
	cout<<" \n  enter the Usn of the Student to be deleted  ";
	cin.getline(usn1,10);


/*	if(!file)
	{
		cout<<" \n  could not open the file in input mode";
		getch();
		return 0;
	}*/
	while(!file.eof())
	{

		file.getline(name,25,'|');
		file.getline(usn,10,'|');
		file.getline(age,10,'|');
		file.getline(sem,10,'|');
		file.getline(sub,10,'|');
		file.getline(att,10,'|');
		file.getline(IA1,10,'|');
		file.getline(IA2,10,'|');
		file.getline(branch,10,'\n');

		if(strcmp(usn,usn1)==0)
		{
		    continue;

		}
		 else
        {
            temp<< name<<'|'<<usn<<'|'<<age<<'|'<<sem<<'|'<<sub<<'|'<<att<<'|'<<IA1<<'|'<<IA2<<'|'<<branch<<'\n';
        }

	}
	temp.close();
    file.close();
    file.open("program_3.txt",ios::out);
    temp.open("temp1.txt",ios::in);
     while(!temp.eof())
    {
        temp.getline(name,10,'|');
		temp.getline(usn,10,'|');
		temp.getline(age,10,'|');
		temp.getline(sem,10,'|');
		temp.getline(sub,10,'|');
		temp.getline(att,10,'|');
		temp.getline(IA1,10,'|');
		temp.getline(IA2,10,'|');
		temp.getline(branch,10,'\n');

        file<< name<<'|'<<usn<<'|'<<age<<'|'<<sem<<'|'<<sub<<'|'<<att<<'|'<<IA1<<'|'<<IA2<<'|'<<branch<<'\n';
    }
    temp.close();
    file.close();
   remove("temp1.txt");
    cout<<"\n done !!! \n";

}

int main(int argc, char** argv) {

	while(1)
	{
		system("cls");

		cout<<"\n\n\n\n"<<"\t\t"<<"*********************************************";
	cout<<"\n\n";
	cout<<"\t\t\t"<<"    ATTENDANCE AND INTERNAL MARKS MANAGEMENT SYSTEM   "<<"\n";
	cout<<"\n\t\t"<<"*********************************************"<<"\n";
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";

		cout<<"1. Admin Login\n";
		cout<<"2. Student Login\n";
		cout<<"0. Exit\n";
		int choice;

		cout<<"\n Enter you choice: ";
		cin>>choice;

		switch(choice)
		{

		case 1: adminLogin(); break;
		case 2: studentLogin();break;
		case 0:
		        while(1)
		        {
			    system("cls");
	        	cout<<"\n Are you sure, you want to exit? y | n \n";
	        	char ex;
	        	cin>>ex;
	        	if(ex == 'y' || ex == 'Y')
	        		exit(0);
	        	else if(ex == 'n' || ex == 'N')
                 {
                 	 break;
                 }
                 else{

                 	cout<<"\n Invalid choice !!!";
                 	getchar();
                 }


         	 }	break;

                default: cout<<"\n Invalid choice. Enter again ";
                getchar();

		}

	}

	return 0;
}


