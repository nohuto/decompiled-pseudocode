__int64 __fastcall MmProbeAndLockPagesPrivate(_DWORD *a1)
{
  return MiProbeAndLockPages(a1, 1, 3);
}
