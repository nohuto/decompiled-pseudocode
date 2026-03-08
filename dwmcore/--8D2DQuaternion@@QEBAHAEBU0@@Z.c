/*
 * XREFs of ??8D2DQuaternion@@QEBAHAEBU0@@Z @ 0x1802793B4
 * Callers:
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x1800555A0 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall D2DQuaternion::operator==(float *a1, float *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
