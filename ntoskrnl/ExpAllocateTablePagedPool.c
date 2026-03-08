/*
 * XREFs of ExpAllocateTablePagedPool @ 0x1407045FC
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x140704638 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x14070644C (ExpAllocateHandleTableEntrySlow.c)
 *     ExpSetHandleExtraInfo @ 0x1409F63C0 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x140706670 (ExpAllocateTablePagedPoolNoZero.c)
 */

void *__fastcall ExpAllocateTablePagedPool(__int64 a1, size_t a2)
{
  void *TablePagedPoolNoZero; // rax
  void *v4; // rbx

  TablePagedPoolNoZero = (void *)ExpAllocateTablePagedPoolNoZero();
  v4 = TablePagedPoolNoZero;
  if ( TablePagedPoolNoZero )
    memset(TablePagedPoolNoZero, 0, a2);
  return v4;
}
