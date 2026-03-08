/*
 * XREFs of EtwpFlushCoverage @ 0x1409E5BAC
 * Callers:
 *     EtwShutdown @ 0x1409DFD2C (EtwShutdown.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     EtwpCoverageFlushPending @ 0x140799B84 (EtwpCoverageFlushPending.c)
 */

char EtwpFlushCoverage()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  _DWORD *v3; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
  EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
  if ( EtwpCoverageContext )
    EtwpCoverageFlushPending((int **)EtwpCoverageContext, v1, v2, v3);
  EtwpCoverageLockOwner = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
  KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
