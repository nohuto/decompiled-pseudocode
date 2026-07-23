/*
 * XREFs of sub_1405D7AAC @ 0x1405D7AAC
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405D772C (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_1405D7994 @ 0x1405D7994 (sub_1405D7994.c)
 *     sub_140963F28 @ 0x140963F28 (sub_140963F28.c)
 *     sub_140964118 @ 0x140964118 (sub_140964118.c)
 * Callees:
 *     WbMakeUserDataPagesKernelWritable @ 0x1405D7AD8 (WbMakeUserDataPagesKernelWritable.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1405E5B68 (WbMakeUserExecutablePagesKernelWritable.c)
 */

__int64 __fastcall sub_1405D7AAC(void *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  if ( a3 )
    return WbMakeUserExecutablePagesKernelWritable(a1, a2, a4, a5);
  else
    return WbMakeUserDataPagesKernelWritable(a1, a2);
}
