/*
 * XREFs of sub_140764214 @ 0x140764214
 * Callers:
 *     WbAddHeapExecutedBlockToCache @ 0x140762020 (WbAddHeapExecutedBlockToCache.c)
 *     WbGetWarbirdThread @ 0x1407636B4 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x140763B10 (WbGetWarbirdProcess.c)
 *     WbAllocateUserMemory @ 0x140764478 (WbAllocateUserMemory.c)
 *     WbAddWarbirdEncryptionSegment @ 0x1407D26B8 (WbAddWarbirdEncryptionSegment.c)
 * Callees:
 *     sub_140763DD0 @ 0x140763DD0 (sub_140763DD0.c)
 *     sub_140764274 @ 0x140764274 (sub_140764274.c)
 */

__int64 __fastcall sub_140764214(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  if ( a6 == -1 )
    sub_140763DD0(a1, a4, a5, 0LL, &a6);
  return sub_140764274(a1, a2);
}
