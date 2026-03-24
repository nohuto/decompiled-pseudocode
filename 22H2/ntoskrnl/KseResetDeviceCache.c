/*
 * XREFs of KseResetDeviceCache @ 0x1408BF59C
 * Callers:
 *     KseQueryDeviceData @ 0x14075EC10 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x1408BF430 (KseQueryDeviceDataList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KsepCacheReset @ 0x1408C110C (KsepCacheReset.c)
 */

__int64 KseResetDeviceCache()
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v1; // rcx
  volatile signed __int64 *v2; // rdi

  if ( dword_140C505E4 == 2 )
  {
    CurrentThread = KeGetCurrentThread();
    v1 = qword_140C50628;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v1, 0LL);
    KsepCacheReset(qword_140C50628);
    v2 = (volatile signed __int64 *)qword_140C50628;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C50628, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return 0LL;
}
