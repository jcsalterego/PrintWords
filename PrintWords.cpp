#include<iostream>
#include<iomanip>
#include<string>
#include<cctype>

using namespace std;
const int NUM_COLUMNS = 1;

void LetterA(string message[][NUM_COLUMNS]);
void LetterB(string message[][NUM_COLUMNS]);
void LetterC(string message[][NUM_COLUMNS]);
void LetterD(string message[][NUM_COLUMNS]);
void LetterE(string message[][NUM_COLUMNS]);
void LetterF(string message[][NUM_COLUMNS]);
void LetterG(string message[][NUM_COLUMNS]);
void LetterH(string message[][NUM_COLUMNS]);
void LetterI(string message[][NUM_COLUMNS]);
void LetterJ(string message[][NUM_COLUMNS]);
void LetterK(string message[][NUM_COLUMNS]);
void LetterL(string message[][NUM_COLUMNS]);
void LetterM(string message[][NUM_COLUMNS]);
void LetterN(string message[][NUM_COLUMNS]);
void LetterO(string message[][NUM_COLUMNS]);
void LetterP(string message[][NUM_COLUMNS]);
void LetterQ(string message[][NUM_COLUMNS]);
void LetterR(string message[][NUM_COLUMNS]);
void LetterS(string message[][NUM_COLUMNS]);
void LetterT(string message[][NUM_COLUMNS]);
void LetterU(string message[][NUM_COLUMNS]);
void LetterV(string message[][NUM_COLUMNS]);
void LetterW(string message[][NUM_COLUMNS]);
void LetterX(string message[][NUM_COLUMNS]);
void LetterY(string message[][NUM_COLUMNS]);
void LetterZ(string message[][NUM_COLUMNS]);
void addSpace(string message[][NUM_COLUMNS]);
void apostrophe(string message[][NUM_COLUMNS]);
void exclamation(string message[][NUM_COLUMNS]);
void setLetter(string messageArray[][NUM_COLUMNS],char charEntered);

/*
Testing commit # 2
*/


int main()
{
    string topMessage[7][NUM_COLUMNS];
    string bottomMessage[7][NUM_COLUMNS];
    string phraseEntered;
    int phraseLength;

    cout << "Enter a phrase: " << endl;
    getline(cin,phraseEntered);

    phraseLength = phraseEntered.length();
    cout << "Phrase length = " << phraseLength << endl;

    /*LetterA(topMessage);
    LetterB(topMessage);
    LetterC(topMessage);
    LetterD(topMessage);
    LetterE(topMessage);
    LetterF(topMessage);
    LetterG(topMessage);
    LetterH(topMessage);
    LetterI(topMessage);
    LetterJ(topMessage);
    LetterK(topMessage);
    LetterL(topMessage);
    LetterM(topMessage);
    LetterN(topMessage);
    LetterO(topMessage);
    LetterP(topMessage);
    LetterQ(bottomMessage);
    LetterR(bottomMessage);
    LetterS(bottomMessage);
    LetterT(bottomMessage);
    LetterU(bottomMessage);
    LetterV(bottomMessage);
    LetterW(bottomMessage);
    LetterX(bottomMessage);
    LetterY(bottomMessage);
    LetterZ(bottomMessage);*/

    for(int i = 0; i < phraseLength; i++)
    {
        if(i > 13)
        {
            setLetter(bottomMessage,toupper(phraseEntered[i]));
        }
        else
        {
            setLetter(topMessage,toupper(phraseEntered[i]));
        }
        
    }
    

    cout << "Printing top message" << endl;
    for(int i = 0; i < 7; i++)
    {
        cout << topMessage[i][0] << endl;
    }
    cout << endl;

    cout << "Printing bottom message" << endl;
    for(int i = 0; i < 7; i++)
    {
        cout << bottomMessage[i][0] << endl;
    }
    cout << endl;

    cout << "Exiting" << endl;
    return 0;
}

void LetterA(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string A[7][1] = {
                      {"      *      "},
                      {"     * *     "},
                      {"    *   *    "},
                      {"   *******   "},
                      {"  *       *  "},
                      {" *         * "},
                      {"*           *"}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += A[i][0];
    }
}

void LetterB(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string B[7][1] = {
                      {"*********  "},
                      {"*         *"},
                      {"*         *"},
                      {"*********  "},
                      {"*         *"},
                      {"*         *"},
                      {"********** "}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += B[i][0];
    }
}

void LetterC(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string C[7][1] = {
                      {"  **********"},
                      {"**          "},
                      {"**          "},
                      {"**          "},
                      {"**          "},
                      {"**          "},
                      {"  **********"}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += C[i][0];
    }
}

void LetterD(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string D[7][1] = {
                      {"***********  "},
                      {"*          **"},
                      {"*          **"},
                      {"*          **"},
                      {"*          **"},
                      {"*          **"},
                      {"***********  "}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += D[i][0];
    }
}

void LetterE(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string E[7][1] = {
                      {"***********"},
                      {"*          "},
                      {"*          "},
                      {"***********"},
                      {"*          "},
                      {"*          "},
                      {"***********"}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += E[i][0];
    }
}

void LetterF(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string F[7][1] = {
                      {"***********"},
                      {"*          "},
                      {"*          "},
                      {"***********"},
                      {"*          "},
                      {"*          "},
                      {"*          "}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += F[i][0];
    }
}

void LetterG(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string F[7][1] = {
                      {" ********** "},
                      {"**          "},
                      {"**          "},
                      {"**     *****"},
                      {"**         *"},
                      {"**         *"},
                      {" ***********"}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += F[i][0];
    }
}

void LetterH(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string H[7][1] = {
                      {"*          *"},
                      {"*          *"},
                      {"*          *"},
                      {"************"},
                      {"*          *"},
                      {"*          *"},
                      {"*          *"}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += H[i][0];
    }
}

void LetterI(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string I[7][1] = {
                      {"************"},
                      {"      *     "},
                      {"      *     "},
                      {"      *     "},
                      {"      *     "},
                      {"      *     "},
                      {"************"}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += I[i][0];
    }
}

void LetterJ(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string J[7][1] = {
                      {"  ******"},
                      {"       *"},
                      {"       *"},
                      {"       *"},
                      {"       *"},
                      {"****   *"},
                      {"   *****"}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += J[i][0];
    }
}

void LetterK(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string K[7][1] = {
                      {"*      *"},
                      {"*    *  "},
                      {"*  *    "},
                      {"***     "},
                      {"*  *    "},
                      {"*    *  "},
                      {"*      *"}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += K[i][0];
    }
}

void LetterL(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string L[7][1] = {
                      {"*          "},
                      {"*          "},
                      {"*          "},
                      {"*          "},
                      {"*          "},
                      {"*          "},
                      {"***********"}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += L[i][0];
    }
}

void LetterM(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string M[7][1] = {
                      {"*           *"},
                      {"* *       * *"},
                      {"*   *   *   *"},
                      {"*     *     *"},
                      {"*           *"},
                      {"*           *"},
                      {"*           *"}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += M[i][0];
    }
}

void LetterN(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string N[7][1] = {
                      {"*           *"},
                      {"* *         *"},
                      {"*   *       *"},
                      {"*     *     *"},
                      {"*       *   *"},
                      {"*         * *"},
                      {"*           *"}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += N[i][0];
    }
}

void LetterO(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string O[7][1] = {
                      {" ********* "},
                      {"*         *"},
                      {"*         *"},
                      {"*         *"},
                      {"*         *"},
                      {"*         *"},
                      {" ********* "}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += O[i][0];
    }
}

void LetterP(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string P[7][1] = {
                      {"********** "},
                      {"*         *"},
                      {"*         *"},
                      {"********** "},
                      {"*          "},
                      {"*          "},
                      {"*          "}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += P[i][0];
    }
}

void LetterQ(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string Q[7][1] = {
                      {" ********** "},
                      {"*          *"},
                      {"*          *"},
                      {"*          *"},
                      {"*       *  *"},
                      {"*         * "},
                      {" ********  *"}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += Q[i][0];
    }
}

void LetterR(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string R[7][1] = {
                      {"*********   "},
                      {"*         * "},
                      {"*         * "},
                      {"*********   "},
                      {"*        *  "},
                      {"*         * "},
                      {"*          *"}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += R[i][0];
    }
}

void LetterS(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string S[7][1] = {
                      {"     ******  "},
                      {"   **      **"},
                      {"   **        "},
                      {"     ****    "},
                      {"         **  "},
                      {" **      **  "},
                      {"   ******    "}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += S[i][0];
    }
}

void LetterT(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string T[7][1] = {
                      {"************"},
                      {"      *     "},
                      {"      *     "},
                      {"      *     "},
                      {"      *     "},
                      {"      *     "},
                      {"      *     "}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += T[i][0];
    }
}

void LetterU(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string U[7][1] = {
                      {"*          *"},
                      {"*          *"},
                      {"*          *"},
                      {"*          *"},
                      {"*          *"},
                      {"*          *"},
                      {" ********** "}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += U[i][0];
    }
}

void LetterV(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string V[7][1] = {
                      {"*           *"},
                      {" *         * "},
                      {"  *       *  "},
                      {"   *     *   "},
                      {"    *   *    "},
                      {"     * *     "},
                      {"      *      "}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += V[i][0];
    }
}

void LetterW(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string W[7][1] = {
                      {"*          *"},
                      {"*          *"},
                      {"*          *"},
                      {"*          *"},
                      {"*    **    *"},
                      {" *  *  *  * "},
                      {"  **    **  "}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += W[i][0];
    }
}

void LetterX(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string X[7][1] = {
                      {"*           *"},
                      {"  *       *  "},
                      {"    *   *    "},
                      {"      *      "},
                      {"    *   *    "},
                      {"  *       *  "},
                      {"*           *"}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += X[i][0];
    }
}

void LetterY(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string Y[7][1] = {
                      {"*           *"},
                      {"  *       *  "},
                      {"    *   *    "},
                      {"      *      "},
                      {"      *      "},
                      {"      *      "},
                      {"      *      "}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += Y[i][0];
    }
}

void LetterZ(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string Z[7][1] = {
                      {"***********"},
                      {"         * "},
                      {"       *   "},
                      {"     *     "},
                      {"   *       "},
                      {" *         "},
                      {"***********"}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += Z[i][0];
    }
}

void addSpace(string message[][NUM_COLUMNS])
{
    string space = "        ";
    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;
    }

}

void apostrophe(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string apostrophe[7][1] = {
                      {"   *****"},
                      {"  ***** "},
                      {" ****   "},
                      {"***     "},
                      {"        "},
                      {"        "},
                      {"        "}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += apostrophe[i][0];
    }
}

void exclamation(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string apostrophe[7][1] = {
                      {" ***** "},
                      {" ***** "},
                      {" ***** "},
                      {" ***** "},
                      {"       "},
                      {"  ***  "},
                      {"  ***  "}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += apostrophe[i][0];
    }
}

void question(string message[][NUM_COLUMNS])
{
    string space = "    ";
    string apostrophe[7][1] = {
                      {"  ***** "},
                      {"     ***"},
                      {"      **"},
                      {"     ***"},
                      {"  **** "},
                      {"        "},
                      {"  ***   "}
                      };

    for(int i = 0; i < 7; i++)
    {
        message[i][0] += space;

        message[i][0] += apostrophe[i][0];
    }
}


void setLetter(string messageArray[][NUM_COLUMNS],char charEntered)
{
    switch(charEntered)
        {
        case 'A':
            LetterA(messageArray);
            break;
        case 'B':
            LetterB(messageArray);
            break;
        case 'C':
            LetterC(messageArray);
            break;
        case 'D':
            LetterD(messageArray);
            break;
        case 'E':
            LetterE(messageArray);
            break;
        case 'F':
            LetterF(messageArray);
            break;
        case 'G':
            LetterG(messageArray);
            break;
        case 'H':
            LetterH(messageArray);
            break;
        case 'I':
            LetterI(messageArray);
            break;
        case 'J':
            LetterJ(messageArray);
            break;
         case 'K':
            LetterK(messageArray);
            break;
        case 'L':
            LetterL(messageArray);
            break;
        case 'M':
            LetterM(messageArray);
            break;
        case 'N':
            LetterN(messageArray);
            break;
        case 'O':
            LetterO(messageArray);
            break;
        case 'P':
            LetterP(messageArray);
            break;
        case 'Q':
            LetterQ(messageArray);
            break;
        case 'R':
            LetterR(messageArray);
            break;
        case 'S':
            LetterS(messageArray);
            break;
        case 'T':
            LetterT(messageArray);
            break;
        case 'U':
            LetterU(messageArray);
            break;
        case 'V':
            LetterV(messageArray);
            break;
        case 'W':
            LetterW(messageArray);
            break;
        case 'X':
            LetterX(messageArray);
            break;
        case 'Y':
            LetterY(messageArray);
            break;
        case 'Z':
            LetterZ(messageArray);
            break;
        case '\'':
            apostrophe(messageArray);
            break;
        case '!':
            exclamation(messageArray);
            break;
        case '?':
            question(messageArray);
            break;
        default:
            addSpace(messageArray);
            break;
            }
}