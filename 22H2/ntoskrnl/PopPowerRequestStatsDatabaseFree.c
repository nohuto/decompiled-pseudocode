/*
 * XREFs of PopPowerRequestStatsDatabaseFree @ 0x1407EA690
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall PopPowerRequestStatsDatabaseFree(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x54515750u);
}
