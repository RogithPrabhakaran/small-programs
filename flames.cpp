#include<iostream>
#include<string.h>
using namespace std;
int common(string name1, string name2){
	int n1,n2,n3;
	n1=name1.length();
	n2=name2.length();
	for(int a=0;a<name1.length();){
		for(int b=0;b<name2.length();){
			if(name1[a]==name2[b]){
				name1.erase(a,1);
				name2.erase(b,1);
				a=0;
				b=0;
			}
			else{
				b++;
			}
			if(name1 != name2){
				if(b == name2.length()-1){
					a++;
			}
			}
	
		}
	}
	n3=name1.length() + name2.length();
	return n3;
}

string flames(int cnum){
	string flame = "flames";
	int index=0;
	while(flame.length() != 1){
		for(int i =1;i<=cnum ;i++){
			if(index==flame.length()){
				index=0;
			}
			if(i==cnum){
				flame=flame.erase(index,1);
				continue;
			}
			index++;
		}
	}
	return flame;
}

int main(){
	int cnum;
	string name1,name2;
	cout<<"enter the first person's name"<<endl;
	cin>>name1;
	cout<<"enter the second person's name"<<endl;
	cin>>name2;
	cnum = common(name1, name2);
	string relationship = flames(cnum);
	char charac = relationship[0];
	switch(charac){
		case 'f':
			cout<<"Friends";
			break;
		case 'l':
			cout<<"Love";
			break;
		case 'a':
			cout<<"Affection";
			break;
		case 'm':
			cout<<"Marriage";
			break;
		case 'e':
			cout<<"Enemy";
			break;
		case 's':
			cout<<"Siblings";
	}
	return 0;
}
