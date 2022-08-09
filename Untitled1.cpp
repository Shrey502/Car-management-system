  #include<iostream>
using namespace std;
class info
{
	public:
	char n[20],add[50],no[11];
	void basic();	
};
void info::basic()
{
		cout<<"Enter your name :";
		cin>>n;
		cout<<"Enter your current address :";
		cin>>add;
		cout<<"Enter your mobile number :";
		cin>>no;
	}
	class car
		{
			public:
			char clr[20],model[20],brand[20];
			int plateno;
			float weight;
			void carinfo();
		};
		void car::carinfo()
		{
			cout<<"Enter your car model :";
			cin>>model;
			cout<<"which brand car do you have? :";
			cin>>brand;
			cout<<"colour of your car? :";
			cin>>clr;
			cout<<"Enter you car no :";
			cin>>plateno;
			cout<<"Enter your car weight (In KG) :";
			cin>>weight;
		}
				class que
				{
					public:
						char q[1000];
						int q2;
						void questions();
				};
				void que::questions()
				{
					cout<<"Why do you want to park this car? (reason for parking kar ) :";
					cin>>q;
					cout<<"Did you read all T&C?......If not..kindly read it! (select :1 for yes and 2 for no) ";
					cin>>q2;
					if(q2==1){
						cout<<"\nMINIMUM PARKING TIME IS 3 HOURS! ";
						cout<<"\nIF you want to park your car for minimum 3 hrs ,then you have to pay 4x charges than usual charges. ";
										cout<<"\nIF your Driving licence is expired then you have to pay some extra charges to park your car ";
											cout<<"\nADDITIONAL CHARGE IF LATE";
												cout<<"\nSAFE DRIVE : )";
					}
					else{
					}
				}
					class rate:public car
					{
						public:
							int hrs,days,months,t,d,totalcharge,grandtotal;
							void charges();
					};
					void rate::charges()
					{
						
						cout<<"\nEnter months,days and hrs(for parking car *respectively!) :";
						cin>>months>>days>>hrs;
						if(weight<=1000){
							grandtotal=months*3600+days*240+hrs*15;
						}
						else if(weight<=1500){
							grandtotal=months*5040+days*336+hrs*21;
						}
						else if(weight<=2000){
							grandtotal=months*6480+days*432+hrs*27;
						}
						else{
							grandtotal=months*7920+days*528+hrs*33;
						}
							
			}
			class out:public rate,public que,public info
			{
				public:
					void output();
			};
			void out::output()
			{
				cout<<"\n------------------------------------------------------------------------------------------------------------------------";					
						cout<<"\nYour name is "<<n;
						cout<<"\nYour mobile no is "<<no;
						cout<<"\nYour current address is "<<add;
						cout<<"\nYour car model is "<<model;
						cout<<"\nYour car brand is "<<brand;
						cout<<"\nYour car no is "<<plateno;
						cout<<"\nYou have to pay "<<grandtotal<<"rs for your car parking!";
			}
			
	int main()
	{
		out q;
		q.basic();
		q.carinfo();
		q.questions();
		q.charges();
		q.output();
	}
