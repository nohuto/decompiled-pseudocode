PVOID __fastcall ViDeadlockKeAcquireInStackQueuedSpinLockRaiseToSynch_Exit(__int64 a1)
{
  return VfDeadlockAcquireResource(*(LONG **)(a1 + 16), 6, (__int64)KeGetCurrentThread(), 0, *(PVOID *)a1);
}
