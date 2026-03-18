/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x140828004
 * Callers:
 *     TlgRegisterAggregateProvider @ 0x140827FE8 (TlgRegisterAggregateProvider.c)
 *     CmpRegisterTraceLoggingProvider @ 0x14084F7E4 (CmpRegisterTraceLoggingProvider.c)
 *     MmRegisterEtwProvider @ 0x140B01800 (MmRegisterEtwProvider.c)
 *     EtwpInitialize @ 0x140B0433C (EtwpInitialize.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1406D2264 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ComputeFlushPeriod @ 0x140828134 (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x1408281D8 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x140A31C78 (DestroyAggregateSession.c)
 */

__int64 __fastcall TlgRegisterAggregateProviderEx(char *CallbackContext, __int64 a2, __int64 a3)
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
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(CallbackContext, v3, a3);
  *(_QWORD *)(TlgAggregateSession + 328) = v3;
  *(_QWORD *)(TlgAggregateSession + 336) = a3;
  *(_QWORD *)(TlgAggregateSession + 344) = CallbackContext;
  *(_BYTE *)(TlgAggregateSession + 373) = 0;
  *(_DWORD *)(TlgAggregateSession + 368) = ComputeFlushPeriod(TlgAggregateSession);
  v8 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
         CallbackContext,
         (__int64)TlgAggregateInternalRegisteredProviderEtwCallback,
         (__int64)v7);
  if ( v8 < 0 )
  {
    *((_QWORD *)CallbackContext + 5) = 0LL;
    DestroyAggregateSession(v7);
    return (unsigned int)v8;
  }
  else
  {
    v9 = KeAbPreAcquire((__int64)&qword_140CE21E0, 0LL);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140CE21E0, 0LL);
    v11 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&qword_140CE21E0, v9, (__int64)&qword_140CE21E0);
    if ( v11 )
      *(_BYTE *)(v11 + 18) = 1;
    v12 = qword_140D010B8;
    if ( !qword_140D010B8 )
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
        (char *)&dword_140C06890,
        (__int64)TlgAggregateInternalProviderCallback,
        0LL);
      v12 = qword_140D010B8;
    }
    v13 = &qword_140D010B8;
    while ( v12 )
    {
      if ( *(char **)(v12 + 344) == CallbackContext )
        goto LABEL_14;
      v13 = (__int64 *)(v12 + 352);
      v12 = *(_QWORD *)(v12 + 352);
    }
    *v13 = (__int64)v7;
LABEL_14:
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140CE21E0, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
      ExfTryToWakePushLock(&qword_140CE21E0);
    KeAbPostRelease((ULONG_PTR)&qword_140CE21E0);
    return 0LL;
  }
}
