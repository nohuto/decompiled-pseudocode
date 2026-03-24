/*
 * XREFs of EnterHandleFlagsCrit @ 0x1C0095C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 EnterHandleFlagsCrit()
{
  return ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpHandleFlagsMutex);
}
