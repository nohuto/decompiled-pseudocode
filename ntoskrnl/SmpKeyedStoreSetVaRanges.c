/*
 * XREFs of SmpKeyedStoreSetVaRanges @ 0x1402DBF24
 * Callers:
 *     SmStoreSetProcessVaRanges @ 0x1407658C4 (SmStoreSetProcessVaRanges.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     SmpKeyedStoreEntryGet @ 0x14035BDC0 (SmpKeyedStoreEntryGet.c)
 */

__int64 __fastcall SmpKeyedStoreSetVaRanges(volatile signed __int64 *BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // esi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)BugCheckParameter2, 0LL);
  v3 = SmpKeyedStoreEntryGet((ULONG_PTR)BugCheckParameter2) != 0 ? 0xFFFFFE96 : 0;
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
  return v3 - 1073741275;
}
