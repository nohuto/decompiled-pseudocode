/*
 * XREFs of PopDirectedDripsUmTestDeviceFree @ 0x14099CB50
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PopDirectedDripsUmTestDeviceFree(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x4D554444u);
}
