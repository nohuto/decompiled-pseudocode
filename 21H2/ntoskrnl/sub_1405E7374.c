/*
 * XREFs of sub_1405E7374 @ 0x1405E7374
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1405D6CE0 (WbAddWarbirdEncryptionSegment.c)
 *     WbAllocateUserMemory @ 0x1405E6754 (WbAllocateUserMemory.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1405E7190 (WbAddHeapExecutedBlockToCache.c)
 *     WbGetWarbirdThread @ 0x1406438F0 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x140643E64 (WbGetWarbirdProcess.c)
 * Callees:
 *     sub_1405E73D4 @ 0x1405E73D4 (sub_1405E73D4.c)
 *     sub_140643B78 @ 0x140643B78 (sub_140643B78.c)
 */

__int64 __fastcall sub_1405E7374(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  if ( a6 == -1 )
    sub_140643B78(a1, a4, a5, 0, (__int64)&a6);
  return sub_1405E73D4(a1, a2);
}
