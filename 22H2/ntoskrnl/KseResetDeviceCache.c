/*
 * XREFs of KseResetDeviceCache @ 0x140976B5C
 * Callers:
 *     KseQueryDeviceData @ 0x14080A580 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x1409769B0 (KseQueryDeviceDataList.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     KsepCacheReset @ 0x1409777CC (KsepCacheReset.c)
 */

__int64 KseResetDeviceCache()
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v1; // rcx
  volatile signed __int64 *v2; // rdi

  if ( dword_140C64E34 == 2 )
  {
    CurrentThread = KeGetCurrentThread();
    v1 = qword_140C64E78;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v1, 0LL);
    KsepCacheReset(qword_140C64E78);
    v2 = (volatile signed __int64 *)qword_140C64E78;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C64E78, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
