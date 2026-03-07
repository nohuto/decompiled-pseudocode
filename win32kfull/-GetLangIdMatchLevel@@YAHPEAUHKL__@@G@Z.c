__int64 __fastcall GetLangIdMatchLevel(HKL a1, unsigned __int16 a2)
{
  unsigned int v3; // ebx
  __int64 ArbitraryUserPointer_low; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax

  v3 = 0;
  if ( !a2 )
    return 3LL;
  if ( ((**(_DWORD **)(gptiCurrent + 480LL) >> 9) & 1) != 0 && (WORD1(a1) & 0xF000) != 0xE000 )
    return 0LL;
  if ( (_WORD)a1 == a2 )
    return 3LL;
  ArbitraryUserPointer_low = LODWORD(KeGetPcr()->NtTib.Self[4].ArbitraryUserPointer);
  if ( (_WORD)ArbitraryUserPointer_low == a2 )
    return 2LL;
  if ( !*(_DWORD *)(SGDGetUserSessionState(ArbitraryUserPointer_low) + 13964) )
  {
    v7 = SGDGetUserSessionState(v6);
    ZwQueryDefaultLocale(0, (PLCID)(v7 + 13964));
  }
  LOBYTE(v3) = *(_WORD *)(SGDGetUserSessionState(v6) + 13964) == a2;
  return v3;
}
