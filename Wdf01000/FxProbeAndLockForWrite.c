__int64 __fastcall FxProbeAndLockForWrite(_MDL *Mdl, char a2)
{
  MmProbeAndLockPages(Mdl, 1, IoWriteAccess);
  return 0LL;
}
