/*
 * XREFs of PsIsDiskCountersEnabled @ 0x1403D9790
 * Callers:
 *     ExpPcwHostCallback @ 0x14085B800 (ExpPcwHostCallback.c)
 * Callees:
 *     <none>
 */

bool PsIsDiskCountersEnabled()
{
  return PsDisableDiskCounters == 0;
}
