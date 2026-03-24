/*
 * XREFs of sub_1406C7464 @ 0x1406C7464
 * Callers:
 *     WbAddHeapExecutedBlockToCache @ 0x140667CF0 (WbAddHeapExecutedBlockToCache.c)
 *     WbGetHeapExecutedBlock @ 0x1406C6744 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     sub_1406C6210 @ 0x1406C6210 (sub_1406C6210.c)
 *     sub_1406C7B18 @ 0x1406C7B18 (sub_1406C7B18.c)
 */

__int64 __fastcall sub_1406C7464(int a1, int a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_1406C7B18(a1 + 8, a2, 8, (unsigned int)&v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_1406C6210(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
