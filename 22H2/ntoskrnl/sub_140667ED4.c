/*
 * XREFs of sub_140667ED4 @ 0x140667ED4
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1405D6CE0 (WbAddWarbirdEncryptionSegment.c)
 *     WbAllocateUserMemory @ 0x1406672B4 (WbAllocateUserMemory.c)
 *     WbAddHeapExecutedBlockToCache @ 0x140667CF0 (WbAddHeapExecutedBlockToCache.c)
 *     WbGetWarbirdThread @ 0x1406C7890 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x1406C7E04 (WbGetWarbirdProcess.c)
 * Callees:
 *     sub_140667F34 @ 0x140667F34 (sub_140667F34.c)
 *     sub_1406C7B18 @ 0x1406C7B18 (sub_1406C7B18.c)
 */

__int64 __fastcall sub_140667ED4(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  if ( a6 == -1 )
    sub_1406C7B18(a1, a4, a5, 0, (__int64)&a6);
  return sub_140667F34(a1, a2);
}
