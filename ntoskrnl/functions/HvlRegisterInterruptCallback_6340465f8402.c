__int64 __fastcall HvlRegisterInterruptCallback(unsigned int a1, signed __int64 a2, _DWORD *a3)
{
  if ( a1 > 4 )
    return 3221225485LL;
  if ( !HvlHypervisorConnected )
    return 3221225659LL;
  if ( (__int64 (*)())_InterlockedCompareExchange64(
                        (volatile signed __int64 *)&HvlpInterruptCallback[a1],
                        a2,
                        (signed __int64)HvlDummyInterruptCallback) != HvlDummyInterruptCallback )
    return 3221225473LL;
  if ( a3 )
    *a3 = a1 + 48;
  return 0LL;
}
