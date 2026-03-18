/*
 * XREFs of SeUnregisterImageVerificationCallback @ 0x1409C5980
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x14025DE40 (ExUnregisterCallback.c)
 */

void __fastcall SeUnregisterImageVerificationCallback(void *a1)
{
  _InterlockedDecrement(&dword_140CF6644);
  ExUnregisterCallback(a1);
}
