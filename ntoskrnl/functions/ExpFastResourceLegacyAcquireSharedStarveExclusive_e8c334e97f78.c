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
