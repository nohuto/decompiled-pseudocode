/*
 * XREFs of sub_140764E70 @ 0x140764E70
 * Callers:
 *     sub_140764BA0 @ 0x140764BA0 (sub_140764BA0.c)
 *     sub_140764D58 @ 0x140764D58 (sub_140764D58.c)
 *     sub_140A4DE34 @ 0x140A4DE34 (sub_140A4DE34.c)
 *     sub_140A4E01C @ 0x140A4E01C (sub_140A4E01C.c)
 * Callees:
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1407653A4 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_140A4DB30 @ 0x140A4DB30 (sub_140A4DB30.c)
 */

__int64 __fastcall sub_140764E70(void *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  if ( a3 )
    return WbMakeUserExecutablePagesKernelWritable(a1, a2, a4, a5);
  else
    return sub_140A4DB30(a1, a2);
}
