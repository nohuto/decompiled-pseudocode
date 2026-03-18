/*
 * XREFs of sub_1407E4118 @ 0x1407E4118
 * Callers:
 *     WbAddHeapExecutedBlockToCache @ 0x1407E1DC8 (WbAddHeapExecutedBlockToCache.c)
 *     WbGetWarbirdProcess @ 0x1407E2D60 (WbGetWarbirdProcess.c)
 *     WbGetWarbirdThread @ 0x1407E3900 (WbGetWarbirdThread.c)
 *     WbAllocateUserMemory @ 0x1407E43F0 (WbAllocateUserMemory.c)
 *     sub_140A0EFB4 @ 0x140A0EFB4 (sub_140A0EFB4.c)
 * Callees:
 *     sub_1407E3440 @ 0x1407E3440 (sub_1407E3440.c)
 *     sub_1407E4178 @ 0x1407E4178 (sub_1407E4178.c)
 */

__int64 __fastcall sub_1407E4118(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  if ( a6 == -1 )
    sub_1407E3440(a1, a4, a5, 0LL, &a6);
  return sub_1407E4178(a1, a2);
}
