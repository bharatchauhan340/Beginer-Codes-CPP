//BHARAT_STRING_MERGE_VIA_+_OPERATOR
//FRIEND FUNCTION
#include<iostream>
using namespace std;
class strg
{ private:
	char x[30];
  public:
  	void getstring()
  	{cout<<"Enter String : ";
  	 cin>>x;
	  }
	void putstring()
	{cout<<"Output String : "<<x<<endl;
	}
	strg friend operator+(strg,strg);
};
strg operator+(strg p,strg q)
{ strg s;
  int i=0;
  for(i=0;p.x[i];i++)
  {s.x[i]=p.x[i];
  }
  s.x[i]=' ';
  int j=0;
  for(j=0;q.x[j];j++)
  { i=i+1;
    s.x[i]=q.x[j];
  }
  i=i+1;
  s.x[i]=0;
  return s;
}
int main()
{ strg s1,s2,s3;
  s1.getstring();
  s1.putstring();
  s2.getstring();
  s2.putstring();
  s3=s1+s2;
  s3.putstring();
	
} 

 

