__int64 __fastcall KiForceIdleParkUnparkProcessor(__int64 a1, char a2)
{
  int v3; // edx
  wchar_t *v4; // rcx
  __int64 result; // rax
  int v6; // edx
  __int64 v7; // rdx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 34060) )
    {
      if ( !*(_BYTE *)(a1 + 33659) )
        goto LABEL_7;
      v3 = *(_DWORD *)(a1 + 36);
      v4 = KiForceIdleSoftParkRestoreMask;
    }
    else
    {
      v3 = *(_DWORD *)(a1 + 36);
      v4 = KiForceIdleUnparkRestoreMask;
    }
    KeInterlockedSetProcessorAffinityEx((__int64)v4, v3);
    result = KeTransitionProcessorParkState(a1, 1LL);
LABEL_7:
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    {
      do
      {
        KeYieldProcessorEx(&v8);
        result = *(_QWORD *)(a1 + 48);
      }
      while ( result );
    }
    *(_BYTE *)(a1 + 13241) = 0;
    *(_BYTE *)(a1 + 13243) = 0;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    return result;
  }
  v6 = *(_DWORD *)(a1 + 36);
  if ( *(_BYTE *)(a1 + 33659) )
  {
    KeInterlockedClearProcessorAffinityEx((__int64)KiForceIdleSoftParkRestoreMask, v6);
    v7 = 2LL;
  }
  else
  {
    KeInterlockedClearProcessorAffinityEx((__int64)KiForceIdleUnparkRestoreMask, v6);
    v7 = 0LL;
  }
  return KeTransitionProcessorParkState(a1, v7);
}
