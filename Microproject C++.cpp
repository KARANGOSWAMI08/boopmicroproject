#include<iostream>
using namespace std;

class matrix{
	
	int a[20][20],b[20][20],c[20][20],i,j;
	
	public:

		matrix(){
			st:
						
			int a;
			
			cout << "------------------------------> Welcom to our project <------------------------------"<< endl << endl << endl;
			
			cout << "Enter 1 : to perform addition of two matrices.";
			cout << "\nEnter 2 : to perform subtraction of two matrices.";
			cout << "\nEnter 3 : to perform multiplication of two matrices.";
			cout << "\nEnter 4 : to get transpos transpose matrices.";
			cout << "\nEnter 5 : to find Adjoint of matrices";
			cout << "\nEnter 6 : to find inverse of matrices";
			cout << endl;
			cin >> a;
			cout << endl;
			cout << endl;
			cout << endl;
	
		switch (a) {
			
			case 1:
				cout << "||you only perfore addition of matries when both are 2*2 or both are 3*3||" << endl <<endl;
				add();
			break;
			
			case 2:
				cout << "||you only perfore subtraction of matries when both are 2*2 or both are 3*3||" << endl <<endl;
				sub();
			break;
			
			case 3:
				mul();
			break;
			
			case 4:
				trans();
			break;
			
			case 5:
				adj();
			break;
			
			case 6:
				inv();
			break;
			
			default:
		
				cout<<"Invalid Choice :\n";
				goto st;
			break;
		}
	}
		void add(){
			add:
			int ad;
			
			cout << "\nEnter 1: fro add 2*2 matrix.";
			cout << "\nEnter 2: fro add 3*3 matrix.";
			cout <<endl;
			cin >> ad;
			cout <<endl;
			cout <<endl;
			
			switch (ad){
					case 1:
						
						cout << "---------------> Enter your 1st matrix <---------------"<<endl;
						
						for(int i=1;i<3;i++)
						{
							for(int j=1;j<3;j++)
							{
								cout<<"Enter No is ["<<i<<"]["<<j<<"]:";
								cin>>a[i][j];
							}
						}
						cout<<endl;
						cout<<endl;
						cout << "Your 1st matrix is:" << "|" <<a[1][1] <<"   "<< a[1][2]<< "|";
						cout <<  "\n\t\t   |" <<a[2][1] <<"   "<< a[2][2]<< "|" << endl<<endl<<endl;
						
						cout << endl;
						cout << endl;
						
						cout << " ------------>Enter your 2nd marix <-----------"<<endl<<endl;
						
						for(int i=1;i<3;i++)
						{
							for(int j=1;j<3;j++)
							{
								cout<<"Enter No is ["<<i<<"]["<<j<<"]:";
								cin>>b[i][j];
							}
						}
						cout<<endl;
						cout<<endl;
							cout << "Your 2nd matrix is:" << "|" <<b[1][1] <<"   "<< b[1][2]<< "|";
						cout <<  "\n\t\t   |" <<b[2][1] <<"   "<< b[2][2]<< "|" << endl<<endl<<endl;
						
						cout << "Addition of 2 matrix is:";
						cout <<"|"<< a[1][1]+b[1][1]<< "   " << a[1][2]+b[1][2] << "|"<< endl;
						cout <<"\t\t\t|"<< a[2][1]+b[2][1]<< "   " << a[2][2]+b[2][2] << "|";
						break;
			
					case 2:
						
						cout << "--------------->Enter Your 1st matrix<---------------"<<endl<<endl;
						for(int i=1;i<4;i++)
						{
							for(int j=1;j<4;j++)
							{
								cout<<"Enter No is ["<<i<<"]["<<j<<"]:";
								cin>>a[i][j];
							}
						}
						cout<<endl;
						cout<<endl;
						cout << "Your 1st matrix is:" << "|" <<a[1][1] <<"   "<< a[1][2]<<"   "<< a[1][3]<<"|";
						cout <<  "\n\t\t   |" <<a[2][1] <<"   "<< a[2][2]<<"   "<< a[2][3] <<"|";
						cout <<  "\n\t\t   |" <<a[3][1] <<"   "<< a[3][2]<< "   "<< a[3][3] <<"|" << endl<<endl<<endl;
						
						cout << "---------------> Enter your 2nd matrix <---------------" << endl;
						
						for(int i=1;i<4;i++)
						{
							for(int j=1;j<4;j++)
							{
								cout<<"Enter No is ["<<i<<"]["<<j<<"]:";
								cin>>b[i][j];
							}
						}
						cout<<endl;
						cout<<endl;
						cout << "Your 2nd matrix is:" << "|" <<b[1][1] <<"   "<< b[1][2]<<"   "<< b[1][3]<<"|";
						cout <<  "\n\t\t   |" <<b[2][1] <<"   "<< b[2][2]<<"   "<< b[2][3] <<"|";
						cout <<  "\n\t\t   |" <<b[3][1] <<"   "<< b[3][2]<< "   "<< b[3][3] <<"|" << endl<<endl<<endl;
						
						c[1][1]=a[1][1]+b[1][1];
						c[1][2]=a[1][2]+b[1][2];
						c[1][3]=a[1][3]+b[1][3];
						c[2][1]=a[2][1]+b[2][1];
						c[2][2]=a[2][2]+b[2][2];
						c[2][3]=a[2][3]+b[2][3];
						c[3][1]=a[3][1]+b[3][1];
						c[3][2]=a[3][2]+b[3][2];
						c[3][3]=a[3][3]+b[3][3];
						
						cout << "Addition of 2 matrix is:";
						cout <<"|"<< c[1][1] << "   " << c[1][2] << "   " << c[1][3]<< "|"<< endl;
						cout <<"\t\t\t|"<< c[2][1]<< "   " << c[2][2] << "   " << c[2][3] <<"|"<< endl;
						cout <<"\t\t\t|"<< c[3][1] << "   " << c[3][2] << "   " << c[3][3] << "|" << endl;
						break;
						
					default:
		
						cout<<"Invalid Choice :\n";
						goto add;
						break;		
			}
		}
		
		void sub(){
			sub:
			
		 int su;
		 
		cout << "\nEnter 1: fro subtraction of 2*2 matrix.";
		cout << "\nEnter 2: fro subtraction of 3*3 matrix.";
		cout <<endl;
		cin >> su;
		cout <<endl;
		cout <<endl;
		
		switch (su){
					case 1:
						
						cout << "---------------> Enter your 1st matrix <---------------"<<endl;
						
						for(int i=1;i<3;i++)
						{
							for(int j=1;j<3;j++)
							{
								cout<<"Enter No is ["<<i<<"]["<<j<<"]:";
								cin>>a[i][j];
							}
						}
						cout<<endl;
						cout<<endl;
						cout << "Your 1st matrix is:" << "|" <<a[1][1] <<"   "<< a[1][2]<< "|";
						cout <<  "\n\t\t   |" <<a[2][1] <<"   "<< a[2][2]<< "|" << endl<<endl<<endl;
						
						cout << endl;
						cout << endl;
						
						cout << " ------------>Enter your 2nd marix <-----------"<<endl<<endl;
						
						for(int i=1;i<3;i++)
						{
							for(int j=1;j<3;j++)
							{
								cout<<"Enter No is ["<<i<<"]["<<j<<"]:";
								cin>>b[i][j];
							}
						}
						cout<<endl;
						cout<<endl;
							cout << "Your 2nd matrix is:" << "|" <<b[1][1] <<"   "<< b[1][2]<< "|";
						cout <<  "\n\t\t   |" <<b[2][1] <<"   "<< b[2][2]<< "|" << endl<<endl<<endl;
						
						cout << "subtraction of 2 matrix is:";
						cout <<"|"<< a[1][1]-b[1][1]<< "   " << a[1][2]-b[1][2] << "|"<< endl;
						cout <<"\t\t\t   |"<< a[2][1]-b[2][1]<< "   " << a[2][2]-b[2][2] << "|";
						break;
						
						case 2:
						
						cout << "--------------->Enter Your 1st matrix<---------------"<<endl<<endl;
						for(int i=1;i<4;i++)
						{
							for(int j=1;j<4;j++)
							{
								cout<<"Enter No is ["<<i<<"]["<<j<<"]:";
								cin>>a[i][j];
							}
						}
						cout<<endl;
						cout<<endl;
						cout << "Your 1st matrix is:" << "|" <<a[1][1] <<"   "<< a[1][2]<<"   "<< a[1][3]<<"|";
						cout <<  "\n\t\t   |" <<a[2][1] <<"   "<< a[2][2]<<"   "<< a[2][3] <<"|";
						cout <<  "\n\t\t   |" <<a[3][1] <<"   "<< a[3][2]<< "   "<< a[3][3] <<"|" << endl<<endl<<endl;
						
						cout << "---------------> Enter your 2nd matrix <---------------" << endl;
						
						for(int i=1;i<4;i++)
						{
							for(int j=1;j<4;j++)
							{
								cout<<"Enter No is ["<<i<<"]["<<j<<"]:";
								cin>>b[i][j];
							}
						}
						
						cout<<endl;
						cout<<endl;
						cout << "Your 2nd matrix is:" << "|" <<b[1][1] <<"   "<< b[1][2]<<"   "<< b[1][3]<<"|";
						cout <<  "\n\t\t   |" <<b[2][1] <<"   "<< b[2][2]<<"   "<< b[2][3] <<"|";
						cout <<  "\n\t\t   |" <<b[3][1] <<"   "<< b[3][2]<< "   "<< b[3][3] <<"|" << endl<<endl<<endl;
						
						c[1][1]=a[1][1]-b[1][1];
						c[1][2]=a[1][2]-b[1][2];
						c[1][3]=a[1][3]-b[1][3];
						c[2][1]=a[2][1]-b[2][1];
						c[2][2]=a[2][2]-b[2][2];
						c[2][3]=a[2][3]-b[2][3];
						c[3][1]=a[3][1]-b[3][1];
						c[3][2]=a[3][2]-b[3][2];
						c[3][3]=a[3][3]-b[3][3];
						
						cout << "subtraction of 2 matrix is:";
						cout <<"|"<< c[1][1] << "   " << c[1][2] << "   " << c[1][3]<< "|"<< endl;
						cout <<"\t\t\t   |"<< c[2][1]<< "   " << c[2][2] << "   " << c[2][3] <<"|"<< endl;
						cout <<"\t\t\t   |"<< c[3][1] << "   " << c[3][2] << "   " << c[3][3] << "|" << endl;
						
						break;
						
						default:
		
						cout<<"Invalid Choice :\n";
						goto sub;
						break;
						
					
			}
		}
	
		void mul(){
			
			int r2,r1,c2,c1,mul[10][10];
			
			m:
				
				cout << "Enter rows and columns for first matrix: ";
			    
				cin >> r1 >> c1;
			    
				cout << "Enter rows and columns for second matrix: ";
			    
				cin >> r2 >> c2;
			
			    while (c1!=r2)
			    {
			        cout << "Error! column of first matrix not equal to row of second.";
			
			        cout << "Enter rows and columns for first matrix: ";
			        cin >> r1 >> c1;
			
			        cout << "Enter rows and columns for second matrix: ";
			        cin >> r2 >> c2;
			    }
			
			    cout << endl << "----------> Enter your 1st matrix <----------" << endl;
			    for(i = 1; i <= r1; ++i)
			        for(j = 1; j <= c1; ++j)
			        {
			            cout << "Enter number is ["<< i <<"]["<< j <<"]:";
			            cin >> a[i][j];
			        }
			
			    cout << endl << "----------> Enter your 2nd matrix <----------:" << endl;
			    for(i = 1; i <= r2; ++i)
			        for(j = 1; j <= c2; ++j)
			        {
			            cout << "Enter number is ["<< i <<"]["<< j <<"]:";
			            cin >> b[i][j];
			        }
			
			    for(i = 1; i <= r1; ++i)
			        for(j = 1; j <= c2; ++j)
			        {
			            mul[i][j]=0;
			        }

			    for(i = 1; i <= r1; ++i)
			        for(j = 1; j <= c2; ++j)
			            for(int k = 1; k <= c1; ++k)
			            {
			                mul[i][j] += a[i][k] * b[k][j];
			            }

			    cout << endl << "Output Matrix: " << endl;
			    for(i = 1; i <= r1; ++i)
			    for(j = 1; j <= c2; ++j)
			    {
			        cout << " " << mul[i][j];
			        if(j == c2)
			            cout << endl;
    }
		}
		void trans(){
			tra:
			
			int tr;
			
			cout << "---------------> Enter matrix for transpos <---------------" << endl << endl;
			
			cout << " Which type of matrix would you want to transpos:"<< endl << endl;
			cout << "Enter 1: fro transpos 2*2 matrix" << endl;
			cout << "Enter 2: for transpos 3*3 matrix" << endl;
			cout << "Enter 3: for transpos 2*3 matrix" << endl;
			cout << "Enter 4: for transpos 3*2 matrix" << endl;
			cin >> tr;
			
			switch(tr){
				
				case 1:
					for(int i=1;i<3;i++)
						{
							for(int j=1;j<3;j++)
							{
								cout<<"Enter No is ["<<i<<"]["<<j<<"]:";
								cin>>a[i][j];
							}
						}
						cout<<endl;
						cout<<endl;
						cout << "Your matrix is: " << "|" <<a[1][1] <<"   "<< a[1][2]<< "|";
						cout <<  "\n\t\t|" <<a[2][1] <<"   "<< a[2][2]<< "|" << endl<<endl<<endl;
						cout << endl << endl;
						cout << "Your transpos of matrix is:" << "|" <<a[1][1] <<"   "<< a[2][1]<< "|";
						cout <<  "\n\t\t\t   |" <<a[1][2] <<"   "<< a[2][2]<< "|" << endl<<endl<<endl;
					break;
					
				case 2:
					for(int i=1;i<4;i++)
						{
							for(int j=1;j<4;j++)
							{
								cout<<"Enter No is ["<<i<<"]["<<j<<"]:";
								cin>>b[i][j];
							}
						}
						
						cout<<endl;
						cout<<endl;
						cout << "Your matrix is: " << "|" <<b[1][1] <<"   "<< b[1][2]<<"   "<< b[1][3]<<"|";
						cout <<  "\n\t\t|" <<b[2][1] <<"   "<< b[2][2]<<"   "<< b[2][3] <<"|";
						cout <<  "\n\t\t|" <<b[3][1] <<"   "<< b[3][2]<< "   "<< b[3][3] <<"|" << endl<<endl<<endl;
						
						cout << "transpos of matrix is:  " << "|" <<b[1][1] <<"   "<< b[2][1]<<"   "<< b[3][1]<<"|";
						cout <<  "\n\t\t\t|" <<b[1][2] <<"   "<< b[2][2]<<"   "<< b[3][2] <<"|";
						cout <<  "\n\t\t\t|" <<b[1][3] <<"   "<< b[2][3]<< "   "<< b[3][3] <<"|" << endl<<endl<<endl;
				break;
				
				case 3:
					
					for(int i=1;i<3;i++)
						{
							for(int j=1;j<4;j++)
							{
								cout<<"Enter No is ["<<i<<"]["<<j<<"]:";
								cin>>a[i][j];
							}
						}
						
						cout << endl << endl;
						
						cout << "Your matrix is: " << "|" <<a[1][1] <<"   "<< a[1][2]<<"   " << a[1][3] << "|";
						cout <<  "\n\t\t|" <<a[2][1] <<"   "<< a[2][2]<<"   "<< a[2][3] << "|" << endl<<endl<<endl;
						
						cout << "transpos of matrix is:" << "|" <<a[1][1] <<"   "<< a[2][1]<< "|";
						cout <<  "\n\t\t      |" <<a[1][2] <<"   "<< a[2][2] << "|";
						cout <<  "\n\t\t      |" <<a[1][3] <<"   "<< a[2][3] << "|";
				
				break;
						
				case 4:
					
					for(int i=1;i<4;i++)
						{
							for(int j=1;j<3;j++)
							{
								cout<<"Enter No is ["<<i<<"]["<<j<<"]:";
								cin>>a[i][j];
							}
						}
						
						cout << "your matrix is: " << "|" <<a[1][1] <<"   "<< a[1][2]<< "|";
						cout <<  "\n\t\t|" <<a[2][1] <<"   "<< a[2][2] << "|";
						cout <<  "\n\t\t|" <<a[3][1] <<"   "<< a[3][2] << "|"<<endl<<endl;
						
						cout << "transpos of matrix is:" << "|" <<a[1][1] <<"   "<< a[2][1]<< "   " << a[3][1]<< "|";
						cout <<  "\n\t\t      |" <<a[1][2] <<"   "<< a[2][2] << "   "<< a[3][2] <<"|";
						
				break;
				
				default:
					cout<<"Invalid Choice :\n";
					goto tra;
					break;
			}
		}
		
		void adj(){
			adj1:
				
			int adjj,A1,A2,A3,A4,A5,A6,A7,A8,A9;
			
			cout << "Enter 1: For get ADJ of an 2 x 2 matrix." << endl;
			cout << "Enter 2: For get ADJ of an 3 x 3 matrix." << endl;
			cin >> adjj;
			
			switch(adjj){
				
				case 1:
					
					cout << "Enter your 2x2 matrix:";
					
					for(i=1;i<=2;i++){
						
						for(j=1;j<=2;j++){
							cout<<"Enter No is ["<<i<<"]["<<j<<"]:";
								cin>>a[i][j];
							cout<<endl<<endl;
						}
					}
					
					cout << "Your matrix is: " << "|" <<a[1][1] <<"   "<< a[1][2]<< "|";
					cout <<  "\n\t\t|" <<a[2][1] <<"   "<< a[2][2]<< "|" << endl<<endl<<endl;
					
					cout<< "adjoint of matrix:"<< "|" <<a[2][2] <<"   "<< 0-a[1][2]<< "|";
					cout <<  "\n\t\t  |" <<0-a[2][1] <<"   "<< a[1][1]<< "|" << endl<<endl<<endl;
				break;
				
				case 2:
				
					cout << "Enter your 3x3 matrix:";
					
					for(i=1;i<=3;i++){
						
						for(j=1;j<=3;j++){
							cout<<"Enter No is ["<<i<<"]["<<j<<"]:";
								cin>>a[i][j];
							cout<<endl<<endl;
						}
					}
					
					cout << "Your matrix is: " << "|" <<a[1][1] <<"   "<< a[1][2]<< "   " << a[1][3]<<"|";
					cout <<  "\n\t\t|" <<a[2][1] << "   " << a[2][2] << "   " << a[2][3] << "|" ;
					cout <<  "\n\t\t|" <<a[3][1] << "   " << a[3][2] << "   " << a[3][3] << "|"<< endl<<endl<<endl;
					
					A1=(a[2][2]*a[3][3])-(a[2][3]*a[3][2]);
					A2=(a[2][1]*a[3][3])-(a[2][3]*a[3][1]);
					A3=(a[2][1]*a[3][2])-(a[2][2]*a[3][1]);
					A4=(a[1][2]*a[3][3])-(a[1][3]*a[3][2]);
					A5=(a[1][1]*a[3][3])-(a[1][3]*a[3][1]);
					A6=(a[1][1]*a[3][2])-(a[1][2]*a[3][1]);
					A7=(a[1][2]*a[2][3])-(a[1][3]*a[2][2]);
					A8=(a[1][1]*a[2][3])-(a[1][3]*a[2][1]);
					A9=(a[1][1]*a[2][2])-(a[1][2]*a[2][1]);
					
					cout << "Adj of matrix:  |"<<A1<<"   "<< A2 << "   "<< A3 << "|" ;
					cout << "\n\t        |"<<A4<<"   "<< A5 << "   "<< A6 << "|";
					cout << "\n\t        |"<<A7<<"   "<< A8 << "   "<< A9 << "|" <<endl;
				break;
					
					default:
						cout<<"Invalid Choice :\n";
					goto adj1;
					break;
			}
		}
		
		void inv(){
			in:
				
			float a1,a2,a3,a4,a5,a6,a7,a8,a9;
			int inv,mod_A;
			
			cout << "Enter 1: For get inverse of an 2 x 2 matrix." << endl;
			cout << "Enter 2: For get inverse of an 3 x 3 matrix." << endl;
			cin >> inv;
			
			switch (inv){
				case 1:
					inv2:
					
					cout << "Enter your 2x2 matrix:";
					
					for(i=1;i<=2;i++){
						
						for(j=1;j<=2;j++){
							cout<<"Enter No is ["<<i<<"]["<<j<<"]:";
								cin>>a[i][j];
							cout<<endl<<endl;
						}
					}
					
					cout << "Your matrix is: " << "|" <<a[1][1] <<"   "<< a[1][2]<< "|";
					cout <<                 "\n\t\t|" <<a[2][1] <<"   "<< a[2][2]<< "|" << endl<<endl<<endl;
					
					mod_A=(a[1][1]*a[2][2]-a[1][2]*a[2][1]);
					
					if(mod_A==0){
						cout << "----------> Inverse not possible <----------"<<endl<<endl;
						goto inv2;
					}
					else{
						a1=a[2][2];
						a2=0-a[1][2];
						a3=0-a[2][1];
						a4=a[1][1];
						
						cout <<"Inverse of matrix:" << a1/mod_A <<"   "<< a2/mod_A <<endl;
						cout << "\t\t  " <<a3/mod_A<< "   " << a4/mod_A <<endl;
					}
					
					
				break;
					
				case 2:
					inv3:
					
					cout << "Enter your 3x3 matrix:";
					
					for(i=1;i<=3;i++){
						
						for(j=1;j<=3;j++){
							cout<<"Enter No is ["<<i<<"]["<<j<<"]:";
								cin>>a[i][j];
							cout<<endl<<endl;
						}
					}
					
					cout << "Your matrix is: " << "|" <<a[1][1] <<"   "<< a[1][2]<< "   " << a[1][3]<<"|";
					cout <<  "\n\t\t|" <<a[2][1] << "   " << a[2][2] << "   " << a[2][3] << "|" ;
					cout <<  "\n\t\t|" <<a[3][1] << "   " << a[3][2] << "   " << a[3][3] << "|"<< endl<<endl<<endl;
					
					mod_A=a[1][1]*((a[2][2]*a[3][3])-(a[2][3]*a[3][2]))-a[1][2]*((a[2][1]*a[3][3])-(a[2][3]*a[3][1]))+a[1][3]*((a[2][1]*a[3][2])-(a[2][2]*a[3][1]));
					
					if(mod_A==0){
						cout << "----------> Inverse not possible <----------"<<endl<<endl;
						goto inv3;
					}
					else{
					a1=(a[2][2]*a[3][3])-(a[2][3]*a[3][2]);
					a2=(a[2][1]*a[3][3])-(a[2][3]*a[3][1]);
					a3=(a[2][1]*a[3][2])-(a[2][2]*a[3][1]);
					a4=(a[1][2]*a[3][3])-(a[1][3]*a[3][2]);
					a5=(a[1][1]*a[3][3])-(a[1][3]*a[3][1]);
					a6=(a[1][1]*a[3][2])-(a[1][2]*a[3][1]);
					a7=(a[1][2]*a[2][3])-(a[1][3]*a[2][2]);
					a8=(a[1][1]*a[2][3])-(a[1][3]*a[2][1]);
					a9=(a[1][1]*a[2][2])-(a[1][2]*a[2][1]);
					
					cout <<"Inverse of matrix:" << a1/mod_A <<"   "<< a2/mod_A << "   " << a3/mod_A <<endl;
					cout << "\t\t  " <<a4/mod_A<< "   " << a5/mod_A << "   " << a6/mod_A <<endl;
					cout << "\t\t  " <<a7/mod_A << "   " << a8/mod_A << "   " << a9/mod_A <<endl;
					
					}
					
					break;
			}
		}
	
};

class matrix_2:public matrix{
	
};

int main(){
	
	matrix_2 m;	
}
