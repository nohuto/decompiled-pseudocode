/*
 * XREFs of KeDeregisterProcessorChangeCallback @ 0x140971770
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x140302720 (ExUnregisterCallback.c)
 */

void __stdcall KeDeregisterProcessorChangeCallback(PVOID CallbackHandle)
{
  ExUnregisterCallback(CallbackHandle);
}
