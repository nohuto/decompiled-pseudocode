/*
 * XREFs of TryLockShutdownShared @ 0x140875DC0
 * Callers:
 *     CmpSyncNextBackupHive @ 0x1408715C0 (CmpSyncNextBackupHive.c)
 * Callees:
 *     ExfTryAcquirePushLockShared @ 0x140208080 (ExfTryAcquirePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x14020AFB0 (KeAbPostReleaseEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 */

char TryLockShutdownShared()
{
  struct _KTHREAD *CurrentThread; // rax
  PRTL_BALANCED_NODE v1; // rdi
  char v2; // bl
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&CmpShutdownLock, 0LL, 1);
  v2 = 0;
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&CmpShutdownLock, 17LL, 0LL)
    || ExfTryAcquirePushLockShared(&CmpShutdownLock) )
  {
    if ( v1 )
      BYTE2(v1[1].Left) |= 1u;
    return 1;
  }
  else
  {
    if ( v1 )
      KeAbPostReleaseEx((ULONG_PTR)&CmpShutdownLock, (ULONG_PTR)v1);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v3, v4, v5);
  }
  return v2;
}
