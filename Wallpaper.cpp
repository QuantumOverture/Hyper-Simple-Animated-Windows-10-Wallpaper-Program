#include <windows.h>
#include <string>





int main() {
	
	int counter = 0;
	while(true){
	if(counter == 10){
		counter = 0;
	}
	
    std::string s = "C:\\Users\\<YOUR SYSTEM USERNAME HERE>\\Downloads\\waves\\frame_"+std::to_string(counter)+"_delay-0.1s.gif";
	
    SystemParametersInfoA(SPI_SETDESKWALLPAPER, 0, (PVOID*)s.c_str(), SPIF_SENDCHANGE);
	
	Sleep(100);
	
	counter++;
	
	}
    return 0;
}
