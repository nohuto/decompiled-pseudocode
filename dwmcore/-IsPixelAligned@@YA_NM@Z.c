/*
 * XREFs of ?IsPixelAligned@@YA_NM@Z @ 0x1800CA1F4
 * Callers:
 *     ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x1800CA19C (-IsPixelAligned@@YA_NAEBUMilRectF@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsPixelAligned(float a1)
{
  int v1; // eax
  __m128 v3; // xmm2
  __m128 v4; // rt1
  float v5; // [rsp+8h] [rbp+8h]

  if ( (LODWORD(a1) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v3 = 0LL;
    v3.m128_f32[0] = (float)(int)a1 - a1;
    v4.m128_f32[0] = FLOAT_N0_5;
    v1 = (int)a1 - _mm_cmple_ss(v3, v4).m128_u32[0];
  }
  else
  {
    v5 = a1 + 6291456.25;
    v1 = (int)(LODWORD(v5) << 10) >> 11;
  }
  return COERCE_FLOAT(COERCE_UNSIGNED_INT(a1 - (float)v1) & _xmm) <= 0.00390625;
}
