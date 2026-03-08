/*
 * XREFs of VfPoolCheckIncorrectFreeApi @ 0x140AD7100
 * Callers:
 *     ViIovExFreePoolWithTag_Entry @ 0x1405CFA40 (ViIovExFreePoolWithTag_Entry.c)
 *     ViIovExFreePool_Entry @ 0x1405CFA60 (ViIovExFreePool_Entry.c)
 * Callees:
 *     VfIrpDatabaseCheckExFreePool @ 0x140ABD876 (VfIrpDatabaseCheckExFreePool.c)
 */

void __fastcall VfPoolCheckIncorrectFreeApi(ULONG_PTR a1)
{
  VfIrpDatabaseCheckExFreePool(a1);
}
