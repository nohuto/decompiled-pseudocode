/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1407A501C
 * Callers:
 *     CmpRegisterTraceLoggingProvider @ 0x14079E49C (CmpRegisterTraceLoggingProvider.c)
 *     TlgRegisterAggregateProvider @ 0x1407A5000 (TlgRegisterAggregateProvider.c)
 *     EtwpInitialize @ 0x140A41844 (EtwpInitialize.c)
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14078CF94 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ComputeFlushPeriod @ 0x1407A514C (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x1407A51F0 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x140980028 (DestroyAggregateSession.c)
 */

__int64 __fastcall TlgRegisterAggregateProviderEx(
        ULONGLONG *CallbackContext,
        unsigned __int16 *a2,
        unsigned __int16 *a3)
{
  unsigned __int16 *v3; // rbp
  __int64 TlgAggregateSession; // rax
  unsigned __int16 *v7; // rbx
  int v8; // edi
  __int64 v9; // rax
  signed __int8 v10; // cf
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 *v13; // rcx
  char v14; // al

  v3 = a2;
  LOBYTE(a2) = 1;
  TlgAggregateSession = CreateTlgAggregateSession(0LL, a2);
  v7 = (unsigned __int16 *)TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(CallbackContext, v3, a3);
  *(_QWORD *)(TlgAggregateSession + 328) = v3;
  *(_QWORD *)(TlgAggregateSession + 336) = a3;
  *(_QWORD *)(TlgAggregateSession + 344) = CallbackContext;
  *(_BYTE *)(TlgAggregateSession + 373) = 0;
  *(_DWORD *)(TlgAggregateSession + 368) = ComputeFlushPeriod(TlgAggregateSession);
  v8 = TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
         CallbackContext,
         (unsigned __int16 *)TlgAggregateInternalRegisteredProviderEtwCallback,
         v7);
  if ( v8 < 0 )
  {
    DestroyAggregateSession(v7);
    return (unsigned int)v8;
  }
  else
  {
    v9 = KeAbPreAcquire((ULONG_PTR)&qword_140CDB6D0, 0LL, 0);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140CDB6D0, 0LL);
    v11 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&qword_140CDB6D0, v9, (ULONG_PTR)&qword_140CDB6D0);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    v12 = qword_140CF4BA0;
    if ( !qword_140CF4BA0 )
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
        (ULONGLONG *)&dword_140C047C8,
        (unsigned __int16 *)TlgAggregateInternalProviderCallback,
        0LL);
      v12 = qword_140CF4BA0;
    }
    v13 = &qword_140CF4BA0;
    while ( v12 )
    {
      if ( *(ULONGLONG **)(v12 + 344) == CallbackContext )
        goto LABEL_14;
      v13 = (__int64 *)(v12 + 352);
      v12 = *(_QWORD *)(v12 + 352);
    }
    *v13 = (__int64)v7;
LABEL_14:
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140CDB6D0, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140CDB6D0);
    KeAbPostRelease((ULONG_PTR)&qword_140CDB6D0);
    return 0LL;
  }
}
