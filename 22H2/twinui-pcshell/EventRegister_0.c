/*
 * XREFs of EventRegister_0 @ 0x180090D0E
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1804EA200 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall EventRegister_0(
        LPCGUID ProviderId,
        PENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  return EventRegister(ProviderId, EnableCallback, CallbackContext, RegHandle);
}
