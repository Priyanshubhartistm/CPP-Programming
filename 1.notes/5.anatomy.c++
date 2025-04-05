/*  // Going to in depath of hello world:-

1. #include<iostream>    = this is preprocessor jo v line # se start hoti h, o preprocessor hoti h, 

Basically ye jo file h, o input,output stream ko control krta h, 

input stream apko command line se chahya ki mai kch type karu oo ap lijiye program ke andr  

y fir ap output ka hi dena chahte h, to app o v de skte h, 

** yaha se hame ek method milega jo h
- cin
- cout

compiler apke sare code ko 2-3 iterations file se gujarta h, 

i) 1stly checked all syntax are correct, 
like:- include me se e to miss ni h, n .

ii) iske bad y isme se "TOKENS" v nikalta h, tokens parsing krta h, mtlb kch special word k meaning  jaise:-

#include  = k kch special meaning h

using     = k kch special meaning h

int       = k kch special meaning h

iski wajh se vs code me color dikh raha h, o sb tokens parsing color customizations hi h.


iii) iske bad apki file execute hoti h, to use compilation ke duran bich me jo v whiteapaces hote h, sb khud compiler ker leta h,


2. using namespace std;(std means- standard) 

alg alg tarike se name space ko likh skte h

aap khud v namespace bana skte ho, like:-

namespace mychai{
    void display(){
    // comment
    
    }
}

int main(){
    mychai::display();
    
}

khud k name space bhi banana completly possible h, 

but hmlog bana banya hua namespace use kar rahe h,

using namespace std;


ii) pure namespaces ko load karna thik ni hota h, y kah skte kafi heavy ho jata to use case me ap ise (using namespace std;) pura hi remove kar skte h, 

iska v ek method hota h.
int main(){
    std::cout<<"hello" <<std::endl;

}


iii) ek or method h,

using std::cout;
using std::endl;


3. main     = cpp ke andr main method hona jruri h, iska return type v define hona jruri h, bcz puri lang, hi statically type h, to data type pata hona chahya , jaise main se phle (int) 


main method banyenge(ap jitne chahhe itna method bana skte ho)jaise:- hitesh, priya etc.

but cpp me hr method ko bananne ka ek rule h

in method ko ham function nam se v jante h, functions o jo functionality laye, jaise ki (+) v apne ap me ek functions h, 

y "+"" function ka functionality kya hota h, iske left me ek no. ata h, iske right me no. ata h, or no. ko add kr deta h, yase hi ekfunctions h, or hr chiz k ek functionality h, 

to hamra jo k main function h, uska kam h, ave program ko start karna, 

usi trh hitesh ek function ho skta h, jiska functionality hoga ki api se kch value lake yaha pr display karwan y fir memory me value rakhna hr function k ek functionality hoti h, 


** c++ k main method kam kaise karta h?

jo standard rule define hua o y hua ki hr method k ek nam hoga, kosis ki sbka ek meaningfull name ho, 

jaise main, (hitesh, y priya)y sb n ho, 

agar koye c method ka kam h, ki api leke ana to (getapi) , (getapifromgithub) 

i) uske bd ()paranthasis or ek {} curely baracis


4. cout  = for output

5. <<    = this is a operator

(iska ek hi kam h, ki jo v string value h, usko (cout) ko pass on kr du , fir o string valu ke sath kya krna h, o jane, 

<< endl;   = y v wahi kam krega agla ko pass on kr dega, 

same operator k km hota h, yaha se value lo or yaha pass on kar do.

SUMARRY:-  
1.#include
preprocessor directive          = jo v line # hASh se start preprocessor hoti h, but preprocessor alg alg type ke hote h. 

hamra wala inclusive h, jo <iostream 
file ko incluse krta h, 

2.using namespace
ham yah pr using namespace standard v likh skte h, 

alg alg tarike se namespace ko include kiya ja skta h, on the go kiya ja skta h, 

file ke top pe v kiya ja skta h, y pura namespace v laya ja skta h, 


3.main
fir hamne dekha ki har ek method , yani c++ file ke andr main method hona jaruri h, 

iska return type(int) v define hona jaruri h,ki puri language hi statically type h, to data type to define hona jaruri h, 

to data type to pata hona chahya.


4. cout
ko v hamne dekha kha se aa raha kya inka role h,


5. <<
in operator ko v dekha hamne

6.string
"hello" ki collection of letters hi to h, 

7. return 0;
isko return 5 v kiya ja skta h, or iska kya importance h, y v hamne dekha.

*/