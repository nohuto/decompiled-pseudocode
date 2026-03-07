__int64 __fastcall GetPowerWatchdogTimeoutMsec(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v5; // ebx
  __int64 i; // rdi
  __int64 v7; // rax

  v4 = a1;
  v5 = 0;
  for ( i = 552LL; ; i += 24LL )
  {
    v7 = SGDGetUserSessionState(a1, a2, a3, a4);
    if ( *(_DWORD *)(v7 + i) == v4 )
      break;
    if ( (unsigned int)++v5 >= 5 )
      return 30000LL;
  }
  return *(unsigned int *)(v7 + i + 16);
}
