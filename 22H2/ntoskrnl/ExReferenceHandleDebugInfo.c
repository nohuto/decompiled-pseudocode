/*
 * XREFs of ExReferenceHandleDebugInfo @ 0x1409F9188
 * Callers:
 *     NtQueryInformationProcess @ 0x1406FCB40 (NtQueryInformationProcess.c)
 *     ExpUpdateDebugInfo @ 0x1409F9308 (ExpUpdateDebugInfo.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
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
