/*
 * XREFs of ExpAllocateMidLevelTable @ 0x14069A62C
 * Callers:
 *     ExpAllocateHandleTableEntrySlow @ 0x140606260 (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExpFreeTablePagedPool @ 0x1406044E0 (ExpFreeTablePagedPool.c)
 *     ExpAllocateLowLevelTable @ 0x1406064EC (ExpAllocateLowLevelTable.c)
 *     ExpAllocateTablePagedPool @ 0x14069A6A0 (ExpAllocateTablePagedPool.c)
 */

_QWORD *__fastcall ExpAllocateMidLevelTable(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *TablePagedPool; // rdi
  _QWORD *LowLevelTable; // rax

  TablePagedPool = (_QWORD *)ExpAllocateTablePagedPool(*(_QWORD *)(a1 + 16), 4096LL);
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
