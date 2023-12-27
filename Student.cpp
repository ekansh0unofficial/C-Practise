#include<iostream>
#include<string>

using namespace std;

class Student
{
    private :
            string name; 
            int id ; 
            int marks[6];
            int sem ; 

    public : 
            void input();
            int avgmarks();
            int max_marks();
            int min_marks();
};

void Student :: input()
{
    cout<<"enter your name : "; 
    cin>>name;
    cout<<"enter your id : ";
    cin>>id;
    cout<<"enter your semester : ";
    cin>>sem;

    for(int i = 0 ; i<6 ;i++)
    {
        cout<<"enter the marks for subject " <<i+1<<" " ; 
        cin >>marks[i];
    }
} 

int Student :: avgmarks(){
    int avg = 0  ; 
    for(int i = 0 ; i<6 ;i++)
    {
        avg = avg + marks[i];       
    }
    avg = avg/6;
    return avg;
}

int Student :: max_marks()
{
    for(int i = 0 ; i<6 ; i++)
    {
        if(marks[i] > marks[i+1] )
        {
            int k = marks[i];
            marks[i] = marks[i+1];
            marks[i+1] = k;
        }
    }
    return marks[5];
}

int Student :: min_marks()
{
    for(int i = 0 ; i<6 ; i++)
    {
        if(marks[i] < marks[i+1] )
        {
            int k = marks[i];
            marks[i] = marks[i+1];
            marks[i+1] = k;
        }
    }
    return marks[5];
}

int main()
{
    Student std1; 

    std1.input();
    int avg = std1.avgmarks();
    cout<<"avg marks are " <<avg; 

    return 0 ;
}

