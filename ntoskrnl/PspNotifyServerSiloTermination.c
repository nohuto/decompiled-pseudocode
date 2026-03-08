/*
 * XREFs of PspNotifyServerSiloTermination @ 0x1409B147C
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409A9B20 (PspCompleteServerSiloShutdownDeferred.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     PspGetServerSiloStatePointer @ 0x1405A14C4 (PspGetServerSiloStatePointer.c)
 *     PspGetNextMonitor @ 0x1409B1240 (PspGetNextMonitor.c)
 *     PspInvokeTerminateCallback @ 0x1409B1268 (PspInvokeTerminateCallback.c)
 *     EtwTraceJobServerSiloStateChange @ 0x1409E27EC (EtwTraceJobServerSiloStateChange.c)
 */

char __fastcall PspNotifyServerSiloTermination(__int64 a1)
{
  __int64 ServerSiloStatePointer; // rax
  struct _KTHREAD *CurrentThread; // rdx
  _DWORD *v4; // rsi
  __int64 *i; // rax
  __int64 **v6; // rbx

  ServerSiloStatePointer = PspGetServerSiloStatePointer(a1);
  CurrentThread = KeGetCurrentThread();
  v4 = (_DWORD *)ServerSiloStatePointer;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PspSiloMonitorLock, 0LL);
  if ( *v4 != 3 )
    __fastfail(5u);
  for ( i = PspGetNextMonitor(0LL); ; i = PspGetNextMonitor(v6) )
  {
    v6 = (__int64 **)i;
    if ( !i )
      break;
    if ( i[4] )
      PspInvokeTerminateCallback(a1, (__int64)i);
  }
  *v4 = 4;
  EtwTraceJobServerSiloStateChange(a1, 4LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
