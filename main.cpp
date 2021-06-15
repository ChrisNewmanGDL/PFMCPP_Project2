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
 char
 bool
 float
 double
 
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
int count = 0;
int age = 21;
int rankOrder = 6;
char letter = 'a';
char position = 'B';
char axis = 'y';
bool OnOff = false; 
bool answer = true;
bool upDown = true;
float height = 1.80f;
float weight = 6.54f;
float width = 4.356f;
double kmDriven = 8.3333;
double hardSumsResult = 34.502935409324809834;
double minisculeThingSize = 0.0000000000234;
  

    
    ignoreUnused(number, count, age, rankOrder, letter, position, axis, OnOff, answer, upDown, height, weight, width, kmDriven, hardSumsResult, minisculeThingSize); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
float rectangleArea (float width, float height)
{
    ignoreUnused(width, height);
    return{};
}
/*
 2)
 */
int segmentLength (int segmentStart, int segmentEnd)
{
    ignoreUnused(segmentStart, segmentEnd);
    return{};
}
/*
 3)
 */
void grandaughterTantrumLikelihood (float timeSinceLastMeal, bool minorSetback)
{
    ignoreUnused(timeSinceLastMeal, minorSetback);
}
/*
 4)
 */
bool triggerActivated(int thresholdLevel)
{
    ignoreUnused(thresholdLevel);
    return{};
}
/*
 5)
 */
bool matchCanStart(int playersPresent, bool refereePresent=1)
{
    ignoreUnused(playersPresent, refereePresent);
    return{};
}
/*
 6)
 */
bool validSubmission(int wordCount, float lineSpacing, bool headerCorrect)
{
ignoreUnused(wordCount, lineSpacing, headerCorrect);
return{};
}
/*
 7)
 */
void enterPlayground(float childHeight)
{
    ignoreUnused(childHeight);
}
/*
 8)
 */
float journeyTime(int averageSpeed, int distanceInMiles)
{
    ignoreUnused(averageSpeed, distanceInMiles);
    return{};
}
/*
 9)
 */
void addChordTones(float inputNoteFrequency, float third = 0.333, float fifth = 0.583)
{
    ignoreUnused(inputNoteFrequency, third, fifth);
}
/*
 10)
 */
void meetingQuorate(int membersPresent, int committeeSize)
{
    ignoreUnused(membersPresent, committeeSize);
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
    auto pitchArea = rectangleArea(30, 121.5);
    //2)
    auto phraseLength =segmentLength(22, 45);
    //3)
    grandaughterTantrumLikelihood (3, 1);
    //4)
    bool playNote = triggerActivated(7);
    //5)
    bool blowWhistle = matchCanStart(11);
    //6)
    bool markThis = validSubmission(2000,1.5, 1);
    //7)
    enterPlayground(1.1);
    //8)
    float podcastLength = journeyTime(60, 225);
    //9)
    addChordTones(1.167);
    //10)
    meetingQuorate(7,13);
    
    ignoreUnused(carRented,pitchArea,phraseLength,grandaughterTantrumLikelihood, playNote, blowWhistle, markThis, enterPlayground, podcastLength, addChordTones, meetingQuorate);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
