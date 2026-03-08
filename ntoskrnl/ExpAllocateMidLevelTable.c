/*
 * XREFs of ExpAllocateMidLevelTable @ 0x140704638
 * Callers:
 *     ExpAllocateHandleTableEntrySlow @ 0x14070644C (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExpFreeTablePagedPool @ 0x140704514 (ExpFreeTablePagedPool.c)
 *     ExpAllocateTablePagedPool @ 0x1407045FC (ExpAllocateTablePagedPool.c)
 *     ExpAllocateLowLevelTable @ 0x14070663C (ExpAllocateLowLevelTable.c)
 */

_QWORD *__fastcall ExpAllocateMidLevelTable(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *TablePagedPool; // rdi
  __int64 LowLevelTable; // rax

  TablePagedPool = ExpAllocateTablePagedPool(*(_QWORD *)(a1 + 16), 0x1000uLL);
  if ( TablePagedPool )
  {
    LowLevelTable = ExpAllocateLowLevelTable(a1, a3);
    *a2 = LowLevelTable;
    if ( LowLevelTable )
    {
      *TablePagedPool = LowLevelTable;
      return TablePagedPool;
    }
    ExpFreeTablePagedPool(*(struct _KPROCESS **)(a1 + 16), TablePagedPool, 4096LL);
  }
  return 0LL;
}
