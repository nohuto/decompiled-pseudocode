/*
 * XREFs of sub_140642270 @ 0x140642270
 * Callers:
 *     WbAddHeapExecutedBlockToCache @ 0x1405E7190 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x1405E72A4 (WbAddHeapExecutedBlockToLRU.c)
 *     sub_14064218C @ 0x14064218C (sub_14064218C.c)
 *     sub_1406434C4 @ 0x1406434C4 (sub_1406434C4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140642270(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( !_InterlockedAdd64((volatile signed __int64 *)(a1 + 80), 1uLL) )
      return 3221225701LL;
  }
  return result;
}
