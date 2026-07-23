/*
 * XREFs of PsIsDiskCountersEnabled @ 0x1403CAD20
 * Callers:
 *     ExpPcwHostCallback @ 0x1407CC580 (ExpPcwHostCallback.c)
 * Callees:
 *     <none>
 */

bool PsIsDiskCountersEnabled()
{
  return PsDisableDiskCounters == 0;
}
