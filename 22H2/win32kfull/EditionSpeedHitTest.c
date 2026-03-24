/*
 * XREFs of EditionSpeedHitTest @ 0x1C0216CD0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSpeedHitTest @ 0x1C004CCF4 (xxxSpeedHitTest.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

_OWORD *__fastcall EditionSpeedHitTest(
        _OWORD *a1,
        __int64 a2,
        int a3,
        const struct _SUBPIXELS *a4,
        BOOL *a5,
        __int64 a6)
{
  BOOL v10; // ecx

  memset(a1, 0, 0x70uLL);
  v10 = xxxSpeedHitTest(0, a2, a3, a4, a6, a1) != 0;
  if ( a5 )
    *a5 = v10;
  return a1;
}
