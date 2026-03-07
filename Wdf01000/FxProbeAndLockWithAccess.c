__int64 __fastcall FxProbeAndLockWithAccess(_MDL *Mdl, char Operation, _LOCK_OPERATION a3)
{
  MmProbeAndLockPages(Mdl, 0, a3);
  return 0LL;
}
