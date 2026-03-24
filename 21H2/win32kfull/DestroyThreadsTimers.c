/*
 * XREFs of DestroyThreadsTimers @ 0x1C000B530
 * Callers:
 *     <none>
 * Callees:
 *     FreeTimer @ 0x1C000B6C0 (FreeTimer.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 DestroyThreadsTimers()
{
  return gtmrListHead;
}
