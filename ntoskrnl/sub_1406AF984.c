/*
 * XREFs of sub_1406AF984 @ 0x1406AF984
 * Callers:
 *     sub_1406AF4BC @ 0x1406AF4BC (sub_1406AF4BC.c)
 *     sub_1406AF8A4 @ 0x1406AF8A4 (sub_1406AF8A4.c)
 *     WbAddHeapExecutedBlockToCache @ 0x140754E94 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x140755130 (WbAddHeapExecutedBlockToLRU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406AF984(__int64 a1)
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
