/*
 * XREFs of sub_14064D450 @ 0x14064D450
 * Callers:
 *     sub_14064D36C @ 0x14064D36C (sub_14064D36C.c)
 *     sub_14064E6A4 @ 0x14064E6A4 (sub_14064E6A4.c)
 *     WbAddHeapExecutedBlockToCache @ 0x140688030 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x140688144 (WbAddHeapExecutedBlockToLRU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14064D450(__int64 a1)
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
