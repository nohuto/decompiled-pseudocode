/*
 * XREFs of sub_140688214 @ 0x140688214
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1405D6CE0 (WbAddWarbirdEncryptionSegment.c)
 *     WbGetWarbirdThread @ 0x14064EAD0 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x14064F044 (WbGetWarbirdProcess.c)
 *     WbAllocateUserMemory @ 0x1406875F4 (WbAllocateUserMemory.c)
 *     WbAddHeapExecutedBlockToCache @ 0x140688030 (WbAddHeapExecutedBlockToCache.c)
 * Callees:
 *     sub_14064ED58 @ 0x14064ED58 (sub_14064ED58.c)
 *     sub_140688274 @ 0x140688274 (sub_140688274.c)
 */

__int64 __fastcall sub_140688214(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  if ( a6 == -1 )
    sub_14064ED58(a1, a4, a5, 0LL, &a6);
  return sub_140688274(a1, a2);
}
