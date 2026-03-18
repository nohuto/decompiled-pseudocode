/*
 * XREFs of EnterHandleFlagsCrit @ 0x1C00A9080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 EnterHandleFlagsCrit()
{
  return ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpHandleFlagsMutex);
}
