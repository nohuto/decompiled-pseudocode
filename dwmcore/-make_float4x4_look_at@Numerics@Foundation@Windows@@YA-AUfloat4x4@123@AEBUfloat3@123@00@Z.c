/*
 * XREFs of ?make_float4x4_look_at@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@00@Z @ 0x18000776C
 * Callers:
 *     ?GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@AEBUfloat3@Numerics@Foundation@Windows@@PEAVCMILMatrix@@@Z @ 0x18000762C (-GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@AEBUfloat3@Num.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Numerics::make_float4x4_look_at(__int64 a1, float *a2, float *a3, __int64 a4)
{
  float v4; // xmm3_4
  __m128 v5; // xmm4
  __m128 v6; // xmm7
  __m128 v7; // xmm10
  float v8; // xmm12_4
  __m128 v9; // xmm1
  float v10; // xmm13_4
  __m128 v11; // xmm2
  __m128 v12; // xmm10
  __m128 v13; // xmm2
  __m128 v14; // xmm1
  __m128 v15; // xmm10
  float v16; // xmm9_4
  float v17; // xmm8_4
  float v18; // xmm0_4
  __m128 v19; // xmm10
  __m128 v20; // xmm2
  __m128 v21; // xmm7
  __m128 v22; // xmm2
  __m128 v23; // xmm1
  __m128 v24; // xmm7
  float v25; // xmm6_4
  float v26; // xmm5_4
  __int64 result; // rax

  v4 = *(float *)(a4 + 4);
  v5 = (__m128)*(unsigned int *)(a4 + 8);
  v6 = 0LL;
  v7 = 0LL;
  v8 = *a2;
  v9 = (__m128)*(unsigned int *)a2;
  v9.m128_f32[0] = v9.m128_f32[0] - *a3;
  v10 = a2[1];
  v11 = (__m128)LODWORD(v10);
  v11.m128_f32[0] = v10 - a3[1];
  v7.m128_u64[0] = _mm_unpacklo_ps(v9, v11).m128_u64[0];
  v12 = _mm_movelh_ps(v7, (__m128)COERCE_UNSIGNED_INT(a2[2] - a3[2]));
  v13 = _mm_mul_ps(v12, v12);
  v14 = _mm_shuffle_ps(v13, v13, 102);
  v13.m128_f32[0] = (float)(v13.m128_f32[0] + v14.m128_f32[0]) + _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
  v15 = _mm_div_ps(v12, _mm_sqrt_ps(_mm_shuffle_ps(v13, v13, 0)));
  v16 = v15.m128_f32[1];
  v17 = v15.m128_f32[0];
  v18 = v5.m128_f32[0] * v15.m128_f32[1];
  v19 = _mm_shuffle_ps(v15, v15, 170);
  v20 = v19;
  v20.m128_f32[0] = (float)(v19.m128_f32[0] * v4) - v18;
  v5.m128_f32[0] = (float)(v5.m128_f32[0] * v17) - (float)(v19.m128_f32[0] * *(float *)a4);
  v6.m128_u64[0] = _mm_unpacklo_ps(v20, v5).m128_u64[0];
  v21 = _mm_movelh_ps(v6, (__m128)COERCE_UNSIGNED_INT((float)(*(float *)a4 * v16) - (float)(v4 * v17)));
  v22 = _mm_mul_ps(v21, v21);
  v23 = _mm_shuffle_ps(v22, v22, 102);
  v22.m128_f32[0] = (float)(v22.m128_f32[0] + v23.m128_f32[0]) + _mm_shuffle_ps(v23, v23, 85).m128_f32[0];
  v24 = _mm_div_ps(v21, _mm_sqrt_ps(_mm_shuffle_ps(v22, v22, 0)));
  v22.m128_i32[0] = v24.m128_i32[0];
  v24.m128_f32[0] = _mm_shuffle_ps(v24, v24, 170).m128_f32[0];
  v25 = (float)(v24.m128_f32[0] * v16) - (float)(v19.m128_f32[0] * v24.m128_f32[1]);
  *(_DWORD *)(a1 + 60) = 1065353216;
  *(float *)(a1 + 4) = v25;
  *(_DWORD *)(a1 + 12) = 0;
  v26 = (float)(v19.m128_f32[0] * v22.m128_f32[0]) - (float)(v24.m128_f32[0] * v17);
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  result = a1;
  *(float *)(a1 + 20) = v26;
  v5.m128_f32[0] = (float)(v17 * v24.m128_f32[1]) - (float)(v22.m128_f32[0] * v16);
  *(_DWORD *)(a1 + 40) = v19.m128_i32[0];
  v19.m128_f32[0] = v19.m128_f32[0] * a2[2];
  *(_DWORD *)(a1 + 32) = v24.m128_i32[0];
  v24.m128_f32[0] = v24.m128_f32[0] * a2[2];
  *(_DWORD *)(a1 + 36) = v5.m128_i32[0];
  v5.m128_f32[0] = v5.m128_f32[0] * a2[2];
  *(float *)(a1 + 8) = v17;
  *(_DWORD *)(a1 + 56) = COERCE_UNSIGNED_INT((float)((float)(v10 * v16) + (float)(v8 * v17)) + v19.m128_f32[0]) ^ _xmm;
  *(float *)(a1 + 24) = v16;
  *(_DWORD *)(a1 + 48) = COERCE_UNSIGNED_INT((float)((float)(v10 * v24.m128_f32[1]) + (float)(v8 * v22.m128_f32[0])) + v24.m128_f32[0]) ^ _xmm;
  *(_DWORD *)a1 = v22.m128_i32[0];
  *(_DWORD *)(a1 + 16) = v24.m128_i32[1];
  *(_DWORD *)(a1 + 52) = COERCE_UNSIGNED_INT((float)((float)(v26 * v10) + (float)(v25 * v8)) + v5.m128_f32[0]) ^ _xmm;
  return result;
}
