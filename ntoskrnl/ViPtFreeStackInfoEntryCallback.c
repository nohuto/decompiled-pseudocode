/*
 * XREFs of ViPtFreeStackInfoEntryCallback @ 0x140ADBD90
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall ViPtFreeStackInfoEntryCallback(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x6E496956u);
}
