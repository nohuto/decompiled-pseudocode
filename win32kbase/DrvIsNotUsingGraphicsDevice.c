__int64 __fastcall DrvIsNotUsingGraphicsDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  unsigned int v6; // edx
  __int64 i; // rdi

  v5 = 0;
  if ( !IS_USERCRIT_OWNED_AT_ALL(a1, a2, a3, a4) )
    WdLogSingleEntry0(1LL);
  if ( !a1 )
    return 1LL;
  v6 = *(_DWORD *)(a1 + 20);
  if ( !v6 )
    return 1LL;
  for ( i = a1 + 40;
        (*(_DWORD *)(*(_QWORD *)i + 40LL) & 0x20000) != 0
     || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)i + 2552LL) + 160LL) & 0x2000000) != 0;
        i += 56LL )
  {
    if ( ++v5 >= v6 )
      return 1LL;
  }
  return 0LL;
}
