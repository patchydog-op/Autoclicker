#include<stdio.h>
#include<windows.h>

int main(){
while(1)
{
    if (GetKeyState(VK_ESCAPE)&8000){
    break;
   }
if(GetAsyncKeyState(VK_OEM_3)& 0x8000){
       mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0); 
    Sleep(10); 
        mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
    }
}
 return 0;


}