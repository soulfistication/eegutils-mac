#include <cstdlib>
#include <iostream>

using namespace std;

typedef enum : int {
    P1,
    EG,
    P3,
    N4,
    EM
} ParadigmType;

int main(int argc, const char * argv[]) {

    char version[] = "1.3.4";
    
    cout << "GenMatrix ver. " << version << endl;
    
    ParadigmType requestedType = EM;
    
    if (argc != 2) {
        cout << "Usage: ./genmatrix <type>" << endl;
        cout << "<type> = P1 | EG | P3 | N4 | EM" << endl;
    } else {
        const char * type = argv[1];
        
        if (strcmp(type, "P1") == 0) {
            cout << "Requested type is: P1" << endl;
            requestedType = P1;
        } else if (strcmp(type, "EG") == 0) {
            cout << "Requested type is: EG" << endl;
            requestedType = EG;
        } else if (strcmp(type, "P3") == 0) {
            cout << "Requested type is: P3" << endl;
            requestedType = P3;
        } else if (strcmp(type, "N4") == 0) {
            cout << "Requested type is: N4" << endl;
            requestedType = N4;
        } else if (strcmp(type, "EM") == 0) {
            cout << "Requested type is: EM" << endl;
            requestedType = EM;
        } else {
            cout << "Paradigm type not recognized." << endl;
            return EXIT_FAILURE;
        }
    }
    
#ifdef _WIN32
    system("PAUSE");
#elif defined __APPLE__
    getchar();
#endif
    return EXIT_SUCCESS;
}
