/*
 * XREFs of PopPowerRequestStatsDatabaseFree @ 0x14079B8F0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PopPowerRequestStatsDatabaseFree(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x54515750u);
}
