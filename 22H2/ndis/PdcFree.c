/*
 * XREFs of PdcFree @ 0x1C012A628
 * Callers:
 *     PdcPortOpenCommon @ 0x1C012A690 (PdcPortOpenCommon.c)
 * Callees:
 *     <none>
 */

void __fastcall PdcFree(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
