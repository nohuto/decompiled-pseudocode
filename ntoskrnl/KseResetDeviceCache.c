/*
 * XREFs of KseResetDeviceCache @ 0x140973ABC
 * Callers:
 *     KseQueryDeviceData @ 0x1408016F0 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140973910 (KseQueryDeviceDataList.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     KsepCacheReset @ 0x14097472C (KsepCacheReset.c)
 */

__int64 KseResetDeviceCache()
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v1; // rcx
  volatile signed __int64 *v2; // rdi

  if ( dword_140C649B4 == 2 )
  {
    CurrentThread = KeGetCurrentThread();
    v1 = qword_140C649F8;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v1, 0LL);
    KsepCacheReset(qword_140C649F8);
    v2 = (volatile signed __int64 *)qword_140C649F8;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C649F8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
