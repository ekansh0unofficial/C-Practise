#include<iostream>

using namespace std ; 

class Volume{

    private: //private vars cannot be used outside class , my functions are inside class, so i can use them in function  
    int l;  
    int b ; 
    int h;
    float rad;

    public : 
    void volume ( int l , int b , int h); 
    void volume ( int l );  
    void volume (int l , int rad);
    //function overloading == same name of function but different parameters , hence compiler can differentiate 
      
};

void Volume :: volume(int l , int b , int h ){

        int v = l*b*h;
        cout<<"vol of cuboid " << v ; 
}


void Volume :: volume(int l){

        int v = l*l*l;
        cout<<"vol of cube " << v ; 
}


void Volume :: volume(int l , int r ){

        float v = 3.14*l*r*r;
        cout<<"vol of cylinder " << v ; 
}

int main()
{
    Volume vol; //creating an instance of the class 

    vol.volume(3,4,5);
    cout << endl; // works like \n
    vol.volume(3);
    cout << endl;
    vol.volume(3,4);

    return 0 ;
}