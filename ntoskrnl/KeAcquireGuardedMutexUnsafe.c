/*
 * XREFs of KeAcquireGuardedMutexUnsafe @ 0x140457790
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 */

void __stdcall KeAcquireGuardedMutexUnsafe(PKGUARDED_MUTEX FastMutex)
{
  ExAcquireFastMutexUnsafe(FastMutex);
}
