__int64 __fastcall AuxKlibInitialize()
{
  unsigned int v0; // ebx
  unsigned int MajorVersion; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  MajorVersion = 0;
  if ( !AuxpInitState )
  {
    PsGetVersion(&MajorVersion, 0LL, 0LL, 0LL);
    if ( MajorVersion >= 5 )
    {
      AuxpKlibFns.QueryModuleInformationPtr = (int (__fastcall *)(unsigned int *, unsigned int, void *))MmGetSystemRoutineAddress(&QueryModuleInfoName);
      _InterlockedExchange((volatile __int32 *)&AuxpInitState, 1);
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return v0;
}
