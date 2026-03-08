/*
 * XREFs of SeUnregisterImageVerificationCallback @ 0x1409C5D40
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x140302720 (ExUnregisterCallback.c)
 */

void __fastcall SeUnregisterImageVerificationCallback(void *a1)
{
  _InterlockedDecrement(&dword_140D0C78C);
  ExUnregisterCallback(a1);
}
