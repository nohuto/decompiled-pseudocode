/*
 * XREFs of EventUnregister_0 @ 0x180090C72
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1804EA200 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall EventUnregister_0(REGHANDLE RegHandle)
{
  return EventUnregister(RegHandle);
}
