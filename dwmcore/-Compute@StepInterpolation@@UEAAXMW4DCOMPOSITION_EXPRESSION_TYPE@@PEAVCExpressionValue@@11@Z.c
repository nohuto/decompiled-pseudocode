/*
 * XREFs of ?Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800D53D0
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

char __fastcall StepInterpolation::Compute(
        __int64 a1,
        float a2,
        unsigned int a3,
        struct _D3DCOLORVALUE *a4,
        struct _D3DCOLORVALUE *a5,
        struct _D3DCOLORVALUE *a6)
{
  float v6; // xmm0_4
  __m128 v8; // xmm3
  __int64 v9; // rdx
  __m128 v10; // xmm2
  int v11; // ecx
  unsigned int v12; // ecx
  __m128i v13; // xmm1
  int v14; // ecx
  double v15; // xmm1_8
  char result; // al
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  struct _D3DCOLORVALUE *v22; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v6 = a2 / *(float *)(a1 + 44);
  v8 = 0LL;
  v9 = (unsigned int)(int)v6;
  v8.m128_f32[0] = v6;
  v10.m128_f32[0] = (float)(int)v9;
  v11 = v9 + _mm_cmplt_ss(v8, v10).m128_u32[0];
  if ( a2 == 1.0 )
    --v11;
  v12 = *(_DWORD *)(a1 + 28) + v11;
  if ( a2 == 0.0 && *(_DWORD *)(a1 + 36) )
  {
    --v12;
  }
  else if ( a2 == 1.0 && *(_DWORD *)(a1 + 40) )
  {
    ++v12;
  }
  v13 = _mm_cvtsi32_si128(v12);
  v14 = *(_DWORD *)(a1 + 16);
  v15 = _mm_cvtepi32_pd(v13).m128d_f64[0] / (double)*(int *)(a1 + 24);
  if ( !v14 )
    return KeyframeInterpolation::ExpressionValueLerp(a3, v9, a4, a5, a6);
  v17 = (unsigned int)(v14 - 1);
  if ( !(_DWORD)v17 )
    return KeyframeInterpolation::InterpolateSpherical(v17, a3, a4, a5, a6);
  v18 = v17 - 1;
  if ( !v18 )
    return KeyframeInterpolation::InterpolateHsl(v15, v9, &a4->r, &a5->r, (__int64)a6);
  v19 = v18 - 1;
  if ( !v19 )
    return InterpolateInLinearGamma__lambda_3407e8815db8ff72220510f30343e01a_(a4, a5, a6);
  v20 = v19 - 1;
  if ( !v20 )
    return KeyframeInterpolation::ExpressionValueLerp(a3, v9, a4, a5, a6);
  v21 = v20 - 1;
  if ( !v21 )
    return InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd_(a4, a5, a6);
  if ( v21 != 1 )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  v22 = a5;
  if ( v15 < 1.0 )
    v22 = a4;
  result = LOBYTE(v22->r);
  LODWORD(a6[4].b) = 17;
  LOBYTE(a6->r) = result;
  LOBYTE(a6[4].a) = 1;
  return result;
}
