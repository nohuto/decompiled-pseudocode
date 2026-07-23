/*
 * XREFs of CMFFreeFn @ 0x140773920
 * Callers:
 *     XpressDecodeClose @ 0x1405CA3A4 (XpressDecodeClose.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall CMFFreeFn(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0);
}
