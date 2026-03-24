/*
 * XREFs of LeavePowerCrit @ 0x1C0077C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 LeavePowerCrit()
{
  return ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
}
