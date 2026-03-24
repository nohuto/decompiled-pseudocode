/*
 * XREFs of EtwpFreeKeyNameEntry @ 0x1403C4F10
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeKeyNameEntry(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x74777445u);
}
