signed __int64 __fastcall PsUpdateDiskCounters(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  volatile signed __int64 *v6; // r10
  signed __int64 result; // rax

  v6 = *(volatile signed __int64 **)(a1 + 2232);
  if ( v6 )
  {
    if ( a2 )
      _InterlockedExchangeAdd64(v6, a2);
    if ( a3 )
      _InterlockedExchangeAdd64(v6 + 1, a3);
    if ( a4 )
      _InterlockedExchangeAdd64(v6 + 2, a4);
    if ( a5 )
      _InterlockedExchangeAdd64(v6 + 3, a5);
    result = a6;
    if ( a6 )
      return _InterlockedExchangeAdd64(v6 + 4, a6);
  }
  return result;
}
