/*
 * XREFs of EventUnregister @ 0x18006BAE6
 * Callers:
 *     sub_18013CB88 @ 0x18013CB88 (sub_18013CB88.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall EventUnregister(REGHANDLE RegHandle)
{
  return __imp_EventUnregister(RegHandle);
}
