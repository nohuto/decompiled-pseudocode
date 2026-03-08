/*
 * XREFs of PiDqFreeGenericTableEntry @ 0x14079A620
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PiDqFreeGenericTableEntry(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x58706E50u);
}
