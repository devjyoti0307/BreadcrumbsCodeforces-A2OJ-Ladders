//1. Young Physicist

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,sa=0,sb=0,sc=0;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        sa+=a;
        sb+=b;
        sc+=c;
    }
    if(sa || sb || sc) cout<<"NO";
    else cout<<"YES";
    return 0;
}

//2. Beautiful Matrix

#include<bits/stdc++.h>
using namespace std;

int getDiff(int a,int b){
    return a>b?a-b:b-a;
}

int main(){
    int a,b;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int temp;
            cin>>temp;
            if(temp==1){
                a=i;
                b=j;
            }
        }
    }
    cout<<getDiff(a,2)+getDiff(b,2);
    return 0;
}

//3. Queue at the School

#include<bits/stdc++.h>
using namespace std;
int main(){
    int strSize,r;
    cin>>strSize>>r;
    string s;
    cin>>s;
    for(int i=0;i<r;i++){
        for(int j=0;j<strSize-1;j++){
            if(s[j]=='B'&&s[j+1]=='G'){
                swap(s[j],s[j+1]);
                j++;
            }
        }
    }
    cout<<s;
    return 0;
}

//4. Borze

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,ans="";
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='.'){
            ans+='0';
        }
        else{
            if(s[i+1]=='.')ans+='1';
            else ans+='2';
            i++;
        }
    }
    cout<<ans;
    return 0;
}

//5. Beautiful Year

#include<bits/stdc++.h>
using namespace std;
int main(){
    int year;
    cin>>year;
    while(true){
        year++;
        string s=to_string(year);
        set<char> ch;
        for(int i=0;i<s.size();i++){
            ch.insert(s[i]);
        }
        if(ch.size()==s.size()) break;
    }
    cout<<year;
    return 0;
}

//7. Word

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cntUp=0,cntLow=0;
    for(int i=0;i<s.size();i++){
        if(isupper(s[i])) cntUp++;
        else cntLow++;
    }
    if(cntUp>cntLow) transform(s.begin(),s.end(),s.begin(),::toupper);
    else transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s;
    return 0;
}

//8. Word Capitalization

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    char ch=toupper(s[0]);
    string newStr=ch+s.substr(1);
    cout<<newStr;
}

//9. Nearly Lucky Number

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cntLucky=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='4' || s[i]=='7') cntLucky++;
    }
    if(cntLucky==7 || cntLucky==4) cout<<"YES";
    else cout<<"NO";
    return 0;
}

//10. Stones on the Table

#include<bits/stdc++.h>
using namespace std;
int main(){
    int sz;
    string s;
    cin>>sz>>s;
    int noOfStones=0;
    for(int i=0;i<sz-1;i++){
        if(s[i]==s[i+1]) noOfStones++;
    }
    cout<<noOfStones;
    return 0;
}

//11. Panoramix's Prediction

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	if(n==2){
		return true;
	}
	else{
		for(int i=2;i*i<=n;i++){
			if(n%i==0) return false;
		}
		return true;
	}
}

int nextPrime(int n){
	while(true){
		n=n+1;
		if(isPrime(n)) return n;
	}
}

int main(){
	int n1,n2;
	cin>>n1>>n2;
	if(nextPrime(n1)==n2)cout<<"YES";
	else cout<<"NO";
	return 0;
}

//12. Ultra-Fast Mathematician

#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1,s2,s="";
	cin>>s1>>s2;
	for(int i=0;i<s1.size();i++){
		if(s1[i]!=s2[i])s+='1';
		else s+='0';
	}
	cout<<s;
	return 0;
}

//13. Perfect Permutation

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n<=1 || n%2!=0)cout<<-1;
	else{
		int a[n];
		for(int i=1;i<=n;i++){
			a[i-1]=i;
		}
		for(int i=0;i<n;i+=2){
			swap(a[i],a[i+1]);
		}
		for(int i=0;i<n;i++){
			cout<<a[i];
			if(i!=n-1)cout<<" ";
		}
	}
	return 0;
}

//14. Arrival of the General

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,mx,mn,maxInd,minInd,f=1;
	vector<int> v;
	cin>>n;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		v.push_back(temp);
	}
	mx=*max_element(v.begin(),v.end());
	mn=*min_element(v.begin(),v.end());
	for(int i=0;i<n;i++){
		if(v[i]==mx&&f==1){
			maxInd=i;
			f=0;
		}
		if(v[i]==mn){
			minInd=i;
		}
	}
	if(minInd<maxInd) cout<<(n-1-minInd)+maxInd-1;
	else cout<<(n-1-minInd)+maxInd;
	return 0;
}

//15. Drinks

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	float s=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		s+=t;
	}
	float res=s/n;
	cout<<fixed<<setprecision(12)<<res;
	return 0;
}

//16. Insomnia cure

#include<bits/stdc++.h>
using namespace std;

int main(){
	int k,l,m,n,d,cnt=0;
	cin>>k>>l>>m>>n>>d;
	for(int i=1;i<=d;i++){
		if(i%k==0 || i%l==0 || i%m==0 || i%n==0)cnt+=1;
	}
	cout<<cnt;
	return 0;
}

//17. Cupboards

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,cl=0,cr=0,mid,totTime=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		cl+=a;
		cr+=b;
	}
	if(n%2!=0) mid=n/2+1;
	else mid=n/2;
	if(cl>=mid) totTime+=n-cl;
	else totTime+=cl;
	if(cr>=mid) totTime+=n-cr;
	else totTime+=cr;
	cout<<totTime;
	return 0;
}

//18. I_love_%username%

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,mn,mx,cnt=0;
	cin>>n;
	cin>>mn;
	mx=mn;
	for(int i=0;i<n-1;i++){
		int temp;
		cin>>temp;
		if(temp>mx){
			mx=temp;
			cnt++;
		}
		if(temp<mn){
			mn=temp;
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}

//19. Tram

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,cp=0,mxp=0,pen,pex;
	cin>>n;
	for(int i=0;i<n;i++){
		int ex,en;
		cin>>ex>>en;
		cp-=ex;
		cp+=en;
		if(cp>mxp) mxp=cp;
	}
	cout<<mxp;
	return 0;
}

//20. Helpful Maths

#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	vector<char> ch;
	for(int i=0;i<s.size();i++){
		if(s[i]!='+')ch.push_back(s[i]);
	}
	sort(ch.begin(),ch.end());
	for(int i=0;i<ch.size();i++){
		cout<<ch[i];
		if(i!=ch.size()-1)cout<<'+';
	}
	return 0;
}

//21. Is your horseshoe on the other hoof?

#include<bits/stdc++.h>
using namespace std;

int main(){
	set<int> s;
	for(int i=0;i<4;i++){
		int t;
		cin>>t;
		s.insert(t);
	}
	cout<<4-s.size();
	return 0;
}

//22. Way Too Long Words

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		if(s.size()>10)cout<<s[0]<<s.size()-2<<s[s.size()-1];
		else cout<<s;
		if(n)cout<<endl;
	}
	return 0;
}

//23. Boy or Girl
#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	set<char> ch;
	for(int i=0;i<s.size();i++){
		ch.insert(s[i]);
	}
	if(ch.size()%2!=0)cout<<"IGNORE HIM!";
	else cout<<"CHAT WITH HER!"
;	return 0;
}

//24. Amusing Joke
#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1,s2,s3,sf;
	bool f=true;
	cin>>s1>>s2>>sf;
	s3=s1+s2;
	set<char> ch,tch;
	map<char,int> mt,mf;
	for(int i=0;i<s3.size();i++){
		ch.insert(s3[i]);
		mt[s3[i]]++;
	}
	for(int i=0;i<sf.size();i++){
		tch.insert(sf[i]);
		mf[sf[i]]++;
	}
	for(char x:ch){
		if(mf[x]!=mt[x]) {
			f=false;
			break;
		}
	}
	if(f&&tch.size()==ch.size()) cout<<"YES";
	else cout<<"NO";
	return 0;
}

//25. Soft Drinking
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int a[3]={(k*l)/nl,c*d,p/np};
	cout<<*min_element(a,a+3)/n;
	return 0;
}

//26. HQ9+
#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	if(s.find('H')<s.size() || s.find('Q')<s.size() || s.find('9')<s.size()) cout<<"YES";
	else cout<<"NO";
	return 0;
}

//27. Petya and Strings
#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1,s2;
	cin>>s1>>s2;
	transform(s1.begin(),s1.end(),s1.begin(),::tolower);
	transform(s2.begin(),s2.end(),s2.begin(),::tolower);
	if(s1==s2)cout<<0;
	else if(s1<s2)cout<<-1;
	else cout<<1;
	return 0;
}

//28. Team
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,cnt=0;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		if((a+b+c)>=2)cnt++;
	}
	cout<<cnt;
	return 0;
}

//29. Bit++
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,cnt=0;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(s[1]=='+') cnt++;
		else cnt--;
	}
	cout<<cnt;
	return 0;
}

//30. Effective Approach
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n;
	cin>>n;
	map<long long int, long long int> m1,m2;
	for(long long int i=1;i<=n;i++){
		long long int temp;
		cin>>temp;
		m1[temp]=i;
		m2[temp]=n-i+1;
	}
	long long int q,cl=0,cr=0;
	cin>>q;
	for(long long int i=0;i<q;i++){
		long long int temp;
		cin>>temp;
		cl+=m1[temp];
		cr+=m2[temp];
	}
	cout<<cl<<" "<<cr;
	return 0;
}

//31. Dima and Friends
#include<bits/stdc++.h>
using namespace std;

int main(){
	int f,s=0,countFingers=0;
	cin>>f;
	for(int i=0;i<f;i++){
		int num;
		cin>>num;
		s+=num;
	}
	for(int i=1;i<=5;i++){
		if((s+i)%(f+1)!=1)countFingers++;
	}
	cout<<countFingers;
	return 0;
}

//32. Jzzhu and Children
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,pos;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	while(1){
		bool f=true;
		for(int i=0;i<n;i++){
			if(a[i]>0){
				a[i]-=m;
				f=false;
				pos=i+1;
			}
		}
		if(f)break;
	}
	cout<<pos;
	return 0;
}

//33. Supercentral Point
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,countPoints=0;
	cin>>n;
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		v.push_back({a,b});
	}
	for(int i=0;i<n;i++){
		bool isRightNeighbour=false,isLeftNeighbour=false,isLowerNeighbour=false,isUpperNeighbour=false;
		int x=v[i].first,y=v[i].second;
		for(int j=0;j<n;j++){
			if(i!=j){
				int xt=v[j].first,yt=v[j].second;
				if(xt>x&&yt==y)isRightNeighbour=true;
				if(xt<x&&yt==y)isLeftNeighbour=true;
				if(xt==x&&yt<y)isLowerNeighbour=true;
				if(xt==x&&yt>y)isUpperNeighbour=true;
			}
		}
		if(isRightNeighbour&&isLeftNeighbour&&isLowerNeighbour&&isUpperNeighbour) countPoints++;
	}
	cout<<countPoints;
	return 0;
}

//34. Petr and Book
#include<bits/stdc++.h>
using namespace std;

int main(){
	int totalPages,a[7],day;
	cin>>totalPages;
	for(int i=0;i<7;i++){
		cin>>a[i];
	}
	while(true){
		for(int i=0;i<7;i++){
			totalPages-=a[i];
			if(totalPages<=0){
				day=i+1;
				break;
			}
		}
		if(totalPages<=0) break;
	}
	cout<<day;
	return 0;
}

//35. Parallelepiped
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int x=sqrt((a*c)/b);
    cout<<(x+(a/x)+(c/x))*4;
    return 0;
}

//36. Reconnaissance 2
#include<bits/stdc++.h>
using namespace std;

int getAbsDiff(int a,int b){
	return a>b?a-b:b-a;
}

int main(){
    int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int diff=getAbsDiff(a[0],a[1]),ind1=0,ind2=1;
	for(int i=1;i<n;i++){
		int tempDiff,tempInd1=i,tempInd2=i+1;
		if(i==n-1){
			tempDiff=getAbsDiff(a[0],a[n-1]);
			tempInd1=n-1;
			tempInd2=0;
		}
		else{
			tempDiff=getAbsDiff(a[i],a[i+1]);
		}
		if(tempDiff<diff){
			diff=tempDiff;
			ind1=tempInd1;
			ind2=tempInd2;
		}
	}
	cout<<ind1+1<<" "<<ind2+1;
    return 0;
}

//37. Even Odds
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,k;
	cin>>n>>k;
    if (k<=(n + 1)/2)
    {
        cout<<k*2-1<<endl;
    }
    else
    {
        cout<<(k-(n + 1)/2)*2<<endl;
    }
    return 0;
}

//38. Little Elephant and Rozdil
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int minDistance=*min_element(v.begin(),v.end());
    int posOfMinDistance=distance(v.begin(),find(v.begin(),v.end(),minDistance));
    int freqOfMinDistance=count(v.begin(),v.end(),minDistance);
    if(freqOfMinDistance==1) cout<<posOfMinDistance+1;
    else cout<<"Still Rozdil";
    return 0;
}

//39. Hexadecimal's theorem
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<0<<" "<<0<<" "<<n;
    return 0;
}

//40. Jeff and Digits
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<int,int> m;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        m[temp]++;
    }
    int cnt5=m[5]-(m[5]%9);
    if(m[5]>=9&&m[0]>0){
        for(int i=0;i<cnt5;i++){
            cout<<5;
        }
        for(int i=0;i<m[0];i++){
            cout<<0;
        }
    }
    else if(m[0]==0) cout<<-1;
    else cout<<0;
    return 0;
}

//41. Xenia and Ringroad
#include<bits/stdc++.h>
using namespace std;

int main(){
    int houses, things;
    cin>>houses>>things;
    int houseNos[things];
    for(int i=0;i<things;i++){
        cin>>houseNos[i];
    }
    long long int totalTime=0;
    int currPos=1;
    for(int i=0;i<things;i++){
        if(houseNos[i]>currPos)totalTime+=(houseNos[i]-currPos);
        else if(houseNos[i]<currPos)totalTime+=(houses-currPos+houseNos[i]);
        currPos=houseNos[i];
    }
    cout<<totalTime;
    return 0;
}

//42. Magic Numbers
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    bool f=false;
    for(int i=0;i<s.size();i++){
        if(i<s.size()-1){
            if(i<s.size()-2){
                if(s.substr(i,3)=="144") {
                    i+=2;
                    continue;
                }
            }
            if(s.substr(i,2)=="14") {
                    i+=1;
                    continue;
                }
        }
        if(s[i]=='1') continue;
        f=true;
        break;
    }
    if(f) cout<<"NO";
    else cout<<"YES";
    return 0;
}

//43. Translation
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    reverse(s2.begin(),s2.end());
    if(s1!=s2) cout<<"NO";
    else cout<<"YES";
    return 0;
}

//44. Football
#include<bits/stdc++.h>
using namespace std;

int main(){
    set<string> st;
    int n;
    cin>>n;
    map<string,int> m;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(m[s]==0)st.insert(s);
        m[s]++;
    }
    string winner;
    int maxScore=0;
    for(string str:st){
        if(maxScore<m[str]){
            winner=str;
            maxScore=m[str];
        }
    }
    cout<<winner;
    return 0;
}

//45. Bicycle Chain
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    int arr1[a];
    for(int i=0;i<a;i++){
        cin>>arr1[i];
    }
    int b;
    cin>>b;
    int arr2[b];
    for(int i=0;i<b;i++){
        cin>>arr2[i];
    }
    vector<int> v;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(arr2[j]%arr1[i]==0){
                v.push_back(arr2[j]/arr1[i]);
            }
        }
    }
    int maxRatio=*max_element(v.begin(),v.end());
    int noOfMaxRatios=count(v.begin(),v.end(),maxRatio);
    cout<<noOfMaxRatios;
    return 0;
}

//46. Sale
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,cntTVs=0;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int totalMoney=0;
    if(a[0]<0){
        for(int i=0;i<n;i++){
            if(a[i]>=0) break;
            else {
                if(cntTVs==m) break;
                else {
                    totalMoney+=a[i];
                    cntTVs++;
                }
            }
        }
    }
    if(totalMoney)cout<<-totalMoney;
    else cout<<totalMoney;
    return 0;
}

//47. System of Equations
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,cntPair=0;
    cin>>n>>m;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(((i*i)+j)==n&&(i+(j*j))==m){
                cntPair++;
            }
        }
    }
    cout<<cntPair;
    return 0;
}

//48. Business trip

#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    int a[12];
    for(int i=0;i<12;i++){
        cin>>a[i];
    }
    sort(a,a+12);
    int s=0,cnt=0;
    if(k==0) cout<<0;
    else{
        for(int i=11;i>=0;i--){
            s+=a[i];
            cnt++;
            if(s>=k){
                cout<<cnt;
                break;
            }
            else if(i==0){
                cout<<-1;
            }
        }

    }
    return 0;
}

//49. Dubstep

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    bool f1=false,f2=true;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(i<s.size()-2){
            if(s.substr(i,3)=="WUB"){
                if(f1==true) f2=false;
                i+=2;
            }
            else{
                f1=true;
                if(f2==false){
                    f2=true;
                    cout<<" ";
                }
                cout<<s[i];
            }
        }
        else{
            f1=true;
            if(f2==false){
                f2=true;
                cout<<" ";
            }
            cout<<s[i];
        }
    }
    return 0;
}

//50. k-String

#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    string s;
    cin>>s;
    bool f=false;
    map<char,int> m;
    set<char> st;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
        st.insert(s[i]);
    }
    for(char x:s){
        if(m[x]%k!=0){
            f=true;
            break;
        }
    }
    if(!f){
        for(int i=0;i<k;i++){
            for(char x:st){
                for(int i=0;i<m[x]/k;i++){
                    cout<<x;
                }
            }
        }
    }
    else cout<<-1;
    return 0;
}

//51. The number of positions

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    int cntPos=0,bPos=n-b+1;
    if(bPos>=a+2) cout<<b+1;
    else cout<<n-a;
    return 0;
}

//52. Football

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool dangerous=false;
    for(int i=0;i<=s.size()-7&&s.size()>=7;i++){
        if(s.substr(i,7)=="1111111" || s.substr(i,7)=="0000000"){
            dangerous=true;
            break;
        }
    }
    if(dangerous)cout<<"YES";
    else cout<<"NO";
    return 0;
}

//53. String Task

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,vowels="aeiouy";
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(int i=0;i<s.size();i++){
        if(vowels.find(s[i])==string::npos){
            cout<<'.'<<s[i];
        }
    }
    return 0;
}

//54. Little Elephant and Function

#include<bits/stdc++.h>
using namespace std;

void changeEle(int *a, int n){
    if(n==0) return;
    swap(a[n],a[n-1]);
    changeEle(a,n-1);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        a[i-1]=i;
    }
    changeEle(a,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i];
        if(i!=n-1)cout<<" ";
    }
    return 0;
}

//55. Present from Lena

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        int f;
        for(int j=0;j<=n-i-1;j++){
            cout<<"  ";
        }
        for(int j=0;j<=i;j++){
            cout<<j;
            if(j!=i) cout<<" ";
            f=j;
        }
        for(int j=f-1;j>=0;j--){
            cout<<" "<<j;
        }
        cout<<endl;
    }
    for(int i=n-1;i>=0;i--){
        int f;
        for(int j=0;j<=n-i-1;j++){
            cout<<"  ";
        }
        for(int j=0;j<=i;j++){
            cout<<j;
            if(j!=i) cout<<" ";
            f=j;
        }
        for(int j=f-1;j>=0;j--){
            cout<<" "<<j;
        }
        cout<<endl;
    }
    return 0;
}

//57. Puzzles

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,leastDiff=999;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a,a+m);
    for(int i=0;i<=m-n;i++){
        int currDiff=a[n+i-1]-a[i];
        leastDiff=min(currDiff,leastDiff);
    }
    cout<<leastDiff;
    return 0;
}

//58. Chat room

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int h=-1,e=-1,l1=-1,l2=-1,o=-1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='h'){
            h=i;
            break;
        }
    }
    for(int i=h+1;i<s.size();i++){
        if(s[i]=='e'){
            e=i;
            break;
        }
    }
    for(int i=e+1;i<s.size();i++){
        if(s[i]=='l'){
            l1=i;
            break;
        }
    }
    for(int i=l1+1;i<s.size();i++){
        if(s[i]=='l') {
            l2=i;
            break;
        }
    }
    for(int i=l2+1;i<s.size();i++){
        if(s[i]=='o'){
            o=i;
            break;
        }
    }
    if(h>=0&&e>0&&l1>1&&l2>2&&o>3) cout<<"YES";
    else cout<<"NO";
    return 0;
}

//59. Airport

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p;
    cin >> p >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    int mnc = 0, mxc = 0,t1=p,t2=p;
    while (1)
    {
        sort(a,a+n);
        for(int i=0;i<n;i++){
            if(a[i]!=0){
                mnc+=a[i];
                t1--;
                a[i]-=1;
                break;
            }
        }
        if(t1==0) break;
    }
    while(1){
        sort(b,b+n);
        for(int i=n-1;i>=0;i--){
            if(b[i]!=0){
                mxc+=b[i];
                t2--;
                b[i]-=1;
                break;
            }
        }
        if(t2==0) break;
    }
    cout<<mxc<<" "<<mnc;
    return 0;
}

//60. DZY Loves Chessboard

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    char a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]=='.'){
                if((i+j)%2==0) a[i][j]='B';
                else a[i][j]='W';
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
        }
        if(i!=m-1) cout<<endl;
    }
    return 0;
}

//61. Pashmak and Flowers

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a[n];
    for(long long int i=0;i<n;i++){
        cin>>a[i];
    }
    long long int minEle=*min_element(a,a+n), maxEle=*max_element(a,a+n), cntMinEle=count(a,a+n,minEle), cntMaxEle=count(a,a+n,maxEle);
    if(minEle==maxEle) cout<<maxEle-minEle<<" "<<(n-1)*n/2;
    else cout<<maxEle-minEle<<" "<<cntMaxEle*cntMinEle;
    return 0;
}