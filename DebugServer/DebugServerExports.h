// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the DEBUGSERVER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// DEBUGSERVER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef DEBUGSERVER_EXPORTS
#define DEBUGSERVER_API __declspec(dllexport)
#else
#define DEBUGSERVER_API __declspec(dllimport)
#endif

extern "C" {

DEBUGSERVER_API bool InitDebugger(const char*);

};
