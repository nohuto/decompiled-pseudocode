PVOID __fastcall ViDeadlockExReleaseFastMutex_Entry(__int64 a1)
{
  return VfDeadlockReleaseResource(*(LONG **)(a1 + 8), 3, (__int64)KeGetCurrentThread(), *(void **)a1);
}
