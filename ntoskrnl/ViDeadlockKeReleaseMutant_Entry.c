PVOID __fastcall ViDeadlockKeReleaseMutant_Entry(__int64 a1)
{
  return VfDeadlockReleaseResource(
           *(LONG **)(a1 + 16),
           (unsigned int)(*(_BYTE *)(a1 + 9) != 0) + 1,
           (__int64)KeGetCurrentThread(),
           *(void **)a1);
}
