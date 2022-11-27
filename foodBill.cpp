#include<iostream>

using namespace std;


int main(){
    int returnBillTotal(void);
    
 int totalBill=returnBillTotal();
 cout<<"\t\t---------------------------------------------"<<endl;
 cout<<"\n\t\t\tYour Total Bill Amount = Rs "<<totalBill<<endl;
 cout<<"\n\t\t\t----THANK YOU FOR YOUR ORDER!----"<<endl;
 cout<<"\t\t---------------------------------------------"<<endl;
 
}
int returnBillTotal(){
    char c,item;
  char VegItem;
  int billAmmount=0;
  char SelectAgain;
  char NonVegItem;
    cout<<"\n\n\t-----------------Welcome To Online Food Order-----------------"<<endl;
    cout<<"\n\t\t----------Please follow the instruction----------- "<<endl;
    cout<<"\n                                                                         Date : "<<__DATE__<<endl;
    cout<<"                                                                         Time : "<<__TIME__<<endl;
    
    cout<<"\n\n\t\t\t-->> You can order both Veg and Non-veg "<<endl;
    cout<<"\t\t\t-->> Vegeterian Food"<<endl;
    cout<<"\t\t\t-->> Non-vegeterian Food "<<endl;
    cout<<"\t\t\t-->> You will get your final bill after your order "<<endl;
    cout<<"\t\t\t-->> Press 1 -->> To Start Order "<<endl;
    start:
    cin>>c;
    if(c=='1'){
        items:
            cout<<"\n\t\t\tPlease select your choice "<<endl;
            cout<<"\n\t\t(a) Veg items            (b) Non-veg items "<<endl;
            cin>>item;
            if(item=='a' || item=='A'){
                VegItemList:
                cout<<"\n\t\t\tPlease select your choice :"<<endl;
                cout<<"\n\t\t\t1: Panneer : Price : RS 250"<<endl;
                cout<<"\t\t\t2: Burger : Price : RS 60"<<endl;
                cout<<"\t\t\t3: Pizza : Price : RS 100"<<endl;
                cout<<"\t\t\t4: Chowmin : Price : RS 50"<<endl;
                cout<<"\t\t\t5: Veg Roll : Price : RS 100"<<endl;
                
                cin>>VegItem;
                if(VegItem=='1'){
                    billAmmount=billAmmount+250;
        
                }
                else if(VegItem=='2'){
                    billAmmount=billAmmount+60;
                }
                else if(VegItem=='3'){
                    billAmmount=billAmmount+100;
                }
                 else if(VegItem=='4'){
                    billAmmount=billAmmount+50;
                }
                 else if(VegItem=='5'){
                    billAmmount=billAmmount+100;
                }
                else{
                    cout<<"\n\t\tYou have entered wrong choice \nPlease try again"<<endl;
                    goto VegItemList;
                }
                cout<<"\n\t\tDo you want to add more items,y or n"<<endl;
                cin>>SelectAgain;
                if(SelectAgain=='y'){
                    goto items;

                }
                else{
                    return billAmmount;
                }

            }
            else if(item=='b' || item=='B'){
                 NonVegItemList:
                cout<<"\n\t\t\tPlease select your choice :"<<endl;
                cout<<"\n\t\t\t1: Chiken : Price : RS 350"<<endl;
                cout<<"\t\t\t2: Mutton : Price : RS 450"<<endl;
                cout<<"\t\t\t3: Egg-Roll : Price : RS 100"<<endl;
                cout<<"\t\t\t4: Chiken Rice : Price : RS 150"<<endl;
                cout<<"\t\t\t5: Non-Veg Roll : Price : RS 170"<<endl;
                
                cin>>NonVegItem;
                if(NonVegItem=='1'){
                    billAmmount=billAmmount+350;
        
                }
                else if(NonVegItem=='2'){
                    billAmmount=billAmmount+450;
                }
                else if(NonVegItem=='3'){
                    billAmmount=billAmmount+100;
                }
                 else if(NonVegItem=='4'){
                    billAmmount=billAmmount+150;
                }
                 else if(VegItem=='5'){
                    billAmmount=billAmmount+170;
                }
                else{
                    cout<<"\n\t\t\tYou have entered wrong choice \nPlease try again"<<endl;
                    goto NonVegItemList;
                }
                cout<<"\n\t\t\tDo you want to add more items,y or n"<<endl;
                cin>>SelectAgain;
                if(SelectAgain=='y'){
                    goto items;

                }
                else{
                    return billAmmount;
                }


            }
            else{
                cout<<"\n\t\t\tYou have entered wrong value \n Please try again"<<endl;
                goto items;
            }

    }
    else{
        cout<<"\n\t\t\tYou have entered wrong value \nPlease press 1 "<<endl;
        goto start;
    }
    return billAmmount;
}