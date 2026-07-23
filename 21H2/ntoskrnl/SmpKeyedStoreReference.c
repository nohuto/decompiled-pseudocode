/*
 * XREFs of SmpKeyedStoreReference @ 0x1402874C0
 * Callers:
 *     SmpPageWrite @ 0x140288D9C (SmpPageWrite.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x140287698 (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreReference @ 0x14028A7A8 (SmKmStoreReference.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 */

__int64 __fastcall SmpKeyedStoreReference(volatile signed __int64 *BugCheckParameter2, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // esi
  __int64 v6; // rax
  __int64 v7; // rdi

  CurrentThread = KeGetCurrentThread();
  v3 = -1;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)BugCheckParameter2, 0LL);
  v6 = SmpKeyedStoreEntryGet((ULONG_PTR)BugCheckParameter2);
  v7 = v6;
  if ( v6 )
  {
    SmKmStoreReference(a2, *(unsigned __int16 *)(v6 + 16));
    v3 = *(unsigned __int16 *)(v7 + 16);
  }
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
  return v3;
}
