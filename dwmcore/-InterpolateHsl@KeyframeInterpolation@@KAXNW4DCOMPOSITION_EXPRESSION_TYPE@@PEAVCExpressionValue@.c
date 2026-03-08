/*
 * XREFs of ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x180015B1C
 * Callers:
 *     ?Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x180062530 (-Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@1.c)
 *     ?Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800D53D0 (-Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800E2880 (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 *     InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a___ @ 0x18026402C (InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a___.c)
 * Callees:
 *     ?Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x180015F84 (-Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x180016038 (-Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016188 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     fmodf_0 @ 0x180117740 (fmodf_0.c)
 */

__int64 __fastcall KeyframeInterpolation::InterpolateHsl(double a1, __int64 a2, float *a3, float *a4, __int64 a5)
{
  float v7; // xmm7_4
  ColorSpaceHelpers *v8; // rcx
  ColorSpaceHelpers *v9; // rcx
  ColorSpaceHelpers *v10; // rcx
  float v11; // xmm6_4
  float v13; // xmm0_4
  float *v14; // [rsp+48h] [rbp-41h] BYREF
  float v15; // [rsp+50h] [rbp-39h] BYREF
  float v16; // [rsp+54h] [rbp-35h] BYREF
  __int128 v17; // [rsp+58h] [rbp-31h] BYREF
  _OWORD v18[4]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+1Fh] BYREF
  int v20; // [rsp+B0h] [rbp+27h]
  char v21; // [rsp+B4h] [rbp+2Bh]

  v7 = a1;
  memset_0(v18, 0, sizeof(v18));
  v19 = 0LL;
  ColorSpaceHelpers::Color_HSLAfromRGBA(v8, a3[1], a3[2], a3[3], COERCE_FLOAT(&v14), (float *)&v14 + 1, &v15, &v16, v14);
  ColorSpaceHelpers::Color_HSLAfromRGBA(
    v9,
    a4[1],
    a4[2],
    a4[3],
    COERCE_FLOAT(&v17),
    (float *)&v17 + 1,
    (float *)&v17 + 2,
    (float *)&v17 + 3,
    v14);
  v11 = 1.0 - v7;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v14 - *(float *)&v17) & _xmm) >= 3.1415927 )
  {
    if ( *(float *)&v14 <= *(float *)&v17 )
      v13 = (float)((float)(*(float *)&v14 + 6.2831855) * v11) + (float)(*(float *)&v17 * v7);
    else
      v13 = (float)((float)(*(float *)&v17 + 6.2831855) * v7) + (float)(v11 * *(float *)&v14);
    fmodf_0(v13, 6.2831855);
  }
  ColorSpaceHelpers::Color_RGBAfromHSLA(
    v10,
    (float)(v11 * *((float *)&v14 + 1)) + (float)(*((float *)&v17 + 1) * v7),
    (float)(v11 * v15) + (float)(*((float *)&v17 + 2) * v7),
    (float)(v11 * v16) + (float)(*((float *)&v17 + 3) * v7),
    COERCE_FLOAT(&v17),
    (float *)&v17 + 1,
    (float *)&v17 + 2,
    (float *)&v17 + 3,
    v14);
  v20 = 70;
  v18[0] = v17;
  v21 = 1;
  CExpressionValue::operator=(a5, v18);
  return Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v19);
}
