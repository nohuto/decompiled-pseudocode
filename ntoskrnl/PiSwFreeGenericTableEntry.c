/*
 * XREFs of PiSwFreeGenericTableEntry @ 0x140964470
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwFreeGenericTableEntry(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x57706E50u);
}
