/*
 * XREFs of LeaveHandleFlagsCrit @ 0x1C0095C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 LeaveHandleFlagsCrit()
{
  return ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpHandleFlagsMutex);
}
