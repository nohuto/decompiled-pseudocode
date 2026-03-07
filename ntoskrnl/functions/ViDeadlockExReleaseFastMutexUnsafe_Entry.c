PVOID __fastcall ViDeadlockExReleaseFastMutexUnsafe_Entry(__int64 a1)
{
  return VfDeadlockReleaseResource(*(LONG **)(a1 + 8), 4, (__int64)KeGetCurrentThread(), *(void **)a1);
}
