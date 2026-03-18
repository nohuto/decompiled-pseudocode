/*
 * XREFs of SmcCacheRemove @ 0x1409DAF10
 * Callers:
 *     SmcCacheDelete @ 0x1409DAC2C (SmcCacheDelete.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x14030A210 (ExWaitForRundownProtectionRelease.c)
 */

struct _EX_RUNDOWN_REF __fastcall SmcCacheRemove(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v4; // rsi
  struct _EX_RUNDOWN_REF v5; // r14

  CurrentThread = KeGetCurrentThread();
  v4 = (struct _EX_RUNDOWN_REF *)(a1 + 32LL * (a2 & 0xF));
  --CurrentThread->KernelApcDisable;
  v5.Count = 0LL;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&v4[2], 0LL);
  if ( a2 >> 4 == (v4[3].Count & 0xFFF) && v4->Count )
  {
    ExWaitForRundownProtectionRelease(v4 + 1);
    v5.Count = v4->Count;
    v4->Count = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v4[2], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&v4[2]);
  KeAbPostRelease((ULONG_PTR)&v4[2]);
  KeLeaveCriticalRegion();
  return v5;
}
