/*
 * XREFs of DbgkpRemoveErrorPort @ 0x140937000
 * Callers:
 *     DbgkFlushErrorPort @ 0x1407E7AEC (DbgkFlushErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x14093730C (DbgkpSendErrorMessage.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1402992F0 (PdcCreateWatchdogAroundClientCall.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     DbgkpDereferenceErrorPort @ 0x140539768 (DbgkpDereferenceErrorPort.c)
 */

char __fastcall DbgkpRemoveErrorPort(__int64 a1, ULONG_PTR a2, volatile signed __int32 *a3)
{
  _UNKNOWN **v3; // rax
  int v7; // r14d
  __int64 v8; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v3 = &retaddr;
  if ( !_interlockedbittestandset(a3 + 1, 0) )
  {
    --*(_WORD *)(a1 + 484);
    v7 = 0;
    ExAcquirePushLockExclusiveEx(a2, 0LL);
    if ( *(volatile signed __int32 **)(a2 + 8) == a3 )
    {
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      v7 = 1;
      v8 = PdcCreateWatchdogAroundClientCall();
      if ( (void *)a2 == (char *)PsGetServerSiloGlobals(v8) + 968 )
        _interlockedbittestandreset((volatile signed __int32 *)(MmWriteableSharedUserData + 752), 0);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a2);
    KeAbPostRelease(a2);
    LOBYTE(v3) = KeLeaveCriticalRegionThread(a1);
    if ( v7 )
    {
      DbgkpDereferenceErrorPort(a3);
      LOBYTE(v3) = KeResetEvent(*(PRKEVENT *)(a2 + 24));
    }
  }
  return (char)v3;
}
