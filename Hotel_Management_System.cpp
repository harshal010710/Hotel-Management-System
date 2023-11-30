#include <iostream>

using namespace std;

struct room
{
    string name;
    int age;
    char gender;
    int rn;
};


class hotel
{
    room * room_no[5];
    room p,data[5];
    room *point;
    room *temp[5];
   
  public:
  
  hotel();
  void allocate_room (int);
  void display_availability();
  void room_info(int);
  void deallocate_room(int);
  void modify(int);

};
  
  hotel :: hotel()
  {
      
      for(int i=0;i<5;i++)
      {
         room_no[i]=&p;
      }
  }
  
  void hotel :: allocate_room (int x)
  {
      point=&data[x];
      
    if(room_no[x]==&p)
    {
        room_no[x]=point;
        
        cout<<"\n\t\tEnter the name : ";
        cin>>point->name;
        
        cout<<"\n\t\tAge of costomer : ";
        cin>>point->age;
        
        cout<<"\n\t\tGender (M / F): ";
        cin>>point->gender;
        
        point->rn=x;
        
        point=NULL;
        
    }
    
    else
    {
        cout<<"\n\t\t Sorry..! Room is Not Available";
    }
  }
  
  void hotel :: display_availability()
  {
      
      for(int i=0;i<5;i++)
      {
          if(room_no[i]==&p) 
          {
              cout<<"\n\t\t"<<i<<" - no. Room is Available";
          }
          
          else
          {
              cout<<"\n\t\t"<<i<<" - Allocaed";
          }
      }
  }
  
  
  void hotel :: room_info(int z)
  {
      cout<<"\n\t\tRoom Number        : "<<z;
      cout<<"\n\t\tName of costomer   : "<<room_no[z]->name;
      cout<<"\n\t\tAGE of costomer    : "<<room_no[z]->age;
      cout<<"\n\t\tGender of costomer : "<<room_no[z]->gender;
  }
  
  void hotel :: deallocate_room(int y)
  {
      room_no[y]=&p;
      
      cout<<"\n\t\t"<<y<<" - Room is Available Now";
  }
  
  void hotel :: modify(int m)
  {
      point=&data[m];
      room_no[m]=point;
        
        cout<<"\n\t\tEnter the name : ";
        cin>>point->name;
        
        cout<<"\n\t\tAge of costomer : ";
        cin>>point->age;
        
        cout<<"\n\t\tGender (M / F): ";
        cin>>point->gender;
        
        point->rn=m;
        
        point=NULL;
  }


int main()
{
   hotel h1;
   int ch,a;
   
   do
   {
    cout<<"\n"<<"------------------------------------------------------------------------------------------------------------"<<"\n\t\t1 . Availability        ";
    cout<<"\n\t\t2 . Book A Room         ";
    cout<<"\n\t\t3 . Display Room Record ";
    cout<<"\n\t\t4 . Delete Room Record  ";
    cout<<"\n\t\t5 . Modify Room Record  ";
    cout<<"\n\t\t7 . EXIT : ";

    cout<<endl<<"Enter choice : "<<endl;
    
    cin>>ch;
    
    switch(ch)
    {
        case 1 : cout<<"\n\n";
                 h1.display_availability();
                 break;
        
        case 2 : cout<<"\n\t\t Enter room Number [1-5]: ";
                 cin>>a;
                 h1.allocate_room(a);
                 break;
                 
        case 3 : cout<<"\n\t\t Enter room Number [1-5]: ";
                 cin>>a;
                 h1.room_info(a);
                 break;
                 
        case 4 : cout<<"\n\t\t Enter room Number [1-5]: ";
                 cin>>a;
                 h1.deallocate_room(a);
                 break;
                 
        case 5 : cout<<"\n\t\t Enter room Number [1-5]: ";
                 cin>>a;
                 h1.modify(a);
                 break;
                 
        default : cout<<"\n\t\t Incorrect choise ";
                break;
    }
    
   }while(ch!=7);
   
    return 0;
}




