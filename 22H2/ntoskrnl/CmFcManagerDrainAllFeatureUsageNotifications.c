/*
 * XREFs of CmFcManagerDrainAllFeatureUsageNotifications @ 0x14087DB04
 * Callers:
 *     CmFcShutdownSystem @ 0x14086B1D4 (CmFcShutdownSystem.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x1407CAB10 (CmFcpManagerDrainUsageNotifications.c)
 */

_QWORD *CmFcManagerDrainAllFeatureUsageNotifications()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // r8
  __int64 v2; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C482C8, 0LL);
  CmFcpManagerDrainUsageNotifications((__int64)CmFcSystemManager, 1, v1);
  CmFcpManagerDrainUsageNotifications((__int64)CmFcSystemManager, 1, v2);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C482C8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140C482C8);
  KeAbPostRelease((ULONG_PTR)&stru_140C482C8);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
