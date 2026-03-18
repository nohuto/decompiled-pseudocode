/*
 * XREFs of VfPoolCheckIncorrectFreeApi @ 0x140A9A2D0
 * Callers:
 *     ViIovExFreePoolWithTag_Entry @ 0x140601BD0 (ViIovExFreePoolWithTag_Entry.c)
 *     ViIovExFreePool_Entry @ 0x140601BF0 (ViIovExFreePool_Entry.c)
 * Callees:
 *     VfIrpDatabaseCheckExFreePool @ 0x140A7FA0C (VfIrpDatabaseCheckExFreePool.c)
 */

void __fastcall VfPoolCheckIncorrectFreeApi(ULONG_PTR a1)
{
  VfIrpDatabaseCheckExFreePool(a1);
}
