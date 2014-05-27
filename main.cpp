// Binary tables and conversion dec to bin
//
//  Created by Daniel Sodkiewicz on 5/26/14.
//  Copyright (c) 2014 Daniel Sodkiewicz. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{

    
    int value = 8;     // value to convert to binnary
    __int64_t one = 1;  // http://msdn.microsoft.com/en-us/library/29dh1w7z.aspx
                        // by using ont64 you can have a very long binnary number
    int width = 8;     // how long bin number, it should match
    int result;
        
        for (int i = width ; i >= 0; --i)
        {
            result = ((one << i) & value) ? 1 : 0;
            //  "<<" moved bit 1 to the left (bitshifting)
            // http://en.wikipedia.org/wiki/Bitwise_operation#Bit_shifts
            // for example:
            // 00001000 << 1 = 00010000
            // 00001111 << 2 = 00111100
            //
            // while "&" compares numbers by bits
            
            cout<<result;
        }
    
    
    
    // binnary table
    cout << endl  << "----------" << endl << endl;
    int end = 10;
    int stringwidth = 4;
    for(int loop = 0; loop<=end; loop++)
    {
        for (int i = stringwidth ; i >= 0; --i)
        {
            result = ((one << i) & loop) ? 1 : 0;
        
            cout<<result;
        }
        cout << endl;
    }

    return 0;
}

