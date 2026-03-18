/*
 * XREFs of IoUnregisterBootDriverCallback @ 0x140B76F40
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x14036E050 (ExUnregisterCallback.c)
 */

void __fastcall IoUnregisterBootDriverCallback(void *a1)
{
  ExUnregisterCallback(a1);
}
