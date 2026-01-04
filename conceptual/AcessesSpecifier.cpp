#include<iostream> 
 using namespace std;

 class Base
 {
    public:
            int i;
            
     private:
          
          int j;

     protected:
       
           int k;

      public:
         Base() //12
         {
          i=10;j=20;k30;

          void fun()
           {
            cout<<i<<"\n";  //Allowed
            cout<<j<<"\n";  //Allowed
            cout<<k<<"\n";  //Allowed

           }

         };     
       
 };
 class Derived : public Base //16
      {
        public:
             int x;
           void Display()
           {
            cout<<i<<"\n";  //Allowed
            cout<<j<<"\n";  // Error
            cout<<k<<"\n";  // Allowed

           }       

       };
 int main()
 {
    Base bobj;
    Derived dobj;
  
    cout<<bobj.i<<"\n";  //Allowed
    cout<<bobj.j<<"\n";  //Error
    cout<<bobj.k<<"\n";  //Error

    cout<<dobj.i<<"\n";  //Allowed
    cout<<dobj.j<<"\n";  //Error
    cout<<dobj.k<<"\n";  //Error

    dobj.fun();       //call Allowed 
    dobj.Display();   //Call Allowed

    return 0;
 }