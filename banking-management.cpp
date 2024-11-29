#include<iostream>
using namespace std;

class bankAccount{
        private:
            int accountNumber;
            string accountHolderName;
            int balance = 0;
        
        public:
            void creatAccount(int accountno ,string accountHolderName){
                   this->accountNumber = accountno;
                   this->accountHolderName = accountHolderName;
                   this->balance = balance; 
                   cout << "account has been created......" <<endl;
            }

            void displayAccountInfo(){
                cout << "Bank account number :-" << this->accountNumber <<endl ;
                cout << "Bank account holder name :-" << this->accountHolderName <<endl;
                cout << "Bank balance :-" << this->balance <<endl;
            }
};
class SavingsAccount : public bankAccount{
        private:
            int interestRate;

        public:
            void setInterestRate(int interestRate){
                this->interestRate = interestRate;
            }

};

int main(){

    SavingsAccount Ac1;
    int choice;
    int accountno;
    string holder;
        
        cout <<"\n Enter your account number :-";
        cin >> accountno ;
        
        cin.ignore();
        
        cout << "\n Enter your name :-";
        getline(cin, holder); 

          Ac1.creatAccount(accountno,holder);

        
    do
    {
        cout << "\n\n\n*/--------------------------------------/*"<< endl;

        cout << "press 1 for create Bank Account --/" << endl;
        cout << "press 2 for display bank Account --/" << endl;
        cout << "press 3 for add Balance in Account --/" << endl;
        cout << "press 4 for Exit  --/" << endl;
        
        cout << "*/--------------------------------------/*";
        
        cout << "Enter your choice";
        cin >> choice;

        switch (choice){
      
        case 1:{        
        }
            break;
        
        case 2:
            Ac1.displayAccountInfo();
            break;
        
        case 3:
            break;
        
        case 4:
            cout <<"Thank you for visiting......";
            break;
        }
    } while (choice != 4);
    

return 0;
}
