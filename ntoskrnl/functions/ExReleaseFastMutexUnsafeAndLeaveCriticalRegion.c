__int64 __fastcall ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(struct _FAST_MUTEX *a1)
{
  ExReleaseFastMutexUnsafe(a1);
  return KeLeaveCriticalRegionThread(KeGetCurrentThread());
}
