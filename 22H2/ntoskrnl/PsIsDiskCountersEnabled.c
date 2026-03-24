/*
 * XREFs of PsIsDiskCountersEnabled @ 0x1403CA4B0
 * Callers:
 *     ExpPcwHostCallback @ 0x1407CC330 (ExpPcwHostCallback.c)
 * Callees:
 *     <none>
 */

bool PsIsDiskCountersEnabled()
{
  return PsDisableDiskCounters == 0;
}
