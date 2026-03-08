/*
 * XREFs of eFraction @ 0x1C000D098
 * Callers:
 *     efSin @ 0x1C000BE30 (efSin.c)
 * Callees:
 *     <none>
 */

double __fastcall eFraction(double result)
{
  double v1; // xmm1_8
  unsigned int v2; // ecx

  HIDWORD(v1) = HIDWORD(result);
  v2 = (unsigned __int8)(SLODWORD(result) >> 23);
  if ( v2 >= 0x7F )
  {
    if ( v2 >= 0x96 )
    {
      return 0.0;
    }
    else
    {
      *(float *)&v1 = *(float *)&result - (float)((LODWORD(result) & 0x7FFFFF | 0x800000) >> (-106 - v2));
      return v1;
    }
  }
  return result;
}
