/*
 * XREFs of ?Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x180015F84
 * Callers:
 *     ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x180015B1C (-InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@.c)
 *     ?ColorLerpHsl@CExpressionValueStack@@QEAAJXZ @ 0x180015CD4 (-ColorLerpHsl@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     fmodf_0 @ 0x180117740 (fmodf_0.c)
 */

void __fastcall ColorSpaceHelpers::Color_HSLAfromRGBA(
        ColorSpaceHelpers *this,
        float a2,
        float a3,
        float a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8)
{
  float v8; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm5_4
  float v12; // xmm7_4
  float v13; // xmm8_4
  float v14; // xmm1_4
  float v15; // xmm6_4
  float v16; // xmm6_4
  float v17; // xmm2_4

  v10 = fmaxf(fmaxf(v8, a2), a3);
  v11 = fminf(fminf(v8, a2), a3);
  v12 = v10 + v11;
  v13 = (float)(v10 + v11) * 0.5;
  if ( v10 == v11 )
  {
    v14 = 0.0;
    v15 = 0.0;
  }
  else
  {
    v16 = v10 - v11;
    if ( v10 == v8 )
    {
      v17 = fmodf_0((float)(a2 - a3) / v16, 6.0);
    }
    else if ( v10 == a2 )
    {
      v17 = (float)((float)(a3 - v8) / v16) + 2.0;
    }
    else
    {
      v17 = (float)((float)(v8 - a2) / v16) + 4.0;
    }
    v14 = v17 * 1.047197551196598;
    if ( v14 < 0.0 )
      v14 = v14 + 6.2831855;
    v15 = v16 / (float)(1.0 - COERCE_FLOAT(COERCE_UNSIGNED_INT(v12 - 1.0) & _xmm));
  }
  *a5 = v14;
  *a6 = v15;
  *a7 = v13;
  *a8 = a4;
}
