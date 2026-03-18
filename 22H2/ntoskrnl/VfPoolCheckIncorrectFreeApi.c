/*
 * XREFs of VfPoolCheckIncorrectFreeApi @ 0x140ADB100
 * Callers:
 *     ViIovExFreePoolWithTag_Entry @ 0x1405D1EF0 (ViIovExFreePoolWithTag_Entry.c)
 *     ViIovExFreePool_Entry @ 0x1405D1F10 (ViIovExFreePool_Entry.c)
 * Callees:
 *     VfIrpDatabaseCheckExFreePool @ 0x140AC1876 (VfIrpDatabaseCheckExFreePool.c)
 */

void __fastcall VfPoolCheckIncorrectFreeApi(ULONG_PTR a1)
{
  VfIrpDatabaseCheckExFreePool(a1);
}
