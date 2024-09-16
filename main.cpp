#include<iostream>
#include<iomanip>
using namespace std;
int i,n,t=0;

class student{
 public:
     int rollno,age,std;
     char name[20], gen[10];
}s[20];

//GET DATA 
int getdata(){
   cout<<"\nE N T E R  S T U D E N T  D A T A\n";
  
  cout<<"\nHow Many Student : ";
  cin>>n;
  
  if(t==0){
    //t=t+n;
    
    for(int i=0; i<n; i++){
  cout<<"\nS T U D E N T  N O: "<<i+1<<endl;
    
  cout<<"\nEnter Class  : ";
  cin>>s[i].std;
  cout<<"Enter Roll-No: ";
  cin>>s[i].rollno;
  cout<<"Enter Name   : ";
  cin>>s[i].name;
  cout<<"Enter Age    : ";
  cin>>s[i].age;
  cout<<"Enter Gender : ";
  cin>>s[i].gen;

     }
  
  }else
    
  for(int i=t; i<t+n; i++){
  cout<<"\nS T U D E N T  N O: "<<i+1<<endl;
   
  cout<<"\nEnter Class  : ";
  cin>>s[i].std;
  cout<<"Enter Roll-No: ";
  cin>>s[i].rollno;
  cout<<"Enter Name   : ";
  cin>>s[i].name;
  cout<<"Enter Age    : ";
  cin>>s[i].age;
  cout<<"Enter Gender : ";
  cin>>s[i].gen;
   
  }
  cout<<"\nD A T A  A D D E D ! \n";
  
  t=t+n; 

   return 0;
}
//UPDATE DATA
int update(){
  int rollno;

  if(t==0){
    cout<<"\n\nR E C O R D  I S  E M P T Y !\n";
    return 0;
}else

  cout<<"\n\nU P D A T E  D A T A\n";
  cout<<"\nEnter Student Roll-no: ";
  cin>>rollno;

  if(rollno==s[i].rollno){
     cout<<"\nE N T E R  N E W  D A T A\n";

    for(int i=0; i<n; i++){   
      cout<<"\nEnter Class  : ";
      cin>>s[i].std;
      cout<<"Enter Roll-No: ";
      cin>>s[i].rollno;
      cout<<"Enter Name   : ";
      cin>>s[i].name;
      cout<<"Enter Age    : ";
      cin>>s[i].age;
      cout<<"Enter Gender : ";
      cin>>s[i].gen;

     }
    cout<<"\n\nR E C O R D  U P D A T E D !\n";
        
  }else
     cout<<"\nR E C O R D  I S  E M P T Y !\n"; 
  return 0;
}

//SHOW DATA
int show(){
  if(t==0){
    cout<<"\nR E C O R D  I S  E M P T Y ! \n"; 
    }else
    cout<<"\nS T U D E N T S  R E C O R D \n";
  
  for(int i=0; i<t; i++){
    cout<<"\n\nS T U D E N T  N O: "<<i+1<<"\n"<<endl;
    cout<<"Standard: "<<s[i].std<<"-STD"<<endl;
    cout<<"Roll-No : "<<"2022AS00-"<<s[i].rollno<<endl;
    cout<<"Name    : "<<s[i].name<<endl;
    cout<<"Age     : " <<s[i].age<<"-Years"<<endl;
    cout<<"Gender  : "<<s[i].gen<<endl;
   
  }   
  return 0;
}
//SEARCH DATA
int search(){
  int rollno;
  
  if(t==0){
    cout<<"\nR E C O R D  I S  E M P T Y !\n";
    return 0;
    
  }else
    
 cout<<"\nS E A R C H  R E C O R D\n";
    
  cout<<"\n\nEnter Student Roll-no: ";
  cin>>rollno;
  
  for(i=0; i<t; i++){
    if(rollno==s[i].rollno) { 
    cout<<"\n\nS T U D E N T  D A T A \n\n";
    cout<<"Standard: "<<s[i].std<<"-STD"<<endl;
    cout<<"Roll-No : "<<"2022AS00-"<<s[i].rollno<<endl;
    cout<<"Name    : "<<s[i].name<<endl;
    cout<<"Age     : " <<s[i].age<<"-Years"<<endl;
    cout<<"Gender  : "<<s[i].gen<<endl;

  return 0;
      }else
    cout<<"\n\nR E C O R D  N O T  F O U N D !\n";


  }
  return 0;
}
//DELETE DATA 
int remove(){
  int rollno,choice;
 if(t==0){
   cout<<"\nR E C O R D  I S  E M P T Y !\n";
   return 0;
 }else 
   cout<<"\n D E L E T E  D A T A \n\n";
   cout<<"Enter Student Roll-No: ";
   cin>>rollno;
  for(i=0; i<t; i++){
    
    if(rollno==s[i].rollno){
      cout<<"\n\nS T U D E N T  D A T A \n\n";
    cout<<"Standard: "<<s[i].std<<"-STD"<<endl;
    cout<<"Roll-No : "<<"2022AS00-"<<s[i].rollno<<endl;
    cout<<"Name    : "<<s[i].name<<endl;
    cout<<"Age     : " <<s[i].age<<"-Years"<<endl;
    cout<<"Gender  : "<<s[i].gen<<endl;
      cout<<"\nAre Sure You Want To Delete This Student's \nData\n";
    cout<<"\nEnter [1] To Delete Data\n";
    cout<<"Enter [2] To exit\n";
    cout<<"\nEnter Choice : ";
    cin>>choice;

      if(choice==1){
        for(i=0; i<t; i++){
          s[i+1].rollno;
          s[i+1].name;
          s[i+1].gen;
          s[i+1].age;
          s[i+1].std;
    cout<<"\nD A T A  D E L E T E D !\n ";
        }
          t--;
        
      }else 
        if(choice==2){
          cout<<" \nT H A N K  Y O U !\n";
        }

      }else
 cout<<"\nR E C O R D  N O T  F O U N D !\n";
    
      
  }
  return 0;
}
//MAIN FUNCTION 
int main() {
  int choice;
 
  a:
  cout<<"\n\t\t  S T U D E N T  D A T A \n\n\tM A N A G E M E N T  S Y S T E M\n\n";

  cout<<"1.Add      Data\n";
  cout<<"2.Search   Data\n";
  cout<<"3.Update   Data\n";
  cout<<"4.Show all Data\n";
  cout<<"5.Delete   Data\n";
  cout<<"6.Exit\n";
  cout<<"\n\nEnter Choice: ";
  cin>>choice;

  switch(choice){
    case 1:
   //   system("CLS");
       cout<<"\n-------------------------------------------\n";
      getdata();
      cout<<"\n-------------------------------------------\n";
      goto a;
      break;

    case 2:
      cout<<"\n-------------------------------------------\n";
      search();
      cout<<"\n-------------------------------------------\n";
      goto a;
      break;

    case 3:
    cout<<"\n-------------------------------------------\n";
    update();
   cout<<"\n-------------------------------------------\n";
    goto a;
    break;
    
    case 4:
     cout<<"\n-------------------------------------------\n";
     show();
     cout<<"\n-------------------------------------------\n";
     goto a;
     break;

    case 5:
    cout<<"\n-------------------------------------------\n";
    remove();
    cout<<"\n-------------------------------------------\n";
    goto a;
    break;
    
    case 6:
     cout<<"\nT H A N K  Y O U !\n";
     cout<<"\n-------------------------------------------\n";
     exit(0);
    
    default:
    cout<<"\nI N V A L I D  I N P U T !\n";
      cout<<"\n-------------------------------------------\n";
    goto a;
    break;      
    }
  }
