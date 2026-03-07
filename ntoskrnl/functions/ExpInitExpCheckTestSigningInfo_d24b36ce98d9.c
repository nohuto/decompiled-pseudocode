__int64 __fastcall ExpInitExpCheckTestSigningInfo(PRTL_RUN_ONCE RunOnce, PVOID Parameter, PVOID *Context)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v5 = 8LL;
  if ( (int)ZwQuerySystemInformation(103LL, (__int64)&v5) >= 0 )
  {
    v3 = 1;
    if ( (v5 & 0x200000000LL) != 0 )
      ExpTestSigningEnabled = 1;
  }
  return v3;
}
