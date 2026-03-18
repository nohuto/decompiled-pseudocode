/*
 * XREFs of KeDeregisterProcessorChangeCallback @ 0x140974790
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x14036E050 (ExUnregisterCallback.c)
 */

void __stdcall KeDeregisterProcessorChangeCallback(PVOID CallbackHandle)
{
  ExUnregisterCallback(CallbackHandle);
}
