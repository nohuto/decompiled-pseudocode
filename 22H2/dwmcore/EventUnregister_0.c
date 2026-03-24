/*
 * XREFs of EventUnregister_0 @ 0x1800E82AE
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x180216E30 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall EventUnregister_0(REGHANDLE RegHandle)
{
  return EventUnregister(RegHandle);
}
