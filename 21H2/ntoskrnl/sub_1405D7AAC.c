/*
 * XREFs of sub_1405D7AAC @ 0x1405D7AAC
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405D772C (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_1405D7994 @ 0x1405D7994 (sub_1405D7994.c)
 *     sub_140963D48 @ 0x140963D48 (sub_140963D48.c)
 *     sub_140963F38 @ 0x140963F38 (sub_140963F38.c)
 * Callees:
 *     WbMakeUserDataPagesKernelWritable @ 0x1405D7AD8 (WbMakeUserDataPagesKernelWritable.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140686A08 (WbMakeUserExecutablePagesKernelWritable.c)
 */

__int64 __fastcall sub_1405D7AAC(void *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  if ( a3 )
    return WbMakeUserExecutablePagesKernelWritable(a1, a2, a4, a5);
  else
    return WbMakeUserDataPagesKernelWritable(a1, a2);
}
