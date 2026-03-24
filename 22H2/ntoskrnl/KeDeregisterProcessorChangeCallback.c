/*
 * XREFs of KeDeregisterProcessorChangeCallback @ 0x1408BB7F0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x1403812B0 (ExUnregisterCallback.c)
 */

void __stdcall KeDeregisterProcessorChangeCallback(PVOID CallbackHandle)
{
  ExUnregisterCallback(CallbackHandle);
}
