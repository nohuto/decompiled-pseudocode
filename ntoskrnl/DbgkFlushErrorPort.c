/*
 * XREFs of DbgkFlushErrorPort @ 0x1407E7AEC
 * Callers:
 *     PspExitProcess @ 0x1407E7B3C (PspExitProcess.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PsGetProcessServerSilo @ 0x1402637E0 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     DbgkpDereferenceErrorPort @ 0x140539768 (DbgkpDereferenceErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x140937000 (DbgkpRemoveErrorPort.c)
 */

char __fastcall DbgkFlushErrorPort(__int64 a1)
{
  __int64 ProcessServerSilo; // rax
  _QWORD *ServerSiloGlobals; // rax
  signed __int64 *v4; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  volatile signed __int32 *v6; // rdi

  ProcessServerSilo = PsGetProcessServerSilo(a1);
  ServerSiloGlobals = PsGetServerSiloGlobals(ProcessServerSilo);
  v4 = ServerSiloGlobals + 121;
  if ( a1 == ServerSiloGlobals[123] )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0LL;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(ServerSiloGlobals + 121), 0LL);
    if ( a1 == v4[2] )
    {
      v6 = (volatile signed __int32 *)v4[1];
      _InterlockedIncrement(v6);
    }
    if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4);
    KeAbPostRelease((ULONG_PTR)v4);
    LOBYTE(ServerSiloGlobals) = KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( v6 )
    {
      DbgkpRemoveErrorPort(CurrentThread, v4, v6);
      LOBYTE(ServerSiloGlobals) = DbgkpDereferenceErrorPort(v6);
    }
  }
  return (char)ServerSiloGlobals;
}
