/*
 * XREFs of SeUnregisterImageVerificationCallback @ 0x1409C8D90
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x14036E050 (ExUnregisterCallback.c)
 */

void __fastcall SeUnregisterImageVerificationCallback(void *a1)
{
  _InterlockedDecrement(&dword_140D0CB4C);
  ExUnregisterCallback(a1);
}
