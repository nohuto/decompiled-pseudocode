/*
 * XREFs of MagpFindThreadContext @ 0x1C007C568
 * Callers:
 *     xxxFreeWindow @ 0x1C007A7C0 (xxxFreeWindow.c)
 *     MagContextThreadCallout @ 0x1C01CC7B0 (MagContextThreadCallout.c)
 *     MagControl @ 0x1C01CC9FC (MagControl.c)
 *     MagGetLensContextInformation @ 0x1C01CCB00 (MagGetLensContextInformation.c)
 *     MagSetLensContextInformation @ 0x1C01CD254 (MagSetLensContextInformation.c)
 *     MagSlicerControl @ 0x1C01CDFF4 (MagSlicerControl.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MagpFindThreadContext(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; result != a1; result = (_QWORD *)*result )
  {
    if ( a2 == result[2] )
      return result;
  }
  return 0LL;
}
