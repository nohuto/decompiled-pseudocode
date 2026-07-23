/*
 * XREFs of sub_1406434C4 @ 0x1406434C4
 * Callers:
 *     WbAddHeapExecutedBlockToCache @ 0x1405E7190 (WbAddHeapExecutedBlockToCache.c)
 *     WbGetHeapExecutedBlock @ 0x1406427A4 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     sub_140642270 @ 0x140642270 (sub_140642270.c)
 *     sub_140643B78 @ 0x140643B78 (sub_140643B78.c)
 */

__int64 __fastcall sub_1406434C4(int a1, int a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_140643B78(a1 + 8, a2, 8, (unsigned int)&v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_140642270(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
