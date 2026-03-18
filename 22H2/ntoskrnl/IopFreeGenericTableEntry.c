/*
 * XREFs of IopFreeGenericTableEntry @ 0x140944AE0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeGenericTableEntry(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x65546F49u);
}
