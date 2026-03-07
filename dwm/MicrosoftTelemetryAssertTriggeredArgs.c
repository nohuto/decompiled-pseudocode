int __fastcall MicrosoftTelemetryAssertTriggeredArgs(__int64 a1, int a2, int a3)
{
  FARPROC ProcAddress; // rax
  int v7; // [rsp+20h] [rbp-40h] BYREF
  struct HINSTANCE__ *v8; // [rsp+28h] [rbp-38h]
  void *v9; // [rsp+30h] [rbp-30h]
  char v10; // [rsp+38h] [rbp-28h]
  const char *v11; // [rsp+40h] [rbp-20h]
  int v12; // [rsp+48h] [rbp-18h]
  int v13; // [rsp+4Ch] [rbp-14h]
  char v14; // [rsp+50h] [rbp-10h]
  void *retaddr; // [rsp+68h] [rbp+8h]
  HMODULE phModule; // [rsp+70h] [rbp+10h] BYREF

  phModule = 0LL;
  LODWORD(ProcAddress) = GetModuleHandleExA(2u, "ntdll.dll", &phModule);
  if ( (_DWORD)ProcAddress )
  {
    if ( phModule )
    {
      ProcAddress = GetProcAddress(phModule, "MicrosoftTelemetryAssertTriggeredUM");
      if ( ProcAddress )
      {
        v7 = 11;
        v8 = &_ImageBase;
        v9 = retaddr;
        v11 = "dwm.exe";
        v14 = 1;
        v10 = 1;
        v12 = a2;
        v13 = a3;
        LODWORD(ProcAddress) = ((__int64 (__fastcall *)(int *))ProcAddress)(&v7);
      }
    }
  }
  return (int)ProcAddress;
}
