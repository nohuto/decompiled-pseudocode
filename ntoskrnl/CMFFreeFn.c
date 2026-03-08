/*
 * XREFs of CMFFreeFn @ 0x140880F10
 * Callers:
 *     XpressDecodeClose @ 0x14067775C (XpressDecodeClose.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall CMFFreeFn(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0);
}
