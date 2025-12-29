#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
bool askQuestions(string question,string optionA,string optionB,string optionC,string optionD, char correctAnswer ){
	int attempt=2;
	char answer;
	
	while(attempt>0){
		cout<<question<<endl;
		cout<<"A "<<optionA<<endl;
		cout<<"B "<<optionB<<endl;
		cout<<"C "<<optionC<<endl;
		cout<<"D "<<optionD<<endl;
		cout<<"Enter your answer(A/B/C/D)"<<endl;
		cin>>answer;
		answer= toupper(answer);
		if(answer==correctAnswer){
			cout<<"correct!"<<endl;
			return true;
		}
		else{
			attempt--;
			if(attempt>0){
				cout<<"Incorrect !  try again"<<endl;

			}
			else{
				cout<<"Incorrect again"<<endl;
				return false;
			}
		}
	}
}
int main( ) {
	int press=2,press2=2;
	double totalMoney=0;
	bool correct;
	cout<<"============================="<<endl;
	cout<<"Welcome to become a millonaire "<<endl;
	cout<<"=============================="<<endl;
	cout<<"Press 1 to start .."<<endl;
	cin>>press;
	if(press==1){
		cout<<"Level 1"<<endl;
	}
	else{
		cout<<"Invalid input try again .."<<endl;
		return false;
	}
	
	
	correct=askQuestions("1.what is the capital town of Ghana? ","Kumasi","Accra","Cape Coast","Takoradi",'B');
	
		if(! correct){
			cout<<"You lost Game over"<<endl;
			return 0;
		}
		
		totalMoney+=200;
		cout<<"you won $ "<<totalMoney<<endl;
		
			correct=askQuestions("2. How old is Ghana than UENR ? ","Ghana is not older than UNER","20","52","13",'C');
	
		if(! correct){
			cout<<"You lost Game over"<<endl;
			return 0;
		}
		totalMoney+=100;
		cout<<"you won $ "<<totalMoney<<endl;
		
		correct=askQuestions("3.what is 4+4 ? ","8","6","2","1",'A');
	
		if(! correct){
			cout<<"You lost Game over"<<endl;
			return 0;
		}
		totalMoney+=100;
		cout<<"you won $ "<<totalMoney<<endl;
		
//		level 2
		
		cout<<"press 1 to level 2 and win more"<<endl<<"press 2 to end.. and keep what you won "<<endl;
		cin>>press2;
		if(press2==1){
			bool correct;
		correct=askQuestions("4.who is the first president of the forth republic of Ghana ? ","Kwame Nkurumah","Nana Addo","JJ Rawlings","Kuffour",'C');
		if(! correct){
			totalMoney=0;
			cout<<"You lost Game over $"<<totalMoney<<"Is what your had"<<endl;
			
			return 0;
		}
		totalMoney+=1000;
		cout<<"you won $ "<<totalMoney<<endl;
		
		correct=askQuestions("5. who is the King of Asanti ? ","Kwame Nkurumah","Otumfo)","JJ Rawlings","Kuffour",'B');
		if(! correct){
			totalMoney=0;
			cout<<"You lost Game over $"<<totalMoney<<"Is what your had"<<endl;
			
			return 0;
		}
		totalMoney+=300;
		cout<<"you won $ "<<totalMoney<<endl;
	
		}
		else{
			cout<<"thanks for taking part you won $"<<totalMoney<<endl;
			return false;
		}
		

		
	return 0;
}






 
 