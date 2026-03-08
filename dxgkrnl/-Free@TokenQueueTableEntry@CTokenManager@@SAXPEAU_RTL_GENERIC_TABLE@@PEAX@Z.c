/*
 * XREFs of ?Free@TokenQueueTableEntry@CTokenManager@@SAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x1C0076E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTokenManager::TokenQueueTableEntry::Free(struct _RTL_GENERIC_TABLE *Table, PVOID Buffer)
{
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
}
