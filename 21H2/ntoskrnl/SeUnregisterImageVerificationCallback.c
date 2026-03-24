/*
 * XREFs of SeUnregisterImageVerificationCallback @ 0x14091BF80
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x140381970 (ExUnregisterCallback.c)
 */

void __fastcall SeUnregisterImageVerificationCallback(void *a1)
{
  _InterlockedDecrement(&dword_140CEC9A8);
  ExUnregisterCallback(a1);
}
