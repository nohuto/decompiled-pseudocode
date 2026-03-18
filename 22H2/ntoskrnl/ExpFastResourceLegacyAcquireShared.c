/*
 * XREFs of ExpFastResourceLegacyAcquireShared @ 0x1403C8284
 * Callers:
 *     ExAcquireResourceSharedLite @ 0x14023D660 (ExAcquireResourceSharedLite.c)
 *     SeAccessCheckByType @ 0x1402B3A90 (SeAccessCheckByType.c)
 *     SepMandatoryIntegrityCheck @ 0x1402B5E70 (SepMandatoryIntegrityCheck.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x140337F50 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140338340 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 * Callees:
 *     ExAcquireFastResourceShared @ 0x1403C8B20 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x1403C9224 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExpFastResourceLegacyAcquireShared2 @ 0x140414E98 (ExpFastResourceLegacyAcquireShared2.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

char __fastcall ExpFastResourceLegacyAcquireShared(ULONG_PTR BugCheckParameter2)
{
  void *OwnerEntryForLegacyShim; // rsi
  char v4; // bl

  if ( FeatureFastResource2 )
    return ExpFastResourceLegacyAcquireShared2(BugCheckParameter2);
  OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
  v4 = ExAcquireFastResourceShared(BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim);
  if ( !v4 )
    ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  return v4;
}
