/*
 * XREFs of SmcCacheCreatePrepare @ 0x14092A764
 * Callers:
 *     SmcProcessCreateRequest @ 0x14092A830 (SmcProcessCreateRequest.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     SmRegistrationCtxStart @ 0x1407D16F8 (SmRegistrationCtxStart.c)
 *     SmcCacheManagerStart @ 0x14092D594 (SmcCacheManagerStart.c)
 */

__int64 __fastcall SmcCacheCreatePrepare(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // edi

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&BugCheckParameter2, 0LL);
  if ( (dword_140D24140 & 8) == 0 )
  {
    v2 = SmRegistrationCtxStart((struct _DMA_ADAPTER **)&qword_140D243F0);
    if ( v2 >= 0 )
      dword_140D24140 |= 8u;
  }
  if ( (dword_140D24140 & 4) == 0 && (dword_140D24140 & 8) != 0 )
  {
    v2 = SmcCacheManagerStart(a1, qword_140D243F0);
    if ( v2 >= 0 )
      dword_140D24140 |= 4u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)&BugCheckParameter2);
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
