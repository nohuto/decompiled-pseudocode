/*
 * XREFs of EventUnregister_0 @ 0x180090C92
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1804EA590 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall EventUnregister_0(REGHANDLE RegHandle)
{
  return EventUnregister(RegHandle);
}
