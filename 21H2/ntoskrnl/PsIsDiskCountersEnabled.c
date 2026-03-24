/*
 * XREFs of PsIsDiskCountersEnabled @ 0x1403CAB80
 * Callers:
 *     ExpPcwHostCallback @ 0x1407CC410 (ExpPcwHostCallback.c)
 * Callees:
 *     <none>
 */

bool PsIsDiskCountersEnabled()
{
  return PsDisableDiskCounters == 0;
}
