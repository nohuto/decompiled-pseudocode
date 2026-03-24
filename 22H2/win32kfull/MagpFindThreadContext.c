/*
 * XREFs of MagpFindThreadContext @ 0x1C007C4C8
 * Callers:
 *     xxxFreeWindow @ 0x1C007A720 (xxxFreeWindow.c)
 *     MagContextThreadCallout @ 0x1C01CC1F0 (MagContextThreadCallout.c)
 *     MagControl @ 0x1C01CC43C (MagControl.c)
 *     MagGetLensContextInformation @ 0x1C01CC540 (MagGetLensContextInformation.c)
 *     MagSetLensContextInformation @ 0x1C01CCC94 (MagSetLensContextInformation.c)
 *     MagSlicerControl @ 0x1C01CDA34 (MagSlicerControl.c)
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
