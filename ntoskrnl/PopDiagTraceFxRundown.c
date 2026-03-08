/*
 * XREFs of PopDiagTraceFxRundown @ 0x140586438
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C24C4 (PopCaptureSleepStudyStatistics.c)
 *     PopDiagTraceControlCallback @ 0x14085EC40 (PopDiagTraceControlCallback.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     PopFxTraceDeviceRegistration @ 0x140837C28 (PopFxTraceDeviceRegistration.c)
 *     PopDiagTraceFxPluginRegistration @ 0x14084D450 (PopDiagTraceFxPluginRegistration.c)
 *     PopDiagTraceDeviceVerboseRundown @ 0x14098B3E8 (PopDiagTraceDeviceVerboseRundown.c)
 */

char __fastcall PopDiagTraceFxRundown(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r8
  ULONG_PTR *i; // rbx
  __int64 v5; // rdx
  ULONG_PTR *j; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !a1 )
  {
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxPluginLock, 0LL);
    for ( i = (ULONG_PTR *)PopFxPluginList; i != &PopFxPluginList; i = (ULONG_PTR *)*i )
    {
      LOBYTE(v3) = 1;
      PopDiagTraceFxPluginRegistration(i, i[3], v3);
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
    KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
  }
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  for ( j = (ULONG_PTR *)PopFxDeviceList; j != &PopFxDeviceList; j = (ULONG_PTR *)*j )
  {
    if ( j[6] )
    {
      if ( !a1 )
      {
        LOBYTE(v5) = 1;
        PopFxTraceDeviceRegistration(j, v5);
      }
      PopDiagTraceDeviceVerboseRundown(j, a1);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
