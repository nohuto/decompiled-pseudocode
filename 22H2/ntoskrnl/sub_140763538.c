/*
 * XREFs of sub_140763538 @ 0x140763538
 * Callers:
 *     WbAddHeapExecutedBlockToCache @ 0x140762020 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x14076214C (WbAddHeapExecutedBlockToLRU.c)
 *     sub_140763458 @ 0x140763458 (sub_140763458.c)
 *     sub_140763660 @ 0x140763660 (sub_140763660.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140763538(__int64 a1)
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
