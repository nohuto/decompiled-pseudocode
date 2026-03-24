/*
 * XREFs of SetPendingInput @ 0x1C0077090
 * Callers:
 *     UserPowerInfoCallout @ 0x1C004FC50 (UserPowerInfoCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetPendingInput(int a1)
{
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
  if ( !gbPendingSleepInput )
  {
    gPendingSleepInputReason = a1;
    gbPendingSleepInput = 1;
  }
  return ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
}
