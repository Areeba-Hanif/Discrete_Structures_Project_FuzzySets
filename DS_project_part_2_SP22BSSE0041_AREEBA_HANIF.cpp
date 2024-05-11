//--------------------------DISCRETE STRUCTURES PROJECT PART 2----------------------------------//
//-------------------  Submitted to: Ms.AMAN FAROOQ  -------  SECTION : DM  --------------//
///-------------------Submitted by AREEBA HANIF ------ ID : SP22-BSSE-0041  ---------------//




//----------------------------code------------------------//
#include<iostream>
using namespace std;

//-------------Function of Reflexive  Relation----------------//
bool isReflexive(int mat[3][3]){ 

    for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 3; j++){

            if (i == j && mat[i][j] != 1){

                return false;
}
 } 
 }
    return true;
}



//-------------Function of IrReflexive  Relation----------------//
bool isIrreflexive(int mat[3][3]){ 

    for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 3; j++){
            if (i == j && mat[i][j] != 0){
		

               return false;
            }
 } 
 }

    return true;
}



//-------------Function of Symmetric  Relation----------------//
bool isSymmetric(int mat[3][3]){ 

    for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 3; j++){
 
            if (mat[i][j]!=mat[j][i]){
			

                return false;
            }

 } 
 }

    return true;
}




//-------------Function of AntiSymmetric  Relation----------------//
bool isAntisymmetric(int mat[3][3]){ 

    for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 3; j++){
         
		 if (mat[i][j]&&mat[j][i]==1){
			 return false;			    
            }        
		
 } 
 }

	 return true;  

 
}



//-------------Function of Transitive  Relation----------------//
 bool isTransitive( int mat[3][3] ){
 	for( int i = 0 ; i < 3 ; i++ ){
 		for( int j = 0 ; j < 3 ; j++ ){
 		     for( int k = 0 ; k < 3 ; k++ ){
 		     	
 		     		if ( mat[i][j] != 1 && mat[j][k] != 1 && mat[i][k] != 1 ){
 		     			return false;
					  }
				  
			  }
		 }
	 }
	 return true;
 }
 


  int main(){
  	system("COLOR B4");
	  cout<<"\n************************************************************************************************************************\n\t\t\t\t\tDIFFERENT RELATIONS ON  A  MATRIX\n\n************************************************************************************************************************ "<<endl;	
  	
	int matrix[3][3],choice;
   
   	cout<<"Enter elements of the relation  Matrix :"<<endl;
   	
   	//----------------loop for input elements from user---------------//
   	
	for( int i = 0 ; i < 3 ; i++){
		for( int j = 0 ; j < 3 ; j++){
			cin>>matrix[i][j];
			if( matrix[i][j]==1 || matrix[i][j]==0 ){//condtion for taking only 1 and 0//
			
			}
			else{
				cout<<"INVALID INPUT !!"<<endl;
				exit(0);
			}
			
		}
	}
	cout<<"\n\nYour entered matrix is :\n";
	//-------------------------loop for print  the matrix------------------------//
    for( int i = 0 ; i < 3 ; i++ ){
		for(int j = 0 ; j < 3 ; j++ ){
			cout<<"  "<<matrix[i][j];
		}
		cout<<endl;
	}
	//----------------using switch for taking choice from user--------------------//
	int option=1;
	do{
		
	
	cout<<"\n\n\n YOU CAN CHECK THE FOLLOWING RELATIONS ON THE ABOVE MATRIX : \n"<<endl;
		cout<<"\t\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n";
		cout<<"\t\t| \t\t\t\t\t\t\t| \n";
		cout<<"\t\t|\tPress 1  To : Check Reflexive  \t\t\t|"<<endl;
		cout<<"\t\t|\tPress 2  To : Check Irreflexive \t\t|"<<endl;
		cout<<"\t\t|\tPress 3  To : Check Symmetric \t\t\t|"<<endl;
		cout<<"\t\t|\tPress 4  To : Check Anti Symmetric \t\t|"<<endl;
		cout<<"\t\t|\tPress 5  To : Check Transitive \t\t\t|"<<endl;
		cout<<"\t\t|\tPress 6  To : Check A-Symmetric \t\t|"<<endl;
		cout<<"\t\t|\tPress 0  To : EXIT \t\t\t\t| \n";
		cout<<"\t\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|\n";

	
	cin>>choice;
	
    switch(choice){
    	
    	
	case 1:
		isReflexive(matrix);
		if(isReflexive(matrix)){
		cout<<"Matrix is Reflexive "<<endl;
	
	}else {
		cout<<"matrix is not reflexive "<<endl;
	}
	break;
		
		
	case 2:
		isIrreflexive(matrix);
		if(isIrreflexive(matrix)){
		cout<<"Matrix is IrReflexive "<<endl;
	
	}else {
		cout<<"matrix is not Irreflexive "<<endl;
	}
	break;
	
	
	case 3:
		isSymmetric(matrix);
			if(isSymmetric(matrix)){
		cout<<"Matrix is Symmetric "<<endl;
	
	}else {
		cout<<"matrix is not Symmetric "<<endl;
	}
	break;
	
	
	case 4:
		isIrreflexive(matrix);
		isAntisymmetric(matrix);
			if(isAntisymmetric(matrix)){
			
		cout<<"Matrix is Antisymmetric "<<endl;
	
	}else {
		cout<<"matrix is not Antisymmetric "<<endl;
	}
	break;
	
	
	case 5:
		isTransitive(matrix);
			if(isTransitive(matrix)){
		cout<<"Matrix is Transitive "<<endl;
	
	}else {
		cout<<"Matrix is not Transitive "<<endl;
	}
		break;
		
		
	case 6:
		if(isAntisymmetric(matrix)&&isIrreflexive(matrix)){
			cout<<"Matrix is A-Symmetric "<<endl;
		}
		else{
			cout<<"Matrix is not A-Symmetric "<<endl;
		}
		
		
	case 0:
	    exit(0); 
	    
	default:
		cout<<"Invalid Input  "<<endl;
}

}while(option!=0);
	
	
	
	
}
