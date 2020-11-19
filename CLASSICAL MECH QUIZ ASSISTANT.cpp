#include<iostream>
#include<cmath>
#include<windows.h>
#include<cstdlib>
#include<iomanip>
using namespace std;

const int c = 3.00*pow(10,8);
const long double p_m = 0.000000000000000000000000001672623, n_m = 0.000000000000000000000000001674929;
const long double e_m = 0.0000000000000000000000000000009109390, e_c = 0.0000000000000000001602, p_c = 0.000000000000000000160217;
	int alt, task, res, ans;
	double v, L, L1, beta, gamma, len_contr, beta_value, contr_value, prop_value, ratio, velocity, T, t, Beta, doppler_shift, E;
	long double time_dila, prop_time, beta_prop, beta_dil, f_vel, s_vel, nume, denom, gamma_value, rest_mass, v_in_c, u, x;

void length_contr();
void proper_length();
void proper_time();
void time_dilation();
void velocity_addition();
void relativistic_momentum();
void relative_doppler();
void relativistic_energy();
void momentum_menu();
void menu();
void loadNav();


int main(){
	
	system("color e0");
	cout<<"\t\t\t\tTHIS PROGRAM WAS WRITTEN TO HELP SOLVE QUESTIONS ON THE CLASSICAL MECHANICS QUIZ"<<endl;
	cout<<"\n\nHello User, I am your Personal Assistant. I'm assigned to help you answer qustions on your quiz." 
			"\nPlease comply with every directive from the program in order to prevent it from crashing."
			"\nTiming is important and the program getting crashed is the last thing we want to see."<<endl;
			
			cout<<"\n\t\t\t\t\t\tINSTRUCTIONS!!!!!!!!!!"<<endl;
			cout<<"\tPlease use the numbers for the entries."
					"\n\tYou are not supposed to enter alphabets or characters such as '! @ # $ % ^ & * () - = +' until you are asked to do so."
					"\n\tAll answers containing e+00 or e-00 simply means 10 raised to the power of the number." 
					"\n\tFor instance, 4.023e+003 means 4.023 * 10^3. Also, 4.023e-003 means 4.023 * 10^-3."<<endl;
					
					
				start:
			cout<<"\n\nChoose a task to do."<<endl;
			cout<<"\n\n\t1. Length contraction"<<endl;
			cout<<"\t2. Time dilation"<<endl;
			cout<<"\t3. Velocity addidtion"<<endl;
			cout<<"\t4. Relativistic momentum"<<endl;
			cout<<"\t5. Relativistic Energy"<<endl;
			cout<<"\t6. Relativistic Doppler Effect"<<endl;
			cout<<"\t7. Finding Beta and corresponding velocity when Gamma has been given"<<endl;
			cout<<"\t8. Exit program"<<endl;
			
			cin>>task;
			if (task == 1){
				cout<<"LENGTH CONTRACTION SECTION"<<endl;
				length_contr();
				goto start;
			}
			
			else if (task == 2){
				cout<<"TIME DILATION SECTION"<<endl;
				time_dilation();
				goto start;
				
			}
			else if (task == 3){
				cout<<"VELOCITY ADDITION SECTION"<<endl;
				velocity_addition();
				goto start;
				
			}
			else if (task == 4){
				cout<<"RELATIVISTIC MOMENTUM SECTION"<<endl;
				relativistic_momentum();
				goto start;
				
			}
			else if (task == 5){
				cout<<"RELATIVISTIC ENERGY SECTION"<<endl;
				relativistic_energy();
				goto start;
				
			}
			else if (task == 6){
				cout<<"RELATIVISTIC DOPPLER EFFECT SECTION"<<endl;
				relative_doppler();
				goto start;
				
			}
			else if (task == 7){
				cout<<"Enter the value of Gamma"<<endl;
				cin>>gamma_value;
				ratio = 1/gamma_value;
				beta = sqrt(1 - pow(ratio, 2));
				cout<<setprecision(4);cout<<"The value of Beta for given Gamma is "<<beta<<endl;
				cout<<setprecision(9);cout<<"The corresponding velocity is "<<beta*c<<" m/s"<<endl;
				goto start;
			}
			else if (task == 8){
				cout<<"You chose to terminate the program"<<endl;
			Sleep(745);
			cout<<"Closing program";
			loadNav();
			exit(0);
			}
			
			else {
				cout<<"\n Please Enter a valid response"<<endl;
				do {
					goto start;
			}
			while (alt = 1);
			{
				
			}
			
			
}
		
		system("pause");	
	return 0;
}

			/////////FUNCTIONS FOR THE CALCULATION
			
///////////////////////////////// LENGTH CONTRACTION SECTION
	///////// PROPER LENGTH
void proper_length(){
	start:
	cout<<"Have beta been given in the question?\n\t 1. Yes\n \t 2. No at all\n \t 3. No but gamma has been given"<<endl;
	cin>>res;
	if (res == 1){
		cout<<"\nWhat is the Value of beta?"<<endl;
		cin>>beta_value;
		gamma = 1/sqrt(1-pow(beta_value, 2));
		cout<<"Enter contracted length 'L1' of the moving body"<<endl;
		cin>>L;
	len_contr = L/gamma;
	cout<<"Proper Length = "<<len_contr<<endl;
	}
	else if (res == 2){
	
	cout<<"Enter 'v' of the moving body in terms of c. Use the formula v/c to convert it to terms of c."<<endl;
	cin>>v;
	cout<<"Enter contracted length 'L1' of the moving body"<<endl;
	cin>>L;
	beta = v;
	gamma = 1/sqrt(1-pow(beta, 2));
	len_contr = L/gamma;
	cout<<setprecision(4);cout<<"Beta = "<<beta<<endl;
	cout<<"Proper Length = "<<len_contr<<endl;
	
}
	
	else {
		cout<<"\nInvalid entry. Please try again."<<endl;
		goto start;
	}


}


void length_contr(){
	cout<<"\tWhat are you finding?"<<endl;
	cout<<"\n\t1. Length contraction as seen by stationary body"<<endl;
	cout<<"\t2. Velocity of moving body"<<endl;
	cout<<"\t3. Proper Length of moving body"<<endl;
	cout<<"\t4. Value of Beta in relation to relativistic length"<<endl;
	cout<<"\t5. Go to Menu"<<endl;
	cin>>ans;
	///////////////FINDING CONTRACTED LENGTH
		if (ans == 1){
	start:
	cout<<"Have beta been given in the question?\n\t 1. Yes\n \t 2. No\n \t 3. Go to Menu"<<endl;
	cin>>res;
	if (res == 1){
		cout<<"\nWhat is the Value of beta?"<<endl;
		cin>>beta_value;
		gamma = 1/sqrt(1-pow(beta_value, 2));
		cout<<"Enter proper length 'L' of the moving body"<<endl;
		cin>>L;
	len_contr = L/gamma;
	cout<<"Length contraction = "<<len_contr<<" m"<<endl;
	}
	else if (res == 2){
	
	cout<<"Enter 'v' of the moving body in terms of c. Use the formula v/c to convert it to terms of c."<<endl;
	cin>>v;
	cout<<"Enter proper length 'L' of the moving body"<<endl;
	cin>>L;
	beta = v;
	gamma = 1/sqrt(1-pow(beta, 2));
	len_contr = L/gamma;
	cout<<setprecision(4);cout<<"Beta = "<<beta<<endl;
	cout<<"Length contraction = "<<len_contr<<" m"<<endl;
	
}
	else if (res == 3){
		menu();
	}
	
	else {
		cout<<"\nInvalid entry. Please try again."<<endl;
		goto start;
	}

}
// FINDING VELOCITY OF MOVING BODY WHOSE LENGTH HAS CONTRACTED
	else if (ans == 2){
		cout<<"Enter the value of contracted length"<<endl;
		cin>>contr_value;
		cout<<"Enter the value of proper length"<<endl;
		cin>>prop_value;
		ratio = contr_value/prop_value;
		velocity = sqrt(1-pow(ratio, 2)) * c;
		cout<<setprecision(9);cout<<"Velocity of moving body = "<<velocity<<" m/s or ";
		cout<<setprecision(5);cout<<velocity/c<<"c"<<endl;
		
	}
	
	else if (ans == 3){
	proper_length();

	}
	
	else if (ans == 4){
		cout<<"Enter the value for contracted length"<<endl;
		cin>>contr_value;
		cout<<"Enter the value for proper length"<<endl;
		cin>>prop_value;
		ratio = contr_value/prop_value;
		beta = sqrt(1- pow(ratio, 2));
		cout<<"The value for beta is "<<beta<<endl;
	}
	
	else if (ans == 5){
		menu();
	}
	
	
	else {
		cout<<"\nI'm a bit confused. Please try again"<<endl;
		Sleep(345);
		menu();
	}
}//end of length


//////////////////////////////////////TIME DILATION SECTION
	
//FINDING PROPER TIME 
void proper_time(){
	start:
	cout<<"Have beta been given in the question?\n\t 1. Yes\n \t 2. No\n \t 3. Go to Menu"<<endl;
	cin>>res;
	if (res == 1){
		cout<<"\nWhat is the Value of beta?"<<endl;
		cin>>beta_value;
		gamma = 1/sqrt(1-pow(beta_value, 2));
		cout<<"Enter Dilated Time 'L1' of the moving body"<<endl;
		cin>>T;
	prop_time = T/gamma;
	cout<<"Proper Time is "<<prop_time<<endl;
	}
	else if (res == 2){
	
	cout<<"Enter 'v' of the moving body in terms of c. Use the formula v/c to convert it to terms of c."<<endl;
	cin>>v;
	cout<<"Enter Dilated Time 'T1' of the moving body"<<endl;
	cin>>T;
	beta = v;
	gamma = 1/sqrt(1-pow(beta, 2));
	prop_time = T/gamma;
	cout<<setprecision(4);cout<<"Beta = "<<beta<<endl;
	cout<<"Proper Time is "<<prop_time<<endl;
	
}
	else if (res == 3){
		menu();
	}
	
	else {
		cout<<"\nInvalid entry. Please try again."<<endl;
		goto start;
	}
	
	
}

// FINDING TIME DILATION OF MOVING BODY
void time_dilation(){
	cout<<"\tWhat are you finding?"<<endl;
	cout<<"\n\t1. Time Dilation as seen by stationary body"<<endl;
	cout<<"\t2. Velocity of moving body whose time has dilated."<<endl;
	cout<<"\t3. Proper time measured by moving body"<<endl;
	cout<<"\t4. Value for Beta only with relation to time dilation"<<endl;
	cout<<"\t5. Go to Menu"<<endl;
	cin>>ans;
	
		if (ans == 1){
	start:
	cout<<"\tHave beta been given in the question?\n\t 1. Yes\n \t 2. No\n \t 3. Go to Menu"<<endl;
	cin>>res;
	if (res == 1){
		cout<<"\n\tWhat is the Value of beta?"<<endl;
		cin>>beta_value;
		gamma = 1/sqrt(1-pow(beta_value, 2));
		cout<<"\tEnter proper Time 't' of the moving body"<<endl;
		cin>>t;
	time_dila = t*gamma;
	cout<<setprecision(9);
	cout<<"Time dilation = "<<time_dila<<endl;
	}
	else if (res == 2){
	
	cout<<"\tEnter 'v' of the moving body in terms of c. Use the formula v/c to convert it to terms of c."<<endl;
	cin>>v;
	cout<<"\tEnter proper Time 't' of the moving body"<<endl;
	cin>>t;
	beta = v;
	gamma = 1/sqrt(1-pow(beta, 2));
	time_dila = t*gamma;
	cout<<setprecision(4);cout<<"Beta = "<<beta<<endl;
	cout<<setprecision(10);cout<<"Time Dilation = "<<time_dila<<endl;
	
}
	else if (res == 3){
		menu();
	}
	
	
	else {
		cout<<"\nInvalid entry. Please try again."<<endl;
		goto start;
	}

}
// FINDING VELOCITY OF MOVING BODY WHOSE TIME HAS DILATED
	else if (ans == 2){
		cout<<"\tEnter the value of proper time"<<endl;
		cin>>contr_value;
		cout<<"\tEnter the value of dilated time"<<endl;
		cin>>prop_value;
		ratio = contr_value/prop_value;
		velocity = sqrt(1-pow(ratio, 2)) * c;
		cout<<setprecision(9);cout<<"Velocity of moving body = "<<velocity<<" m/s or ";
		cout<<setprecision(5);cout<<velocity/c<<"c"<<endl;
		
	}
	
	
	else if (ans == 3){
		proper_time();
	}
	
	else if (ans == 4){
		cout<<"\tEnter the value for proper time"<<endl;
		cin>>beta_prop;
		cout<<"\tEnter the value for dilated time"<<endl;
		cin>>beta_dil;
		ratio = beta_prop/beta_dil;
		beta = sqrt(1- pow(ratio, 2));
		cout<<"The value for beta is "<<beta<<endl;
		
	}
	
	else if (ans == 5){
		menu();
	}
	
	
	else {
		cout<<"\nI'm a bit confused. Please try again"<<endl;
		Sleep(345);
		menu();
	
}
}

/////////////////////////////////////////////VELOCITY ADDITION SECTION
/////FINDING THE RESULTANT VELOCITY OF MOVING BODIES

void velocity_addition(){
	start:
		cout<<"\tWhat are you finding?"<<endl;
		cout<<"\n\t1. Relative velocities of two moving bodies"<<endl;
		cout<<"\n\t2. Go to menu"<<endl;
		cin>>ans;
		
		if (ans == 1){
			cout<<"\tEnter velocity of first moving body"<<endl;
			cin>>f_vel;
			cout<<"\tEnter velocity of second moving body"<<endl;
			cin>>s_vel;
			nume = f_vel + s_vel;
			denom = 1 + (f_vel*s_vel);
			ratio = nume / denom;
			//cout<<"Relative velocity of the moving bodies with respect to each other is "<<ratio*c<<"m/s"<<" or "<<ratio<<c<<endl;
			cout<<setprecision(9);cout<<"Relative velocity of the moving bodies with respect to each other is "<<ratio*c<<" m/s or ";
		cout<<setprecision(3);cout<<ratio<<"c"<<endl;
		}
		
		else if(ans == 2){
			menu();
		}
		
		else {
			cout<<"I'm confused. Please try again"<<endl;
			goto start;
		}
		
		
}


///////////////////////////////////////RELATIVISTIC MOMENTUM SECTION

/////////FINDING RELATIVISTIC MOMENTUM
void relativistic_momentum(){
	int v_ans;
	double momentum;
		cout<<"\tWhat are you finding?"<<endl;
		cout<<"\n\t1. Value for Relativistic Momentum"<<endl;
		cout<<"\t2. Momentum of an electron"<<endl;
		cout<<"\t3. Momentum of a proton"<<endl;
		cout<<"\t4. Velocity of an electron with a given momentum"<<endl;
		cout<<"\t5. Velocity of a proton with a given momentum"<<endl;
		cout<<"\t6. Go to Menu"<<endl;
		cin>>ans;
		start:
		switch (ans){
			
			case 1:	//Value for relativistic momentum
		//start:
		cout<<"\tYou are finding relativistic momentum."<<endl;
		cout<<"\tHas Gamma(relativistic factor) been given?\n\t 1. Yes\n \t 2. No\n \t 3. Go Back"<<endl;
		cin>>res;
		
		
			switch (res)
			{
				
				case 1:	//Gamma has been given
					cout<<"\tChoose one. \n\t 1. Particle's velocity(u) is in terms of c."<<endl;
					cout<<"\t 2. Particle's velocity(u) is NOT in terms of c."<<endl;
					cout<<"\t 3. Go back"<<endl;
					cin>>v_ans;
				
				if (v_ans == 1){
					try{
						throw (v_ans);
					}
					catch(...){
					cout<<"\tEnter the particle's velocity(u) value in terms of c"<<endl;
					cin>>v_in_c;
					u = v_in_c * c;
					cout<<"\tEnter the value for rest mass"<<endl;
					cin>>rest_mass;
					cout<<"\tEnter the value for Gamma"<<endl;
					cin>>gamma_value;
					momentum = gamma_value * rest_mass * u;
					cout<<setprecision(6);
					cout<<"The value for momentum is "<<momentum<<endl;
					
					
				}
				
		}		
				else if(v_ans == 2){
					cout<<"\tEnter the value for rest mass"<<endl;
					cin>>rest_mass;
					cout<<"\tEnter the value for Gamma"<<endl;
					cin>>gamma_value;
					cout<<"\tEnter the particle's velocity(u) value."<<endl;
					cin>>u;
					momentum = gamma_value * rest_mass * u;
					cout<<setprecision(20);
					cout<<"The value for momentum is "<<momentum<<endl;
				}
				
				else if (v_ans == 3){
					goto start;	
				}
				
				else {
					cout<<"Please Enter a valid input"<<endl;
					goto start;
				}
				
				break;
				
				case 2:	//Gamma has not been given
					cout<<"\tOkay, Has Beta been given?\n\t 1. Yes\n \t 2. No"<<endl;
					cin>>ans;
					if (ans == 1){
						cout<<"\tEnter the value for Beta"<<endl;
						cin>>beta_value;
						denom = sqrt(1- pow(beta_value, 2));
						gamma_value = 1/denom;
						cout<<"\tChoose one. \n\t 1. Velocity in terms of c.\n \t 2. Velocity is NOT in terms of c."<<endl;
					cin>>v_ans;
					//throw (v_ans);
				
				if (v_ans == 1){
					try{
						throw (v_ans);
					}
					catch(...){
				//if (v_ans == 2){
					
				//	goto start;
				//}
				//else{
					cout<<"\tEnter the value in terms of c"<<endl;
					cin>>v_in_c;
					u = v_in_c * c;
					cout<<"\tEnter the value for rest mass"<<endl;
					cin>>rest_mass;
					momentum = gamma_value * rest_mass * u;
					cout<<setprecision(6);
					cout<<"The value for momentum is "<<momentum<<endl;
					break;
					
				}
					}
					
					else if(v_ans == 2){
					cout<<"\tEnter the value for rest mass"<<endl;
					cin>>rest_mass;
					cout<<"\tEnter the value for velocity"<<endl;
					cin>>u;
					momentum = gamma_value * rest_mass * u;
					cout<<setprecision(6);
					cout<<"The value for momentum is "<<momentum<<endl;
				}
				
				else {
					cout<<"Please Enter a valid input"<<endl;
					goto start;
				}
					
					
				}
			/////BETA HAS NOT BEEN GIVEN	
				else {
					cout<<"\a\tOkay, Beta has not been given. If the relative velocity(v) is in terms of c, Kindly enter the value."<<endl;
					cout<<"\tPlease, If the relative velocity(v) is NOT in terms of c, convert it by using the formula v/c on your calculator"<<endl;
					cin>>v_in_c;
					u = v_in_c * c;
					cout<<"\n\tEnter the value for rest mass"<<endl;
					cin>>rest_mass;
					gamma_value = 1/sqrt(1-pow(v_in_c, 2));
					momentum = gamma_value * rest_mass * u;
					cout<<setprecision(6);
					cout<<"The value for momentum is "<<momentum<<endl;
					break;
					
				}
				
				case 3:
					momentum_menu();
				
				default:
				cout<<"Invalid entry. Please try again"<<endl;
				goto start;	
				

			}
			
			case 2:	//	Momentum of an electron
				cout<<"\tHas Gamma(relativistic factor) been given?\n\t 1. Yes\n \t 2. No\n \t 3. Go back"<<endl;
				cin>>res;
				if (res == 1){
					cout<<"\tChoose one. \n\t 1. Particle's velocity(u) is in terms of c.\n \t 2. Particle's velocity(u) is NOT in terms of c."<<endl;
					cin>>v_ans;
				
				if (v_ans == 1){
					try{
						throw (v_ans);
					}
					catch(...){
					cout<<"\tEnter the particle's velocity(u) value in terms of c"<<endl;
					cin>>v_in_c;
					u = v_in_c * c;
					cout<<"\tEnter the value for Gamma"<<endl;
					cin>>gamma_value;
					momentum = gamma_value * e_m * u;
					cout<<setprecision(6);
					cout<<"The value for momentum is "<<momentum<<endl;
					
					
				}
				
		}		
				else if(v_ans == 2){
					cout<<"\tEnter the value for Gamma"<<endl;
					cin>>gamma_value;
					cout<<"\tEnter the particle's velocity(u) value."<<endl;
					cin>>u;
					momentum = gamma_value * e_m * u;
					cout<<setprecision(20);
					cout<<"The value for momentum is "<<momentum<<endl;
				}
				else {
					cout<<"Please Enter a valid input"<<endl;
					goto start;
				}
					
				}
				
				else if (res == 2){
					
					cout<<"\tOkay, Has Beta been given?\n\t 1. Yes\n \t 2. No"<<endl;
					cin>>ans;
					if (ans == 1){
						cout<<"\tEnter the value for Beta"<<endl;
						cin>>beta_value;
						denom = sqrt(1- pow(beta_value, 2));
						gamma_value = 1/denom;
						cout<<"\tChoose one. \n\t 1. Velocity in terms of c.\n \t 2. Velocity is NOT in terms of c."<<endl;
					cin>>v_ans;
					//throw (v_ans);
				
				if (v_ans == 1){
					try{
						throw (v_ans);
					}
					catch(...){
				//if (v_ans == 2){
					
				//	goto start;
				//}
				//else{
					cout<<"\tEnter the value in terms of c"<<endl;
					cin>>v_in_c;
					u = v_in_c * c;
					momentum = gamma_value * e_m * u;
					cout<<setprecision(6);
					cout<<"The value for momentum is "<<momentum<<endl;
					break;
					
				}
					}
					
					else if(v_ans == 2){
					cout<<"\tEnter the value for velocity"<<endl;
					cin>>u;
					momentum = gamma_value * e_m * u;
					cout<<setprecision(6);
					cout<<"The value for momentum is "<<momentum<<endl;
				}
				
				else {
					cout<<"Please Enter a valid input"<<endl;
					exit(0);
				}
					
					
				}
			/////BETA HAS NOT BEEN GIVEN	
				else {
					cout<<"\a\tOkay, Beta has not been given. If the relative velocity(v) is in terms of c, Kindly enter the value."<<endl;
					cout<<"\tPlease, If the relative velocity(v) is NOT in terms of c, convert it by using the formula v/c on your calculator"<<endl;
					cin>>v_in_c;
					u = v_in_c * c;
					gamma_value = 1/sqrt(1-pow(v_in_c, 2));
					momentum = gamma_value * e_m * u;
					cout<<setprecision(6);
					cout<<"The value for momentum is "<<momentum<<endl;
				}
				
		}
		
		else if (res == 3){
			momentum_menu();
			goto start;
		}
		
		else {
			cout<<"Invalid Input. Please try again"<<endl;
			momentum_menu();
			goto start;
		}
		
		break;
		
		
			case 3:	//Momentum of a proton
				cout<<"\tHas Gamma(relativistic factor) been given?\n\t 1. Yes\n \t 2. No\n \t 3. Go Back"<<endl;
				cin>>res;
				if (res == 1){
					cout<<"\tChoose one. \n\t 1. Particle's velocity(u) is in terms of c.\n \t 2. Particle's velocity(u) is NOT in terms of c."<<endl;
					cin>>v_ans;
				
				if (v_ans == 1){
					try{
						throw (v_ans);
					}
					catch(...){
					cout<<"\tEnter the particle's velocity(u) value in terms of c"<<endl;
					cin>>v_in_c;
					u = v_in_c * c;
					cout<<"\tEnter the value for Gamma"<<endl;
					cin>>gamma_value;
					momentum = gamma_value * p_m * u;
					cout<<setprecision(6);
					cout<<"The value for momentum is "<<momentum<<endl;
					
					
				}
				
		}		
				else if(v_ans == 2){
					cout<<"\tEnter the value for Gamma"<<endl;
					cin>>gamma_value;
					cout<<"\tEnter the particle's velocity(u) value."<<endl;
					cin>>u;
					momentum = gamma_value * p_m * u;
					cout<<setprecision(20);
					cout<<"The value for momentum is "<<momentum<<endl;
				}
				else {
					cout<<"Please Enter a valid input"<<endl;
					momentum_menu();
					goto start;
				}
					
				}
				
				else if (res == 2){
					
					cout<<"\tOkay, Has Beta been given?\n\t 1. Yes\n \t 2. No"<<endl;
					cin>>ans;
					if (ans == 1){
						cout<<"\tEnter the value for Beta"<<endl;
						cin>>beta_value;
						denom = sqrt(1- pow(beta_value, 2));
						gamma_value = 1/denom;
						cout<<"\tChoose one. \n\t 1. Velocity in terms of c.\n \t 2. Velocity is NOT in terms of c."<<endl;
					cin>>v_ans;
					//throw (v_ans);
				
				if (v_ans == 1){
					try{
						throw (v_ans);
					}
					catch(...){
						
					cout<<"\tEnter the value in terms of c"<<endl;
					cin>>v_in_c;
					u = v_in_c * c;
					momentum = gamma_value * p_m * u;
					cout<<setprecision(6);
					cout<<"The value for momentum is "<<momentum<<endl;
					break;
					
				}
					}
					
					else if(v_ans == 2){
					cout<<"\tEnter the value for velocity"<<endl;
					cin>>u;
					momentum = gamma_value * p_m * u;
					cout<<setprecision(6);
					cout<<"The value for momentum is "<<momentum<<endl;
				}
				
				else {
					cout<<"Please Enter a valid input"<<endl;
					exit(0);
				}
					
					
				}
			/////BETA HAS NOT BEEN GIVEN	
				else {
					cout<<"\a\tOkay, Beta has not been given. If the relative velocity(v) is in terms of c, Kindly enter the value."<<endl;
					cout<<"\tPlease, If the relative velocity(v) is NOT in terms of c, convert it by using the formula v/c on your calculator"<<endl;
					cin>>v_in_c;
					u = v_in_c * c;
					gamma_value = 1/sqrt(1-pow(v_in_c, 2));
					momentum = gamma_value * p_m * u;
					cout<<setprecision(6);
					cout<<"The value for momentum is "<<momentum<<endl;
				}
				
		}
		
		else if (res == 3){
			momentum_menu();
		}
		
		else {
			cout<<"Invalid Input. Please try again"<<endl;
			momentum_menu();
		}
		
		break;
		
			case 4:	//Velocity of an electron with a given momentum
				cout<<"\t1. Enter the value of momentum for the electron"<<endl;
				cout<<"\t2. Go Back"<<endl;
				cin>>ans;
				
				if (ans == 1){
				cin>>momentum;
				E = sqrt((pow(momentum, 2) * pow(c, 2)) + (pow(e_m, 2) * pow(c, 4)));
				gamma = E/(e_m * pow(c, 2));
				v = sqrt((1-(1/pow(gamma, 2)))) * c;
				x = E/(pow(10, 6) * e_c);
				cout<<setprecision(9);
				cout<<"\aThe velocity of the electron is "<<v<<"m/s or ";
				cout<<setprecision(4);cout<<v/c<<"c"<<endl;
				cout<<"The Energy of the electron is "<<E<<" or "<<x<<"MeV"<<endl;
				}
				
				else {
					momentum_menu();
					goto start;
				}
				
			break;
			
			case 5:	//Velocity of a proton with a given momentum
				cout<<"\t1. Enter the value of momentum for the proton"<<endl;
				cout<<"\t2. Go Back"<<endl;
				cin>>ans;
				
				if ( ans == 1){
				cin>>momentum;
				E = sqrt((pow(momentum, 2) * pow(c, 2)) + (pow(p_m, 2) * pow(c, 4)));
				gamma = E/(p_m * pow(c, 2));
				v = sqrt((1-(1/pow(gamma, 2)))) * c;
				x = E/(pow(10, 6) * p_c);
				cout<<setprecision(9);
				cout<<"\aThe velocity of the proton is "<<v<<"m/s or ";
				cout<<setprecision(4);cout<<v/c<<"c"<<endl;
				cout<<"The Energy of the proton is "<<E<<" or "<<x<<"MeV"<<endl;
				}
				
				else {
					momentum_menu();
					goto start;
				}
			break;
			
			case 6:	//Go back to menu
				menu();
			
			default:
				cout<<"\tInvalid entry. Please try again"<<endl;
				Sleep(576);
				cout<<"\tGoing to Main menu";
				loadNav();
				menu();
				
}

}


////////////////////////////RELATIVISTIC DOPPLER EFFECT SECTION

////////FINDING RELATIVE DOPPLER EFFECT
void relative_doppler(){
	double factor, wavelen_source, wavelen_obs, wave_diff;
		cout<<"\tWhat are you finding?"<<endl;
		cout<<"\n\t1. Wavelength as measured by the observer due to relativistic doppler effect."<<endl;
		cout<<"\t2. Wavelength as measured by the source due to relativistic doppler effect."<<endl;
		cout<<"\t3. Doppler shift of the relativistic wavelength"<<endl;
		cout<<"\t4. Finding Beta when wavelengths for Doppler effect are given."<<endl;
		cin>>ans;
		
		switch(ans){
			case 1:
				cout<<"\tHas beta been given?\n\t 1. Yes\n \t 2. No"<<endl;
				cin>>res;
				if (res == 1){
					cout<<"\tEnter the value for Beta"<<endl;
					cin>>beta_value;
				start:
					cout<<"\tEnter value of wavelength measured by source"<<endl;
					cin>>wavelen_source;
					ratio = (1 + beta_value)/(1 - beta_value);
					factor = sqrt(ratio);
					wavelen_obs = factor * wavelen_source;
					cout<<"Wavelength measured by observer is "<<wavelen_obs<<" nm."<<endl;
					
					
				}
				else if (res == 2){
					cout<<"\tEnter the value of velocity"<<endl;
					cin>>v;
					beta_value = v;
					goto start;
				}
				
				else {
				cout<<"Sorry, please try again"<<endl;
				}
				
				break;
				
				
			case 2:
				cout<<"\tHas beta been given?\n\t 1. Yes\n \t 2. No"<<endl;
				cin>>res;
				if (res == 1){
					cout<<"\tEnter the value for Beta"<<endl;
					cin>>beta_value;
					cout<<"\tEnter value of wavelength measured by observer"<<endl;
					cin>>wavelen_obs;
					ratio = (1 + beta_value)/(1 - beta_value);
					factor = sqrt(ratio);
					wavelen_source = wavelen_obs/factor;
					cout<<"Wavelength measured by source is "<<wavelen_source<<" nm."<<endl;
					
					
				}
				else if (res == 2){
					cout<<"\tEnter the value of velocity. Please, If the relative velocity(v) is NOT in terms of c, convert it by using the formula v/c on your calculator"<<endl;
					cin>>v_in_c;
					beta_value = v_in_c;
					cout<<"\tEnter value of wavelength measured by observer"<<endl;
					cin>>wavelen_obs;
					ratio = (1 + beta_value)/(1 - beta_value);
					factor = sqrt(ratio);
					wavelen_source = wavelen_obs/factor;
					cout<<"Wavelength measured by source is "<<wavelen_source<<" nm."<<endl;
					
				}
				
				else {
				cout<<"Sorry, please try again"<<endl;
				}
				
				break;
				
				
				case 3:
					cout<<"\tWhat are you finding?"<<endl;
					cout<<"\n\t1. Doppler shift for given values of wavelength measured by observer and source"<<endl;
					cout<<"\t2. Doppler shift when there are no values for any wavelength"<<endl;
					cin>>res;
					
					if (res == 1){
						cout<<"\tEnter the value for wavelength measured by observer."<<endl;
						cin>>wavelen_obs;
						cout<<"\tEnter the value for wavelength measured by source."<<endl;
						cin>>wavelen_source;
						doppler_shift = wavelen_obs - wavelen_source;
						cout<<"\tDoppler shift is "<<doppler_shift<<"nm"<<endl;
					}
					
					else {
						cout<<"\tPlease use the values from the wavelength calculation option above."<<endl;
						cout<<"\tEnter the value for wavelength measured by observer."<<endl;
						cin>>wavelen_obs;
						cout<<"\tEnter the value for wavelength measured by source."<<endl;
						cin>>wavelen_source;
						doppler_shift = wavelen_obs - wavelen_source;
						cout<<"Doppler shift is "<<doppler_shift<<"nm"<<endl;
					}
					
				break;
				
				
				case 4:
					cout<<"\tEnter the value for wavelength measured by observer."<<endl;
					cin>>wavelen_obs;
					cout<<"\tEnter the value for wavelength measured by source."<<endl;
					cin>>wavelen_source;
					wave_diff = wavelen_obs - wavelen_source;
					nume = pow(wave_diff, 2) - 1;
					denom = 1 + pow(wave_diff, 2);
					beta_value = nume/denom;
					cout<<"Value for Beta for given wavelength is "<<beta_value<<endl;
					
					break;
					
					
					default:
						cout<<"Invalid input. Please try again"<<endl;
					
		}
	
	
}
				

///////////////////////////////////RELATIVISTIC ENERGY SECTION

/////////FINDING RELATIVISTIC ENERGY OF BODIES
void relativistic_energy(){
	double K_E, P_E, T_E;
			cout<<"What are you finding?"<<endl;
			cout<<"1. Kinetic Energy of the PROTON"<<endl;
			cout<<"2. Kinetic Energy of the ELECTRON"<<endl;
			cout<<"3. Rest or Potential Energy(E) of the PROTON"<<endl;
			cout<<"4. Rest or Potential Energy(E) of the ELECTRON"<<endl;
			cin>>ans;
			
			switch (ans){
				case 1:	//Kinetic Energy of the proton
					cout<<"Has Gamma being given?\n\t 1. Yes\n \t 2. No"<<endl;
					cin>>res;
					if (res == 1){
						cout<<"Enter the value of Gamma"<<endl;
						cin>>gamma;
					start:
						K_E = (gamma - 1)*p_m*pow(c, 2);
						cout<<K_E<<endl;
						x = K_E/(pow(10, 6) * e_c);
						cout<<setprecision(15);
						cout<<"The KINETIC ENERGY of the proton is "<<K_E<<"J"<<" or ";
						cout<<setprecision(4);cout<<x<<"MeV"<<endl;
					}
					else if(res == 2){
						cout<<"Enter the velocity 'v' in terms of c. Please use the formula v/c to convert it to terms of c"<<endl;
						cin>>v;
						gamma = 1/sqrt(1-pow(v, 2));
						K_E = (gamma - 1)*p_m*pow(c, 2);
						x = K_E/(pow(10, 6) * e_c);
						cout<<setprecision(15);
						cout<<"The KINETIC ENERGY of the proton is "<<K_E<<"J"<<" or ";
						cout<<setprecision(4);cout<<x<<"MeV"<<endl;
					}
					
					else {
						cout<<"Invalid Entry. Please try again"<<endl;
					}
					
					break;
					
				case 2:	//Kinetic energy of the electron
					cout<<"Has Gamma being given?\n\t 1. Yes\n \t 2. No"<<endl;
					cin>>res;
					if (res == 1){
						cout<<"Enter the value of Gamma"<<endl;
						cin>>gamma;
						K_E = (gamma - 1)*e_m*pow(c, 2);
						cout<<K_E<<endl;
						x = K_E/(pow(10, 6) * e_c);
						cout<<setprecision(15);
						cout<<"The KINETIC ENERGY of the proton is "<<K_E<<"J"<<" or "<<x<<"MeV"<<endl;
					}
					else if(res == 2){
						cout<<"Enter the velocity 'v' in terms of c. Please use the formula v/c to convert it to terms of c"<<endl;
						cin>>v;
						gamma = 1/sqrt(1-pow(v, 2));
						K_E = (gamma - 1)*e_m*pow(c, 2);
						x = K_E/(pow(10, 6) * e_c);
						cout<<setprecision(15);
						cout<<"The KINETIC ENERGY of the proton is "<<K_E<<"J"<<" or ";
						cout<<setprecision(4);cout<<x<<"MeV"<<endl;
					}
					
					else {
						cout<<"Invalid Entry. Please try again"<<endl;
					}
					
					break;
					
				case 3:	//Rest or potential energy of the proton
					P_E = p_m * pow(c, 2);
					x = P_E/(pow(10, 6) * e_c);
					cout<<setprecision(15);
					cout<<"The REST OR POTENTIAL ENERGY of the proton is "<<P_E<<"J"<<" or ";
					cout<<setprecision(4);cout<<x<<"MeV"<<endl;
					
					break;
					
				case 4:	//Rest or potential energy of the electron
					P_E = e_m * pow(c, 2);
					x = P_E/(pow(10, 6) * e_c);
					cout<<setprecision(15);
					cout<<"The REST OR POTENTIAL ENERGY of the proton is "<<P_E<<"J"<<" or ";
					cout<<setprecision(4);cout<<x<<"MeV"<<endl;
					
					break;
					
				//case 5:
				
				default:
					cout<<"Invalid entry. Please try again"<<endl;
			}
		
	
	
}


void menu(){
	start:
	cout<<"\n\nChoose a task to do."<<endl;
			cout<<"\n\n\t1. Length contraction"<<endl;
			cout<<"\t2. Time dilation"<<endl;
			cout<<"\t3. Velocity addidtion"<<endl;
			cout<<"\t4. Relativistic momentum"<<endl;
			cout<<"\t5. Relativistic Energy"<<endl;
			cout<<"\t6. Relativistic Doppler Effect"<<endl;
			cout<<"\t7. Finding Beta and corresponding velocity when Gamma has been given"<<endl;
			cout<<"\t8. Exit program"<<endl;
			
			cin>>task;
			if (task == 1){
				cout<<"LENGTH CONTRACTION SECTION"<<endl;
				length_contr();
				goto start;
			}
			
			else if (task == 2){
				cout<<"TIME DILATION SECTION"<<endl;
				time_dilation();
				goto start;
				
			}
			else if (task == 3){
				cout<<"VELOCITY ADDITION SECTION"<<endl;
				velocity_addition();
				goto start;
				
			}
			else if (task == 4){
				cout<<"RELATIVISTIC MOMENTUM SECTION"<<endl;
				relativistic_momentum();
				goto start;
				
			}
			else if (task == 5){
				cout<<"RELATIVISTIC ENERGY SECTION"<<endl;
				relativistic_energy();
				goto start;
				
			}
			else if (task == 6){
				cout<<"RELATIVISTIC DOPPLER EFFECT SECTION"<<endl;
				relative_doppler();
				goto start;
				
			}
			else if (task == 7){
				cout<<"Enter the value of Gamma"<<endl;
				cin>>gamma_value;
				ratio = 1/gamma_value;
				beta = sqrt(1 - pow(ratio, 2));
				cout<<setprecision(4);cout<<"The value of Beta for given Gamma is "<<beta<<endl;
				cout<<setprecision(9);cout<<"The corresponding velocity is "<<beta*c<<" m/s"<<endl;
				goto start;
			}
			else if (task == 8){
				cout<<"You chose to terminate the program"<<endl;
			Sleep(745);
			cout<<"Closing program";
			loadNav();
			exit(0);
			}
			
			else {
				cout<<"\n Please Enter a valid response"<<endl;
				do {
					goto start;
			}
			while (alt = 1);
			{
				
			}
			
			
}
}

void momentum_menu(){
	cout<<"\tWhat are you finding?"<<endl;
		cout<<"\n\t1. Value for Relativistic Momentum"<<endl;
		cout<<"\t2. Momentum of an electron"<<endl;
		cout<<"\t3. Momentum of a proton"<<endl;
		cout<<"\t4. Velocity of an electron with a given momentum"<<endl;
		cout<<"\t5. Velocity of a proton with a given momentum"<<endl;
		cout<<"\t6. Go to Menu"<<endl;
		cin>>ans;
}
	



//Load up function.
void loadNav(){
	for(int i=0; i<4; i++){
		cout<<".";
			Sleep(708);
	}
};

