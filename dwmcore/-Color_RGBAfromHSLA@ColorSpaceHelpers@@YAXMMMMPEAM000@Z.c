/*
 * XREFs of ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x180016038
 * Callers:
 *     ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x180015B1C (-InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@.c)
 *     ?ColorLerpHsl@CExpressionValueStack@@QEAAJXZ @ 0x180015CD4 (-ColorLerpHsl@CExpressionValueStack@@QEAAJXZ.c)
 *     ?ColorHsl@CExpressionValueStack@@QEAAJXZ @ 0x180259330 (-ColorHsl@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     fmod_0 @ 0x180117734 (fmod_0.c)
 */

void __fastcall ColorSpaceHelpers::Color_RGBAfromHSLA(
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
  double v9; // xmm10_8
  float v10; // xmm7_4
  float v11; // xmm9_4
  float v12; // xmm8_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm1_4

  v9 = v8;
  v10 = (float)(1.0 - COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(a3 + a3) - 1.0) & _xmm)) * a2;
  v11 = a3 - (float)(v10 * 0.5);
  v12 = v11 + v10;
  v13 = (float)((1.0 - COERCE_DOUBLE(COERCE_UNSIGNED_INT64(fmod_0(v8 / 1.047197551196598, 2.0) - 1.0) & _xmm)) * v10)
      + v11;
  if ( v9 >= 1.047197551196598 )
  {
    if ( v9 < 2.094395102393195 )
    {
      v14 = v11;
      v15 = v11 + v10;
LABEL_13:
      v12 = v13;
      goto LABEL_3;
    }
    if ( v9 >= 3.141592653589793 )
    {
      if ( v9 < 4.188790204786391 )
      {
        v14 = v11 + v10;
        v15 = v13;
        v12 = v11;
        goto LABEL_3;
      }
      v15 = v11;
      if ( v9 < 5.235987755982989 )
      {
        v14 = v11 + v10;
        goto LABEL_13;
      }
    }
    else
    {
      v15 = v11 + v10;
      v12 = v11;
    }
    v14 = v13;
    goto LABEL_3;
  }
  v14 = v11;
  v15 = v13;
LABEL_3:
  *a5 = v12;
  *a6 = v15;
  *a7 = v14;
  *a5 = fmaxf(0.0, *a5);
  *a6 = fmaxf(0.0, *a6);
  *a7 = fmaxf(0.0, *a7);
  *a8 = a4;
}
