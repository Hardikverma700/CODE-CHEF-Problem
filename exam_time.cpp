#include <iostream>
using namespace std;

int main() {
	int dragon[3];
	int sloth[3];
	int t;
	cin>>t;
	int totaldragon;
	int totalsloth;
	while(t--){
	    
	 
	   
	        cin>>dragon[0] >> dragon[1]>>dragon[2];
	    
	    
	        cin>>sloth[0]>>sloth[1]>>sloth[2];
	    
	    totaldragon = dragon[0] + dragon[1] + dragon[2];
     totalsloth = sloth[0] + sloth[1] + sloth[2];
	    
	    if(totalsloth > totaldragon)
	    {
	        cout<<"SLOTH"<<endl;
	    }
	    else if(totaldragon > totalsloth)
	    {
	        cout<<"DRAGON"<<endl;
	    }
	    else 
	    {
	        if(dragon[0] > sloth[0])
	        cout<<"DRAGON"<<endl;
	        else if(sloth[0] > dragon[0])
	        cout<<"SLOTH"<<endl;
	        else if(dragon[1] > sloth[1])
	        cout<<"DRAGON"<<endl;
	        else if(sloth[1] > dragon[1])
	        cout<<"SLOTH"<<endl;
	        else
	        cout<<"TIE"<<endl;
	    }
	}
	return 0;
}
