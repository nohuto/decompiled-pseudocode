PVOID __fastcall ViDeadlockExAcquireFastMutexUnsafe_Exit(__int64 a1)
{
  return VfDeadlockAcquireResource(*(LONG **)(a1 + 8), 4, (__int64)KeGetCurrentThread(), 0, *(PVOID *)a1);
}
