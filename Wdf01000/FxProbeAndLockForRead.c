__int64 __fastcall FxProbeAndLockForRead(_MDL *Mdl, char a2)
{
  MmProbeAndLockPages(Mdl, 1, IoReadAccess);
  return 0LL;
}
