#include <bits/stdc++.h>

using namespace std;
int main()
{
	string str1,str2,name,gender,hobby,word;
	int a,b,age,n,m=0,i,flag=0;
	cout<<"Which command do you want to do - Find fib, About me, Math, Check prime, How many a? : ";
	getline (cin, str1);
	if (str1 == "Find fib")
	{
	int fib[100];
	int n;
	cout<<"\nEnter n: ";
	cin>>n;
	fib[0]=1;
	fib[1]=1;
	for (int i=2;i<n;i++)
	{
		fib[i] = fib[i-1] + fib[i-2];
	}
	cout<<"\nFibonacci series: ";
	for( int i=0;i<n;i++)
	{
		cout<<fib[i]<<" ";
	}
    }
    else if (str1 == "Math"){
    	cout<<"\nWhat do you want to do: (+, -, *, %, /): ";
    	cin>>str2;
    	if (str2 == "+"){
    		cout<<"\nEnter a: ";
    		cin>>a;
    		cout<<"\nEnter b: ";
    		cin>>b;
    		cout<<"\nAnswer: "<<a+b<<endl;
		}
		else if (str2 == "-"){
    		cout<<"\nEnter a: ";
    		cin>>a;
    		cout<<"\nEnter b: ";
    		cin>>b;
    		cout<<"\nAnswer: "<<a-b<<endl;
		}
		else if (str2 == "%"){
    		cout<<"\nEnter a: ";
    		cin>>a;
    		cout<<"\nEnter b: ";
    		cin>>b;
    		cout<<"\nAnswer: "<<a%b<<endl;
		}
		else if (str2 == "*"){
    		cout<<"\nEnter a: ";
    		cin>>a;
    		cout<<"\nEnter b: ";
    		cin>>b;
    		cout<<"\nAnswer: "<<a*b<<endl;
		}
		else if (str2 == "/"){
    		cout<<"\nEnter a: ";
    		cin>>a;
    		cout<<"\nEnter b: ";
    		cin>>b;
    		cout<<"\nAnswer: "<<a/b<<endl;
		}
	}
	else if (str1 == "About me"){
		cout<<"\nEnter your full name for example - Ibrahim Mamedov: ";
		getline (cin, name);
		cout<<"\nEnter your gender(Male or Female): ";
		cin>>gender;
		if(gender != "Male" && gender != "Female"){
			cout<<"\nInvalid gender! Please try again and enter your real gender for example - Male/Female";
			return 0;
		}
		else{
		cout<<"\nEnter your age: ";
		cin>>age;
		if(age <= 13 || age >= 100){
			cout<<"\nPlease enter valid age. from 13 to 100";
			return 0;
		}
		else{
			cout<<"\nEnter your hobby: \n";
			cin>>hobby;
			cout<<"About me: \nFull name: "<<name<<". \nGender: "<<gender<<". \nAge: "<<age<<". \nHobbies: "<<hobby;
		}
	}
}
    else if (str1 == "Check prime")
    {
    	cout << "\nEnter the Number to check Prime: ";  
        cin >> n;  
        m=n/2;  
        for(i = 2; i <= m; i++){
		if(n % i == 0){
		cout<<"\nNumber is not Prime."<<endl;  
        flag=1;  
        break;  
    }  
}  
    if (flag == 0)  
        cout << "\nNumber is Prime."<<endl;  
        return 0;  
}
	else{
	    cout<<"\nEnter valid command. Try again.";
	}

    cout<<"\n";
    system ("Pause");
}
