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
 
int
float
bool
double
char
unsigned int
 

 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
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
    int number = 2; //declaration of a variable that uses the primitive type 'int', is named 'number', and has an initial value of '2'
    int bufferSize = 512;
    int masterVolume = -20;

    float opacityBackground = 0.5f;
    float lowcutFilter = 1.2342f;
    float resonance = 0.32f;

    bool useFilter = true;
    bool startWithLastProject = false;
    bool halilIsTheBestDeveloper = true;

    double reverbSpace = 0.000000000000234;
    double feedbackAmount = 0.0000000345344;
    double secondDelay = 1.000000000000002;

    char filterBy = 'A'; 
    char memoryBank = 'F';
    char port = 'C';

    unsigned int chunkSize = 63000;
    unsigned int sampleNumber = 34;
    unsigned int undoSteps = 15;

    ignoreUnused(number, bufferSize, masterVolume, opacityBackground, lowcutFilter, resonance, useFilter, startWithLastProject, halilIsTheBestDeveloper, reverbSpace, feedbackAmount, secondDelay, filterBy, memoryBank, port, chunkSize, sampleNumber, undoSteps); //passing each variable declared to the ignoreUnused() function
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
 1)
 */
int getSampleAmount(char bank, bool filterUnused = false)
{
    ignoreUnused(bank, filterUnused);
    return {};
}

/*
 2)
 */
bool saveSampleBank(char targetBank)
{
    ignoreUnused(targetBank);
    return {};
}

/*
 3)
 */
 void openFileBrowser(char harddisc = 'c', bool homeDirectory = true)
 {
    ignoreUnused(harddisc, homeDirectory);
 }

/*
 4)
 */
 void reverseSample(char bank, int sampleNumber)
 {
    ignoreUnused(bank, sampleNumber);
 } 

/*
 5)
 */
void createTrack(char type = 'a', int amount = 1)
{
    ignoreUnused(type, amount);
}
/*
 6)
 */
 float getResonance(int trackNumber) 
 {
    ignoreUnused(trackNumber);
    return {};
 }

/*
 7)
 */
char getCurrentBank(int trackNumber)
{
    ignoreUnused(trackNumber);
    return {};
}

/*
 8)
 */
void copyBankParameter(char source, char target)
{
    ignoreUnused(source, target);
}
/*
 9)
 */
bool isTrackMuted(int trackNumber){
    ignoreUnused(trackNumber);
    return {};
}

/*
 10)
 */
 int calculateArea(int hight = 10, int width = 10)
 {
    ignoreUnused(hight, width);
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
    auto amount = getSampleAmount('b');
    //2)
    auto result = saveSampleBank('c');
    //3)
    openFileBrowser();
    //4)
    reverseSample('a', 96);
    //5)
    createTrack('m');
    //6)
    auto reso = getResonance(2);
    //7)
    auto bank = getCurrentBank(7);
    //8)
    copyBankParameter('a', 'b');
    //9)
    auto muteStatus = isTrackMuted(4);
    //10)
    auto myArea = calculateArea(1024, 768);
    
    ignoreUnused(carRented, amount, result, reso, bank, muteStatus, myArea);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
