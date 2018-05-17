/**
 *
 * @file   TestFunctor.cpp
 *
 * @authors M. Laporte, D. Mathieu
 *
 * @date    27/04/2010
 *
 * @version V1.0
 *
 * @brief   Premier functor
 *
 **/
#include <iostream>
#include <string>
#include <cctype>               // tolower(), toupper()
#include <cassert>

using namespace std;

namespace
{
    class ToLower
    {
    public:
        //ToLower();
        virtual ~ToLower() {};
        virtual int operator()(int carac){return tolower(carac);}

    private:


    }; // ToLower

    typedef int (* fctInt2Int_t) (int);
    string & moulinette (string & str, ToLower & transf)
    {
        for (string::size_type i (str.size ()); i--; )
            str [i] = transf (str [i]);

        return str;

    } // moulinette()

    void testFunctor (void)
    {
        cout << "Functor : ";

        string ligne  ("AZECv qrgWSg wrV  wfdgWFDHG  wdfGWXCV");
        string minusc ("azecv qrgwsg wrv  wfdgwfdhg  wdfgwxcv");

        ToLower transf;
        assert (minusc == moulinette (ligne, transf));

        cout << "OK\n";

    } // testFunctor()

} // namespace anonyme

int main (void)
{
    /*      */    testFunctor ();     /*           */

    return 0;

} // main()
