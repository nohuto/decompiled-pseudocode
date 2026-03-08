/*
 * XREFs of ?SetPoints@?$CBezierFlattener@MVCMilPoint2F@@@@QEAAXAEBVCMilPoint2F@@000@Z @ 0x180083780
 * Callers:
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x180016234 (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 *     ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x180082A70 (-AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z.c)
 *     ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x1802AC128 (-InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z.c)
 * Callees:
 *     ?HalveTheStep@?$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ @ 0x1800838F4 (-HalveTheStep@-$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ.c)
 */

__m128 __fastcall CBezierFlattener<float,CMilPoint2F>::SetPoints(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  float v5; // xmm6_4
  float v6; // xmm3_4
  float v7; // xmm5_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  float v10; // xmm7_4
  __m128 result; // xmm0
  __int64 v12; // [rsp+50h] [rbp+8h]

  v12 = *a2;
  v5 = COERCE_FLOAT(*a2);
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = *a3;
  *(_QWORD *)(a1 + 16) = *a4;
  *(_QWORD *)(a1 + 24) = *a5;
  *(_QWORD *)(a1 + 48) = __PAIR64__(HIDWORD(v12), LODWORD(v5));
  v6 = *(float *)(a1 + 24);
  *(float *)(a1 + 60) = *(float *)(a1 + 28) - *((float *)&v12 + 1);
  *(float *)(a1 + 56) = v6 - v5;
  v7 = *(float *)(a1 + 16);
  v8 = *(float *)(a1 + 8);
  v9 = (float)((float)(*(float *)(a1 + 12) - (float)(*(float *)(a1 + 20) + *(float *)(a1 + 20))) + *(float *)(a1 + 28))
     * 6.0;
  *(float *)(a1 + 64) = (float)((float)(v8 - (float)(v7 + v7)) + v6) * 6.0;
  *(float *)(a1 + 68) = v9;
  v10 = (float)(*((float *)&v12 + 1) - (float)(*(float *)(a1 + 12) + *(float *)(a1 + 12))) + *(float *)(a1 + 20);
  *(_DWORD *)(a1 + 84) = 0;
  *(float *)(a1 + 72) = (float)((float)(v5 - (float)(v8 + v8)) + v7) * 6.0;
  *(_DWORD *)(a1 + 88) = 1065353216;
  *(_DWORD *)(a1 + 80) = 1;
  *(float *)(a1 + 76) = v10 * 6.0;
  while ( 1 )
  {
    if ( fmaxf(COERCE_FLOAT(*(_DWORD *)(a1 + 64) & _xmm), COERCE_FLOAT(*(_DWORD *)(a1 + 68) & _xmm)) <= *(float *)(a1 + 32) )
    {
      result = _mm_and_ps((__m128)*(unsigned int *)(a1 + 76), (__m128)(unsigned int)_xmm);
      if ( fmaxf(COERCE_FLOAT(*(_DWORD *)(a1 + 72) & _xmm), result.m128_f32[0]) <= *(float *)(a1 + 32) )
        break;
    }
    result = (__m128)_mm_cvtps_pd((__m128)*(unsigned int *)(a1 + 88));
    if ( *(double *)result.m128_u64 <= 0.001 )
      break;
    CBezierFlattener<float,CMilPoint2F>::HalveTheStep(a1);
  }
  return result;
}
