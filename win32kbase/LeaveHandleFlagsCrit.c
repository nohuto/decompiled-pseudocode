/*
 * XREFs of LeaveHandleFlagsCrit @ 0x1C00A4FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 LeaveHandleFlagsCrit()
{
  return ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpHandleFlagsMutex);
}
