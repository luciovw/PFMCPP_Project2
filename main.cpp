#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 
 int;
 double
 float;
 bool;
 char;
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, pass each variable to a single call of the ignoreUnused function. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
     int score = 1;
     int streetNumber = 145;
     int distanceFrom = 300;

     double balance = 0.5;
     double price = 10.60;
     double tax = 0.088;

     float pi = 3.1415926f;
     float gravity = 6.67430f;
     float gain = 0.33333f;

     bool on = true;
     bool start = false;
     bool functioningNormal = false;
    
    
    ignoreUnused(number, score, streetNumber,distanceFrom, balance, price, tax, pi, gravity, gain, on, start, functioningNormal); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1) Book a flight
 */
bool bookFlight(double flightDate, int numOfPassengers = 2)  
{ 
    ignoreUnused(flightDate, numOfPassengers); 
    return {}; 
} 
/*
 2) Play a note
 */
 bool playNote(float pitch, float velocity = .60f, int style = 1)  
{ 
    ignoreUnused(pitch, velocity, style); 
    return {}; 
} 

/*
 3)Expected alertness of driver to a road
 */
 double roadAlertness(int numOfCars, double speed = 90.5, float light = 5.5f)
{ 
    ignoreUnused(numOfCars, speed, light); 
    return {}; 
} 
/*
 4)Cook Pasta
 */
 void cookPasta(double amountPasta, bool salt = true)
{ 
    ignoreUnused(amountPasta, salt); 
} 
/*
 5)Flange
 */
float flange(float inputSig, float rate = 0.7f, float depth = 0.8f)
{ 
    ignoreUnused(inputSig, rate, depth); 
    return {}; 
} 
/*
 6)Start race
 */
void startRace(double countdown = 10.0, bool gunLoaded = true)
{ 
    ignoreUnused(countdown, gunLoaded);
} 
/*
 7)Play sound
 */
void playSound(float wavFile, float fs = 44100.0f)
{ 
    ignoreUnused(wavFile, fs);
} 
/*
 8)Take solo
 */
float solo(int key, int style = 2, double bpm = 155.0)
{ 
    ignoreUnused(key, style, bpm); 
    return {}; 
} 
/*
 9)RUNNN
 */
double RUN(double speed, int fright = 10)
{ 
    ignoreUnused(speed, fright); 
    return {}; 
} 
/*
 10)Telling the truth?
 */
int truthDetect(int kindOfInfo, int context = 2, int history = 6)
{ 
    ignoreUnused(kindOfInfo, context, history); 
    return {}; 
} 
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto flight = bookFlight(3.15,1);
    //2)
    auto notes =  playNote(440.0f, .40f, 1);
    //3)
    auto alertness = roadAlertness(400, 120.2, 0.1f);
    //4)
    cookPasta(5.5, false);
    //5)
    auto flanged = flange(0.4f, 0.2f, 0.1f);
    //6)
    startRace(11, false);
    //7)
    playSound(1.4f, 44800.0f);
    //8)
    auto slowSolo = solo(2, 0, 90.0);
    //9)
    auto AHHH = RUN(100, 1000);
    //10)
    auto truth = truthDetect(1, 2); //used default argument
    
    ignoreUnused(carRented, flight, notes, alertness, flanged, slowSolo, AHHH, truth);
    
    std::cout << "good to go!" << std::endl;
    return 0;    
}
