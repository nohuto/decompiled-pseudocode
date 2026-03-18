/*
 * XREFs of sub_140763660 @ 0x140763660
 * Callers:
 *     WbAddHeapExecutedBlockToCache @ 0x140762020 (WbAddHeapExecutedBlockToCache.c)
 *     WbGetHeapExecutedBlock @ 0x140762E28 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     sub_140763538 @ 0x140763538 (sub_140763538.c)
 *     sub_140763DD0 @ 0x140763DD0 (sub_140763DD0.c)
 */

__int64 __fastcall sub_140763660(int a1, int a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_140763DD0(a1 + 8, a2, 8, (unsigned int)&v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_140763538(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
