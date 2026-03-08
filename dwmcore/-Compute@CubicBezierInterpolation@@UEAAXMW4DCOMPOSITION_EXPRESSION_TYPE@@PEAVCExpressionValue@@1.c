/*
 * XREFs of ?Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x180062530
 * Callers:
 *     <none>
 * Callees:
 *     ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x180015B1C (-InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@.c)
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x1800D7168 (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 *     InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a___ @ 0x18026402C (InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a___.c)
 *     InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd___ @ 0x180264124 (InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd___.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x180264948 (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CubicBezierInterpolation::Compute(
        __int64 a1,
        float a2,
        unsigned int a3,
        struct _D3DCOLORVALUE *a4,
        struct _D3DCOLORVALUE *a5,
        struct _D3DCOLORVALUE *a6)
{
  int v6; // eax
  double v7; // xmm11_8
  double v8; // xmm15_8
  __int128 v9; // xmm9
  __int128 v10; // xmm4
  double v11; // xmm5_8
  double v12; // xmm2_8
  double v13; // xmm5_8
  double v14; // xmm6_8
  float v15; // xmm0_4
  __int128 v16; // xmm1
  double v17; // xmm5_8
  double v18; // xmm0_8
  __int64 v19; // rdx
  double v20; // xmm3_8
  __int64 result; // rax
  struct _D3DCOLORVALUE *v22; // rax
  int v23; // edx
  __int64 v24; // rdx
  int v25; // edx
  void *retaddr; // [rsp+E8h] [rbp+0h]

  v9 = 0LL;
  v6 = 0;
  v7 = *(float *)(a1 + 32);
  v8 = *(float *)(a1 + 24);
  *(double *)&v9 = a2;
  v10 = v9;
  do
  {
    v11 = (1.0 - *(double *)&v10) * 3.0;
    v12 = v11 * (1.0 - *(double *)&v10) * v8;
    v13 = v11 * (*(double *)&v10 * *(double *)&v10) * v7
        + v12 * *(double *)&v10
        + *(double *)&v10 * *(double *)&v10 * *(double *)&v10;
    v14 = (1.0 - *(double *)&v10) * 6.0 * *(double *)&v10 * (v7 - v8)
        + v12
        + *(double *)&v10 * *(double *)&v10 * 3.0 * (1.0 - v7);
    v15 = v14;
    if ( COERCE_FLOAT(LODWORD(v15) & _xmm) < 0.0000011920929 )
      break;
    *((_QWORD *)&v16 + 1) = *((_QWORD *)&v10 + 1);
    v17 = (v13 - *(double *)&v9) / v14;
    *(double *)&v16 = *(double *)&v10 - v17;
    v18 = *(double *)&v10 - (*(double *)&v10 - v17);
    v10 = v16;
    *(float *)&v16 = v18;
    if ( COERCE_FLOAT(v16 & _xmm) < 0.0000011920929 )
      break;
    ++v6;
  }
  while ( v6 < 30 );
  v19 = *(unsigned int *)(a1 + 16);
  v20 = (1.0 - *(double *)&v10) * 3.0 * (1.0 - *(double *)&v10) * *(float *)(a1 + 28) * *(double *)&v10
      + (1.0 - *(double *)&v10) * 3.0 * (*(double *)&v10 * *(double *)&v10) * *(float *)(a1 + 36)
      + *(double *)&v10 * *(double *)&v10 * *(double *)&v10;
  if ( !(_DWORD)v19 )
    return KeyframeInterpolation::ExpressionValueLerp(a3, v19, a4, a5, a6);
  if ( (_DWORD)v19 == 6 )
  {
    v22 = a5;
    if ( v20 < 1.0 )
      v22 = a4;
    result = LOBYTE(v22->r);
    LODWORD(a6[4].b) = 17;
    LOBYTE(a6->r) = result;
    LOBYTE(a6[4].a) = 1;
  }
  else
  {
    v23 = v19 - 1;
    if ( v23 )
    {
      v24 = (unsigned int)(v23 - 1);
      if ( (_DWORD)v24 )
      {
        v25 = v24 - 1;
        if ( v25 )
        {
          v19 = (unsigned int)(v25 - 1);
          if ( !(_DWORD)v19 )
            return KeyframeInterpolation::ExpressionValueLerp(a3, v19, a4, a5, a6);
          if ( (_DWORD)v19 != 1 )
            ModuleFailFastForHRESULT(2147942487LL, retaddr);
          return InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd_(a4, a5, a6);
        }
        else
        {
          return InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a_(a4, a5, a6);
        }
      }
      else
      {
        return KeyframeInterpolation::InterpolateHsl(v20, v24, &a4->r, &a5->r, (__int64)a6);
      }
    }
    else
    {
      return KeyframeInterpolation::InterpolateSpherical(a1, a3, a4, a5, a6);
    }
  }
  return result;
}
