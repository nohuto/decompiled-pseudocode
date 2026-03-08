/*
 * XREFs of ExReferenceHandleDebugInfo @ 0x1409F62F8
 * Callers:
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 *     ExpUpdateDebugInfo @ 0x1409F6478 (ExpUpdateDebugInfo.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

volatile signed __int32 *__fastcall ExReferenceHandleDebugInfo(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int64 *v2; // rsi
  volatile signed __int32 *v4; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = (volatile signed __int64 *)(a1 + 56);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v4 = *(volatile signed __int32 **)(a1 + 96);
  if ( v4 )
    _InterlockedIncrement(v4);
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v4;
}
