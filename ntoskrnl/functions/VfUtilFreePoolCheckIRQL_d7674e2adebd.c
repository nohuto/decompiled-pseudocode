void __fastcall VfUtilFreePoolCheckIRQL(struct _SLIST_ENTRY *a1)
{
  VfPoolDelayFreeIfPossible(a1, KeGetCurrentIrql() != 2);
}
