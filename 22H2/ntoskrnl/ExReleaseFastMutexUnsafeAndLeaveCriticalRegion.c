/*
 * XREFs of ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x1403025C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseFastMutexUnsafe @ 0x1403025F0 (ExReleaseFastMutexUnsafe.c)
 */

_QWORD *__fastcall ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(struct _FAST_MUTEX *a1)
{
  ExReleaseFastMutexUnsafe(a1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
