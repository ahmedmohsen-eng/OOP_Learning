#include<bits/stdc++.h>
using namespace std;

//macros

#define endl "\n"

/*
(((
//note: 

// for standalone functions:
// parameters are in defination but arguments are in calling

//same in classes but you also have attributes which are data and charachteristics of object and
//there are also methods which are functions of the class
)))
*/

//classes   =====>>> it is automatically private
// so إن شاء الله if you wrote anything without determining the visiblity it is private

class Test{
//attributes(90% private)
//don't forget it is automatically private unless make it public:
    
    
    int m=0;//it is for every object whatever constructor is used because it is firstly defined before constructor
    //but you can use constructors to specify it based on the used constructor



    //functions(70% public)

public:
    
    //constructor which doesn't take parameters is called default constructor
    
    //a constructor's parameters do not have to match the properties or variables of the class
    //1. You can have more (or fewer) parameters
    //2. The parameters can have different names
    //3. A class can have multiple constructors  =======>>>constructor overloading

    //constructors don't return any value and also don't return void 

    //user can't call constructor but it is called automatically when creating the object

    //importanttttttttttttttttttttttttttttttttttttt:
    //if you put a constructor inside private section you can't create an object using it

    //

    //

    //

    //

    //important note:
    //if you have no constructor so the C++ considers you have an empty constructor 
    // >>>>even you haven't created any one

    //constructors have the same name as their classes
    Test(){
        m=1;
    }
    Test(int a){
        m=a;
    }
    
    
    //you can make the destructor by putting the "tidle" mark which is '~' as shown:
    ~Test(){
        cout<<"object destructed";//>it will be printed at the end of main
    }//notes on destructors:
    //importantttttttttttttttttttttttttttttttttttttttttttttttttttttttt
    //destructors don't take any parameters ==>>> so it can't be overloaded
    
    void setA(int x);
    void printA();
    void abss(int x);
    void abss(double x);
    int summ(int a  , int b  , int c  , int d  , int e );




};//for every constructor method (function) made, there is implicity a pointer "this" 
// so it has its visible parameters plus this parameter which is this so its number of parameters is actually incremented by one always
// , it points to the caller object 
// so when making the method if you write after creating the object and its attribute for example x;
//cout<<this -> x ;   
//this is the same as x value here

//supeeeeeeeeeeeeeeeer importanttttttttttttttttttttttttttttt:
// "this" can access (((private))) data in the class which is amazing

//class methods (functions) bodies
void Test::setA(int x){
    this -> m = x; // the same as m=x;
}
void Test::printA(){
    cout<<m<<endl;
}
void Test::abss(int x){
    cout<<abs(x);
}
void Test::abss(double x){
    cout<<abs(x);
}
int Test::summ(int a =0 , int b =0 , int c =0 , int d=0 , int e =0){
    return a+b+c+d+e;
}






//standalone functions
// int summ(int a  , int b  , int c  , int d  , int e ){
    //     return a+b+c+d+e;
    // }
    
    
    
    
    
    
    
    
    
    
    
    //main function
    
    int main(){
        //object creation: 1- allocate memory 2-call constructor method
        Test t;
        t.setA(10);
        t.printA();
        t.abss(-1);
        cout<<endl;
        t.abss(1.0);
        // this is wrong :t.m=10;
        //because m is private
        
        cout<<endl;
        
        //cout<<summ(1,2)<<endl;
        cout<<t.summ(1,2,3)<<endl;
        
        
        
    ;




    return 0;
}

//don't forget:
/*
don't redefine functions in global scope with same name even if one is for class
don't specialize values inside functions twice:either in defination or in prototype
we can't write summ(0,1,  ,2)<<<<=======gap before value 
we can't write in the function:    xxxxxx>      int fun(int a=0,b) if one is initialized so next must be too


important rule:
(((
you can't write sum(int x,int y=0) then rewrite it as int sum(int x) 
because they have the same signature 
because if you write sum(3) the first and second both have the functionality of it 
so the compiler got an error because it doesn't know which to choose 
(so both have the same signature)
)))====>>because parameters which take default values are not counted in the signautre

don't forget that signature of the function is:
name of function
number of parameters without default values      
and their types
and their order


/////////////////////importanttttttttttttttttttttttttttttttttttttttt
if you defined a constructor so the default one which is for example constructor() is not defined
because it was default and you created one so the default is gone 
so if you used constructor() without making it that it accept calling with no parameters it will not work
for example:
if you wrote:     
Complex cl; >>>>>>>>
====>>>>>>> this is wrong if you : defined any constructor and didn't define the default one
....so before defining any contstructor define the one which is empty of parameters 
>>>>so when you use it ,إن شاء الله that there will no problem exists









error here is when you are calling only so it more difficult to debug:
int fun(int x,int y=0){return x;}
int fun(int x){return x;}
//before using it is ok for the compiler,,,, so take care
int x = fun(2)
and the type of error here is ambiguity error
ambiguity in arabic means :   الغموض






*/



//errors:
/*
forgetting endlines!!!!!!!
*/












/*
notes:

Memory allocation is the process of setting aside a specific section of a computer's RAM 
for a program to store data, variables, and code. 
Think of it as a computer reserving a "parking spot" 
so an application can function properly without overlapping with other running processes.
And its types are:      1-   static    ,    2- dynamic
*/
