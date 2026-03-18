/*
 * XREFs of PsIsDiskCountersEnabled @ 0x1403ABBC0
 * Callers:
 *     ExpPcwHostCallback @ 0x140859CC0 (ExpPcwHostCallback.c)
 * Callees:
 *     <none>
 */

bool PsIsDiskCountersEnabled()
{
  return PsDisableDiskCounters == 0;
}
