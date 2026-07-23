/*
 * XREFs of SmcCacheCreatePrepare @ 0x14092A874
 * Callers:
 *     SmcProcessCreateRequest @ 0x14092A940 (SmcProcessCreateRequest.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     SmRegistrationCtxStart @ 0x1407D1948 (SmRegistrationCtxStart.c)
 *     SmcCacheManagerStart @ 0x14092D6A4 (SmcCacheManagerStart.c)
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
    ExfTryToWakePushLock(&BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)&BugCheckParameter2);
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
