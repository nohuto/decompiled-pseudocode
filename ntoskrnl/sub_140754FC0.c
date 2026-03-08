/*
 * XREFs of sub_140754FC0 @ 0x140754FC0
 * Callers:
 *     WbGetWarbirdProcess @ 0x1406AEEB8 (WbGetWarbirdProcess.c)
 *     WbGetWarbirdThread @ 0x1406AF248 (WbGetWarbirdThread.c)
 *     WbAllocateUserMemory @ 0x140754868 (WbAllocateUserMemory.c)
 *     WbAddHeapExecutedBlockToCache @ 0x140754E94 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddWarbirdEncryptionSegment @ 0x14075554C (WbAddWarbirdEncryptionSegment.c)
 * Callees:
 *     sub_1406AF180 @ 0x1406AF180 (sub_1406AF180.c)
 *     sub_140755020 @ 0x140755020 (sub_140755020.c)
 */

__int64 __fastcall sub_140754FC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  if ( a6 == -1 )
    sub_1406AF180(a1, a4, a5, 0LL, &a6);
  return sub_140755020(a1, a2);
}
