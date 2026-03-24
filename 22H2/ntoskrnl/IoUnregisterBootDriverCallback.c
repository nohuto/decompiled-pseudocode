/*
 * XREFs of IoUnregisterBootDriverCallback @ 0x140A74370
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x1403812B0 (ExUnregisterCallback.c)
 */

void __fastcall IoUnregisterBootDriverCallback(void *a1)
{
  ExUnregisterCallback(a1);
}
