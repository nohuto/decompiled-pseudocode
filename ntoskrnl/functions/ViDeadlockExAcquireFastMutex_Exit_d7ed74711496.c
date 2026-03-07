PVOID __fastcall ViDeadlockExAcquireFastMutex_Exit(__int64 a1)
{
  return VfDeadlockAcquireResource(*(LONG **)(a1 + 8), 3, (__int64)KeGetCurrentThread(), 0, *(PVOID *)a1);
}
