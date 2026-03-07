char __fastcall ExpFastResourceLegacyAcquireSharedStarveExclusive2(_WORD *BugCheckParameter2, char a2)
{
  void *OwnerEntryForLegacyShim2; // rdi
  char v5; // bl

  OwnerEntryForLegacyShim2 = (void *)ExpAllocateOwnerEntryForLegacyShim2();
  v5 = ExAcquireFastResourceSharedStarveExclusive2(BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim2, a2);
  if ( !v5 || ExIsFastResourceHeldExclusive2((ULONG_PTR)BugCheckParameter2) )
    ExFreePoolWithTag(OwnerEntryForLegacyShim2, 0);
  return v5;
}
