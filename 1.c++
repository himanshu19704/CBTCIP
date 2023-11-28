#include <iostream>
using namespace std;

class student{
    int l=0;
    int j;
    int i = 1;
    string firstname[100],lastname[100];
    int rollno[100],courseid[100];
    double cgpa[100];

    public:
    void input(){
        cout<<"Enter the First name of student : "<<i<<" : ";
        cin>>firstname[i];
        cout<<endl;

        cout<<"Enter the Last name of student : "<<i<<" : ";
        cin>>lastname[i];
        cout<<endl;

        cout<<"Enter the roll number of student : "<<i<<" : ";
        cin>>rollno[i];
        cout<<endl;

        cout<<"Enter the cgpa of student : "<<i<<" : ";
        cin>>cgpa[i];
        cout<<endl;

        cout<<"Enter the courseid : "<<i<<" : ";
        cin>>courseid[i];
        cout<<endl;

        i++;
    }

    void output(){
        i=1+l;
        l++;
        cout<<"First name of student : "<<i<<" is "<<firstname[i]<<endl;
        cout<<"Last name of student : "<<i<<" is "<<lastname[i]<<endl;
        cout<<"roll number of student : "<<i<<" is "<<rollno[i]<<endl;
        cout<<"cgpa of student : "<<i<<" is "<<cgpa[i]<<endl;
        cout<<"Enter the courseid : "<<i<<" is "<<courseid[i]<<endl;


        i++;
        cout<<endl;
        cout<<endl;

    }
};

int main(){
    student j;
    int m;
    cout<<"1)Enter 1 to store details of student "<<endl;
    cin>>m;

    if(m==1){
    int k;
    do{
        j.input();
        cout<<"Enter 0 to stop the giving input and show details of students or any number to continue : ";
        cin>>k;
        cout<<endl;
    }
    while(k!=0);

    int u;
    cout<<"2)Enter 2 to show details of student "<<endl;
    cout<<"OR Enter 0 to end the program : ";
    cin>>u;
    if(u==2){
        int o;
        int n;
        cout<<"Enter the number of students of which you want to show records : ";
        cin>>n;
        for(int p = 0;p<n;p++){
            j.output();
        }
    }
    else if(u==0){
        cout<<"THANK YOU "<<endl;
    }
    }

    return 0;
}
