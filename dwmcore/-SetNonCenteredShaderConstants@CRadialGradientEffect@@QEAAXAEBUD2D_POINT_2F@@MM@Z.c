/*
 * XREFs of ?SetNonCenteredShaderConstants@CRadialGradientEffect@@QEAAXAEBUD2D_POINT_2F@@MM@Z @ 0x1802B62CC
 * Callers:
 *     ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18024A460 (-GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CRadialGradientEffect::SetNonCenteredShaderConstants(
        CRadialGradientEffect *this,
        const struct D2D_POINT_2F *a2,
        float a3,
        float a4)
{
  float x; // xmm5_4
  float v5; // xmm4_4
  float v6; // xmm6_4
  float v7; // xmm0_4
  float v8; // xmm3_4
  float y; // xmm7_4
  float v10; // xmm2_4
  float v11; // xmm6_4
  float v12; // xmm7_4

  x = a2->x;
  v5 = a4 / a3;
  if ( a2->x != *((float *)this + 11) || a2->y != *((float *)this + 12) || v5 != *((float *)this + 9) )
  {
    v6 = a2->x;
    v7 = 0.5 / a4;
    v8 = *(float *)&FLOAT_1_0;
    y = a2->y;
    *((float *)this + 9) = v5;
    v10 = (float)(y * y) + (float)(x * x);
    v11 = v6 * (float)(1.0 - v7);
    v12 = y * (float)(1.0 - v7);
    if ( (float)((float)(v5 * v5) - 0.000001) <= v10 )
      v8 = FLOAT_N1_0;
    *((float *)this + 10) = v8;
    *(struct D2D_POINT_2F *)((char *)this + 44) = *a2;
    *((float *)this + 13) = v11;
    *((float *)this + 14) = v12;
    ++*((_DWORD *)this + 6);
  }
}
