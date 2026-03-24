/*
 * XREFs of PspNotifyServerSiloTermination @ 0x14090B934
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x140905FB0 (PspCompleteServerSiloShutdownDeferred.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     PspGetServerSiloStatePointer @ 0x140580EE8 (PspGetServerSiloStatePointer.c)
 *     PspGetNextMonitor @ 0x14090B6F8 (PspGetNextMonitor.c)
 *     PspInvokeTerminateCallback @ 0x14090B720 (PspInvokeTerminateCallback.c)
 *     EtwTraceJobServerSiloStateChange @ 0x14093606C (EtwTraceJobServerSiloStateChange.c)
 */

_QWORD *__fastcall PspNotifyServerSiloTermination(__int64 a1)
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
