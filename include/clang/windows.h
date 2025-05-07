
// https://docs.microsoft.com/en-us/windows/win32/api/errhandlingapi/nf-errhandlingapi-seterrormode
#define SEM_FAILCRITICALERRORS 0x0001
__declspec(dllimport) __stdcall unsigned int SetErrorMode(unsigned int uMode);
// https://docs.microsoft.com/en-us/windows/console/setconsoleoutputcp
#define CP_UTF8 65001
__declspec(dllimport) __stdcall int SetConsoleOutputCP(unsigned int wCodePageID);
