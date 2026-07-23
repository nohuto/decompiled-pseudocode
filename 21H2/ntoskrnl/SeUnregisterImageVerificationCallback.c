/*
 * XREFs of SeUnregisterImageVerificationCallback @ 0x14091C0E0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x1403814C0 (ExUnregisterCallback.c)
 */

void __fastcall SeUnregisterImageVerificationCallback(void *a1)
{
  _InterlockedDecrement(&dword_140CEC9E4);
  ExUnregisterCallback(a1);
}
