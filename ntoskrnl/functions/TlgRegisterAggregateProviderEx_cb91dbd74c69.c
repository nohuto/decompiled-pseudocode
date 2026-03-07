__int64 __fastcall TlgRegisterAggregateProviderEx(PVOID CallbackContext, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 TlgAggregateSession; // rax
  void *v7; // rbx
  int v8; // esi
  __int64 v9; // rax
  signed __int8 v10; // cf
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 *v13; // rcx
  char v14; // al

  v3 = a2;
  LOBYTE(a2) = 1;
  TlgAggregateSession = CreateTlgAggregateSession(0LL, a2);
  v7 = (void *)TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(CallbackContext);
  *(_QWORD *)(TlgAggregateSession + 328) = v3;
  *(_QWORD *)(TlgAggregateSession + 336) = a3;
  *(_QWORD *)(TlgAggregateSession + 344) = CallbackContext;
  *(_BYTE *)(TlgAggregateSession + 373) = 0;
  *(_DWORD *)(TlgAggregateSession + 368) = ComputeFlushPeriod(TlgAggregateSession, 1LL);
  v8 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(CallbackContext);
  if ( v8 < 0 )
  {
    *((_QWORD *)CallbackContext + 5) = 0LL;
    DestroyAggregateSession(v7);
    return (unsigned int)v8;
  }
  else
  {
    v9 = KeAbPreAcquire((__int64)&qword_140CF81C0, 0LL);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140CF81C0, 0LL);
    v11 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&qword_140CF81C0, v9, (__int64)&qword_140CF81C0);
    if ( v11 )
      *(_BYTE *)(v11 + 18) = 1;
    v12 = qword_140D173B0;
    if ( !qword_140D173B0 )
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140C068F8);
      v12 = qword_140D173B0;
    }
    v13 = &qword_140D173B0;
    while ( v12 )
    {
      if ( *(PVOID *)(v12 + 344) == CallbackContext )
        goto LABEL_14;
      v13 = (__int64 *)(v12 + 352);
      v12 = *(_QWORD *)(v12 + 352);
    }
    *v13 = (__int64)v7;
LABEL_14:
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140CF81C0, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140CF81C0);
    KeAbPostRelease((ULONG_PTR)&qword_140CF81C0);
    return 0LL;
  }
}
