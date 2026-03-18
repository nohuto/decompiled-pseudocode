/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x140803380
 * Callers:
 *     TlgRegisterAggregateProvider @ 0x140803364 (TlgRegisterAggregateProvider.c)
 *     CmpRegisterTraceLoggingProvider @ 0x140812368 (CmpRegisterTraceLoggingProvider.c)
 *     MmRegisterEtwProvider @ 0x140B385B0 (MmRegisterEtwProvider.c)
 *     EtwpInitialize @ 0x140B4B150 (EtwpInitialize.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408034B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     CreateTlgAggregateSession @ 0x140803550 (CreateTlgAggregateSession.c)
 *     ComputeFlushPeriod @ 0x140803684 (ComputeFlushPeriod.c)
 *     DestroyAggregateSession @ 0x140A6F188 (DestroyAggregateSession.c)
 */

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
    v9 = KeAbPreAcquire((__int64)&qword_140CF8580, 0LL);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140CF8580, 0LL);
    v11 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&qword_140CF8580, v9, (__int64)&qword_140CF8580);
    if ( v11 )
      *(_BYTE *)(v11 + 18) = 1;
    v12 = qword_140D17770;
    if ( !qword_140D17770 )
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140C068E8);
      v12 = qword_140D17770;
    }
    v13 = &qword_140D17770;
    while ( v12 )
    {
      if ( *(PVOID *)(v12 + 344) == CallbackContext )
        goto LABEL_14;
      v13 = (__int64 *)(v12 + 352);
      v12 = *(_QWORD *)(v12 + 352);
    }
    *v13 = (__int64)v7;
LABEL_14:
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140CF8580, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140CF8580);
    KeAbPostRelease((ULONG_PTR)&qword_140CF8580);
    return 0LL;
  }
}
