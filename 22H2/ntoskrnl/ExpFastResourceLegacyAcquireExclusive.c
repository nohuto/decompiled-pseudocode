/*
 * XREFs of ExpFastResourceLegacyAcquireExclusive @ 0x1403C91C0
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     CcAcquireByteRangeForWrite @ 0x14029CF10 (CcAcquireByteRangeForWrite.c)
 *     ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x140334360 (ExEnterCriticalRegionAndAcquireResourceExclusive.c)
 *     ExTryToAcquireResourceExclusiveLite @ 0x14060AB00 (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x1403C9224 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExAcquireFastResourceExclusive @ 0x1403C9760 (ExAcquireFastResourceExclusive.c)
 *     ExpFastResourceLegacyAcquireExclusive2 @ 0x140414E80 (ExpFastResourceLegacyAcquireExclusive2.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
