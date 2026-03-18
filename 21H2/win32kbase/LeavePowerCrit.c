/*
 * XREFs of LeavePowerCrit @ 0x1C007E730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 LeavePowerCrit()
{
  return ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
}
