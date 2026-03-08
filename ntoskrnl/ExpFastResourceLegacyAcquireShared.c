/*
 * XREFs of ExpFastResourceLegacyAcquireShared @ 0x1403C33D4
 * Callers:
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     SepMandatoryIntegrityCheck @ 0x140263A50 (SepMandatoryIntegrityCheck.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x1402CCA50 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1402CD140 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     SeAccessCheckByType @ 0x14033BB40 (SeAccessCheckByType.c)
 * Callees:
 *     ExAcquireFastResourceShared @ 0x1403C3C70 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x1403C4374 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExpFastResourceLegacyAcquireShared2 @ 0x140410068 (ExpFastResourceLegacyAcquireShared2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
