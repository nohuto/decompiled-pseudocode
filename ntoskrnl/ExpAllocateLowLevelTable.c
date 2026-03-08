/*
 * XREFs of ExpAllocateLowLevelTable @ 0x14070663C
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x140704638 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTable @ 0x140706348 (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x14070644C (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExpAllocateTablePagedPoolNoZero @ 0x140706670 (ExpAllocateTablePagedPoolNoZero.c)
 */

_QWORD *__fastcall ExpAllocateLowLevelTable(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)ExpAllocateTablePagedPoolNoZero(*(_QWORD *)(a1 + 16), 4096LL);
  if ( result )
  {
    *result = 0LL;
    result[1] = a2;
  }
  return result;
}
