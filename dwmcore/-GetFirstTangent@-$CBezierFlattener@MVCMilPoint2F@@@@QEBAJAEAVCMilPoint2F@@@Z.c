/*
 * XREFs of ?GetFirstTangent@?$CBezierFlattener@MVCMilPoint2F@@@@QEBAJAEAVCMilPoint2F@@@Z @ 0x1800164E4
 * Callers:
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x180016234 (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 *     ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x1802AC128 (-InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBezierFlattener<float,CMilPoint2F>::GetFirstTangent(__int64 a1, __int64 a2)
{
  __m128 v2; // xmm0
  __int64 result; // rax
  __m128 v4; // xmm1
  __m128 v5; // xmm0
  __m128 v6; // xmm1
  __m128 v7; // xmm0
  __m128 v8; // xmm1

  v2 = (__m128)*(unsigned int *)(a1 + 8);
  result = 0LL;
  v2.m128_f32[0] = v2.m128_f32[0] - *(float *)a1;
  v4 = (__m128)*(unsigned int *)(a1 + 12);
  v4.m128_f32[0] = v4.m128_f32[0] - *(float *)(a1 + 4);
  *(_QWORD *)a2 = _mm_unpacklo_ps(v2, v4).m128_u64[0];
  if ( (float)((float)(*(float *)a2 * *(float *)a2) + (float)(*(float *)(a2 + 4) * *(float *)(a2 + 4))) <= *(float *)(a1 + 44) )
  {
    v5 = (__m128)*(unsigned int *)(a1 + 16);
    v6 = (__m128)*(unsigned int *)(a1 + 20);
    v6.m128_f32[0] = v6.m128_f32[0] - *(float *)(a1 + 4);
    v5.m128_f32[0] = v5.m128_f32[0] - *(float *)a1;
    *(_QWORD *)a2 = _mm_unpacklo_ps(v5, v6).m128_u64[0];
    if ( (float)((float)(*(float *)a2 * *(float *)a2) + (float)(*(float *)(a2 + 4) * *(float *)(a2 + 4))) <= *(float *)(a1 + 44) )
    {
      v7 = (__m128)*(unsigned int *)(a1 + 24);
      v8 = (__m128)*(unsigned int *)(a1 + 28);
      v8.m128_f32[0] = v8.m128_f32[0] - *(float *)(a1 + 4);
      v7.m128_f32[0] = v7.m128_f32[0] - *(float *)a1;
      *(_QWORD *)a2 = _mm_unpacklo_ps(v7, v8).m128_u64[0];
      if ( *(float *)(a1 + 44) >= (float)((float)(*(float *)a2 * *(float *)a2)
                                        + (float)(*(float *)(a2 + 4) * *(float *)(a2 + 4))) )
        return 2147500037LL;
    }
  }
  return result;
}
