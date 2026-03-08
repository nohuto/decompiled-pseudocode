/*
 * XREFs of KeTryToAcquireGuardedMutex @ 0x1402D5420
 * Callers:
 *     <none>
 * Callees:
 *     ExTryToAcquireFastMutex @ 0x1402D5440 (ExTryToAcquireFastMutex.c)
 */

BOOLEAN __stdcall KeTryToAcquireGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  return ExTryToAcquireFastMutex(Mutex);
}
