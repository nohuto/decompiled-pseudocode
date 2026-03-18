/*
 * XREFs of SepDeReferenceSharedSidEntries @ 0x1409CE7E8
 * Callers:
 *     SepFreeTokenCapabilities @ 0x1402493D4 (SepFreeTokenCapabilities.c)
 * Callees:
 *     RtlRemoveEntryHashTable @ 0x1402069A0 (RtlRemoveEntryHashTable.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     SepFindSharedSidEntry @ 0x1409CECAC (SepFindSharedSidEntry.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall SepDeReferenceSharedSidEntries(PSID *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rbp
  __int64 SharedSidEntry; // rax
  void *v7; // rsi
  __int64 v8; // rcx
  ULONG_PTR v9; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(g_SepSidMapping, 0LL);
  if ( a2 )
  {
    v5 = a2;
    do
    {
      SharedSidEntry = SepFindSharedSidEntry(*a1);
      v7 = (void *)SharedSidEntry;
      v8 = _InterlockedDecrement64((volatile signed __int64 *)(SharedSidEntry + 24));
      if ( v8 <= 0 )
      {
        if ( v8 )
          __fastfail(0xEu);
        if ( RtlRemoveEntryHashTable(
               *(PRTL_DYNAMIC_HASH_TABLE *)(g_SepSidMapping + 8),
               (PRTL_DYNAMIC_HASH_TABLE_ENTRY)SharedSidEntry,
               0LL) )
        {
          ExFreePoolWithTag(v7, 0);
        }
      }
      a1 += 2;
      --v5;
    }
    while ( v5 );
  }
  v9 = g_SepSidMapping;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)g_SepSidMapping, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v9);
  KeAbPostRelease(v9);
  KeLeaveCriticalRegion();
}
