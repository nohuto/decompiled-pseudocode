/*
 * XREFs of ExpFastResourceLegacyAcquireExclusive @ 0x1403C4310
 * Callers:
 *     CcAcquireByteRangeForWrite @ 0x14021A220 (CcAcquireByteRangeForWrite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x1402C9FA0 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 *     ExTryToAcquireResourceExclusiveLite @ 0x1406086B0 (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x1403C4374 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExAcquireFastResourceExclusive @ 0x1403C48B0 (ExAcquireFastResourceExclusive.c)
 *     ExpFastResourceLegacyAcquireExclusive2 @ 0x140410050 (ExpFastResourceLegacyAcquireExclusive2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char __fastcall ExpFastResourceLegacyAcquireExclusive(ULONG_PTR BugCheckParameter2)
{
  void *OwnerEntryForLegacyShim; // rsi
  char v4; // bl

  if ( FeatureFastResource2 )
    return ExpFastResourceLegacyAcquireExclusive2();
  OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
  v4 = ExAcquireFastResourceExclusive(BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim);
  if ( !v4 )
    ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  return v4;
}
