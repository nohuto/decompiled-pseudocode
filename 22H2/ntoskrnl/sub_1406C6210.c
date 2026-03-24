/*
 * XREFs of sub_1406C6210 @ 0x1406C6210
 * Callers:
 *     WbAddHeapExecutedBlockToCache @ 0x140667CF0 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x140667E04 (WbAddHeapExecutedBlockToLRU.c)
 *     sub_1406C612C @ 0x1406C612C (sub_1406C612C.c)
 *     sub_1406C7464 @ 0x1406C7464 (sub_1406C7464.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406C6210(__int64 a1)
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
