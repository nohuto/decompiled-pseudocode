/*
 * XREFs of ExpAllocateTablePagedPool @ 0x14069A6A0
 * Callers:
 *     ExpAllocateHandleTableEntrySlow @ 0x140606260 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateMidLevelTable @ 0x14069A62C (ExpAllocateMidLevelTable.c)
 *     ExpSetHandleExtraInfo @ 0x14094CBC8 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x140606520 (ExpAllocateTablePagedPoolNoZero.c)
 */

PVOID __fastcall ExpAllocateTablePagedPool(__int64 a1, SIZE_T a2)
{
  PVOID TablePagedPoolNoZero; // rax
  PVOID v4; // rbx

  TablePagedPoolNoZero = ExpAllocateTablePagedPoolNoZero(a1, a2);
  v4 = TablePagedPoolNoZero;
  if ( TablePagedPoolNoZero )
    memset(TablePagedPoolNoZero, 0, a2);
  return v4;
}
