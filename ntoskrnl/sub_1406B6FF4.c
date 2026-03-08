/*
 * XREFs of sub_1406B6FF4 @ 0x1406B6FF4
 * Callers:
 *     sub_1407538E4 @ 0x1407538E4 (sub_1407538E4.c)
 *     sub_140753A9C @ 0x140753A9C (sub_140753A9C.c)
 *     sub_140A4B164 @ 0x140A4B164 (sub_140A4B164.c)
 *     sub_140A4B34C @ 0x140A4B34C (sub_140A4B34C.c)
 * Callees:
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406B69F0 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_140A4AE60 @ 0x140A4AE60 (sub_140A4AE60.c)
 */

__int64 __fastcall sub_1406B6FF4(void *a1, ULONG a2, int a3, PMDL *a4, _QWORD *a5)
{
  if ( a3 )
    return WbMakeUserExecutablePagesKernelWritable(a1, a2, a4, a5);
  else
    return sub_140A4AE60(a1, a2);
}
