
///-----------------  submitted by AREEBA HANIF ------ ID : SP22-BSSE-0041  ---------------//
//-------------------  submitted to :Ms.AMAN FAROOQ  -------  SECTION : DM  --------------//
//-------------------------------Working on fuzzy sets------------------------//

#include<iostream>
using namespace std;
int main(){
	system("COLOR B0");
	
	
	
	cout<<"\n************************************************************************************************************************\n\t\t\t\t\tDIFFERENT OPERATIONS ON TWO FUZZY SETS\n\n************************************************************************************************************************ "<<endl;
	
	//---------------------For the inputs of set A------------------//
	int nA;
	cout<<"  Enter size of set A :"<<endl;
	cin>>nA;
	
	float A[nA];
	cout<<"  Enter the "<<nA<<" elements of set A between the range of 0 and 1 :"<<endl;
	
	for(int i=0;i<nA;i++){
		cin>>A[i];
		
		if(A[i]>1||A[i]<0){
			cout<<" INVALID INPUT "<<endl;
		//	exit(0);   //for invalid input program will exit
			
		}
         
	}
		//---------------------For the inputs of set B-----------------//
		
	int nB;
	cout<<"  Enter size of set B :"<<endl;
	cin>>nB;
	float B[nB];
	cout<<"  Enter the "<<nB<<" elements of set B between the range of 0 and 1 :"<<endl;
	
	for(int i=0;i<nB;i++){
		cin>>B[i];
			if(B[i]>1||B[i]<0){
			cout<<" INVALID INPUT "<<endl;
		//	exit(0);   // for invalid input program will exit
		}
		
	}
		//------------for the display of the above two sets---------------//
		cout<<"  The elements of set A are : { ";
			for(int i=0;i<nA;i++){
				cout<<A[i];
	        	 if(i!=nA-1){
					 cout<<" , ";
        }
	        }
	        cout<<" }"<<endl;
	        
	        cout<<"  The elements of set B are : { ";
			for(int i=0;i<nB;i++){
	        	cout<<B[i];
	        	 if(i!=nB-1){
					 cout<<" , ";
        }
	        	
	        }
	        cout<<" }"<<endl;
		//-------------------------------------------------------------------------//
		float a_comp[nA], b_comp[nB];//	declaring arrays  for A compliment and B compliment
		
		//-------------------for menu---------------------------------------------//
		int option=1;
		do{
			
	
		int choice;
		
		cout<<"\n\n\n\n YOU CAN DO THE FOLLOWING OPERATIONS ON THE ABOVE TWO SETS  A and B : \n"<<endl;
		cout<<"\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n";
		cout<<"\t\t| \t\t\t\t\t\t\t| \n";
		cout<<"\t\t|\tPress 1  for : UNION of A and B  \t\t|"<<endl;
		cout<<"\t\t|\tPress 2  for : INTERSECTION of A and B \t\t|"<<endl;
		cout<<"\t\t|\tPress 3  for : SUBTRACTION of  of A and B \t|"<<endl;
		cout<<"\t\t|\tPress 4  for : SUBTRACTION of  of B and A \t|"<<endl;
		
		cout<<"\t\t|\tPress 0  for : EXIT \t\t\t\t| \n";
		cout<<"\t\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|\n";
		
		cin>>choice;
		
		
		
		switch(choice){
			case 1:
				cout<<"  A U B =  "<<"\t { ";
				
				for(int i=0;i<nA;i++){
				
				if(A[i]>B[i]){
					cout<<A[i];
					 if(i!=nA-1){
					 cout<<" , ";
        }
				}
				else{
					cout<<B[i];
					 if(i!=nA-1){
					 cout<<" , ";
        }
					
				}	
			}cout<<" }"<<endl;
			break;
				
				
			case 2:
				cout<<"  A intersection B = "<<"\t { ";
				
					for(int i=0;i<nA;i++){
				
				if(A[i]<B[i]){
					cout<<A[i];
					 if(i!=nA-1){
					 cout<<" , ";
        }
					
				}
				else{
						cout<<B[i];
						 if(i!=nA-1){
					 cout<<" , ";
        }
					
				}
			}cout<<" }"<<endl;
			break;
				
				
			case 3:
				cout<<"  A - B = ";
				cout<<" { ";
		//--------formula for A - B is : A intersection B'		
				
			for(int i=0;i<nB;i++){
				
				b_comp[i]=1-B[i];
//					cout<<b_comp[i]<<" , ";	  //for checking B compliment
				}
				for(int i=0;i<nA;i++){
					
					if(A[i]<b_comp[i]){
						
						cout<<A[i];
						 if(i!=nA-1){
					 cout<<" , ";
        }
					}
				
				else{
					cout<<b_comp[i];
					 if(i!=nA-1){
					 cout<<" , ";
        }
					
				}
				}
		
			cout<<" }"<<endl;
	
      		break;
      			
			case 4:
				cout<<"  B - A = ";
				
					cout<<" { ";
		//--------formula for B-A is : A intersection B'		
				
			for(int i=0;i<nA;i++){
				
				a_comp[i]=1-A[i];
				//	cout<<a_comp[i]<<" , ";	  //for checking A  compliment
				}
				for(int i=0;i<nB;i++){
					if(B[i]<a_comp[i]){
						cout<<B[i];
						 if(i!=nA-1){
					 cout<<" , ";
        }
						 
					}
				
				else{
					cout<<a_comp[i];
					 if(i!=nA-1){
					 cout<<" , ";
        }
					
				}
				}
		
			cout<<" }"<<endl;
	      	break;
			
		    
			
			case 0:
	            exit(0); 
	            
			default:
				cout<<" INVALID INPUT ";
				
		}
			}while(option!=0);
									
		
}
