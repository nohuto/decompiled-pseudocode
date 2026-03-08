/*
 * XREFs of MagpFindThreadContext @ 0x1C0141978
 * Callers:
 *     MagContextThreadCallout @ 0x1C01A4070 (MagContextThreadCallout.c)
 *     MagControl @ 0x1C01A42B4 (MagControl.c)
 *     MagGetLensContextInformation @ 0x1C01A43C0 (MagGetLensContextInformation.c)
 *     MagSetLensContextInformation @ 0x1C01A4A80 (MagSetLensContextInformation.c)
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
