/*
 * XREFs of EventRegister @ 0x18006BAF2
 * Callers:
 *     sub_18013CB88 @ 0x18013CB88 (sub_18013CB88.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall EventRegister(
        LPCGUID ProviderId,
        PENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  return __imp_EventRegister(ProviderId, EnableCallback, CallbackContext, RegHandle);
}
