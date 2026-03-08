/*
 * XREFs of sub_1406AF4BC @ 0x1406AF4BC
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x1406AFAAC (WbGetHeapExecutedBlock.c)
 *     WbAddHeapExecutedBlockToCache @ 0x140754E94 (WbAddHeapExecutedBlockToCache.c)
 * Callees:
 *     sub_1406AF180 @ 0x1406AF180 (sub_1406AF180.c)
 *     sub_1406AF984 @ 0x1406AF984 (sub_1406AF984.c)
 */

__int64 __fastcall sub_1406AF4BC(__int64 a1, __int64 a2, _QWORD *a3, int *a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_1406AF180(a1 + 8, a2, 8u, &v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_1406AF984(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
