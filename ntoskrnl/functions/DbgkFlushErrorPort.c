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
