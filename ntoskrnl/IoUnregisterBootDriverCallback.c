/*
 * XREFs of IoUnregisterBootDriverCallback @ 0x140B729E0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x140302720 (ExUnregisterCallback.c)
 */

void __fastcall IoUnregisterBootDriverCallback(void *a1)
{
  ExUnregisterCallback(a1);
}
