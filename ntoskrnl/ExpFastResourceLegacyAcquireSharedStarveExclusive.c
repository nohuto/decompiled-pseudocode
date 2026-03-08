/*
 * XREFs of ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x140608144
 * Callers:
 *     CcPinFileData @ 0x14021E620 (CcPinFileData.c)
 *     ExAcquireSharedStarveExclusive @ 0x1402DE340 (ExAcquireSharedStarveExclusive.c)
 * Callees:
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x1403C4374 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x1403C43D0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive2 @ 0x1404100C8 (ExpFastResourceLegacyAcquireSharedStarveExclusive2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char __fastcall ExpFastResourceLegacyAcquireSharedStarveExclusive(_WORD *BugCheckParameter2, char a2)
{
  _BYTE *OwnerEntryForLegacyShim; // rsi
  char v6; // bl

  if ( FeatureFastResource2 )
    return ExpFastResourceLegacyAcquireSharedStarveExclusive2(BugCheckParameter2, a2);
  OwnerEntryForLegacyShim = ExpAllocateOwnerEntryForLegacyShim();
  v6 = ExAcquireFastResourceSharedStarveExclusive((ULONG_PTR)BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim, a2);
  if ( !v6 )
    ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  return v6;
}
