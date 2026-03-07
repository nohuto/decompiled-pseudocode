PVOID __fastcall ViDeadlockKeReleaseSpinLockFromDpcLevel_Entry(__int64 a1)
{
  return VfDeadlockReleaseResource(*(LONG **)(a1 + 8), 5, (__int64)KeGetCurrentThread(), *(void **)a1);
}
