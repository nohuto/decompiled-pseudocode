/*
 * XREFs of PsIsDiskCountersEnabled @ 0x1403A6730
 * Callers:
 *     ExpPcwHostCallback @ 0x140855740 (ExpPcwHostCallback.c)
 * Callees:
 *     <none>
 */

bool PsIsDiskCountersEnabled()
{
  return PsDisableDiskCounters == 0;
}
