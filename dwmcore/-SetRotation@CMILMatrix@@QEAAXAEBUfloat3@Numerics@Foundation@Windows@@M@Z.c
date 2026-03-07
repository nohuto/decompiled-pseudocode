void __fastcall CMILMatrix::SetRotation(
        CMILMatrix *this,
        const struct Windows::Foundation::Numerics::float3 *a2,
        float a3)
{
  __m128 v4; // xmm3
  __m128 v5; // xmm2
  __m128 v6; // xmm1
  __m128 v7; // xmm3
  _OWORD *float4x4_from_axis_angle; // rax
  __int128 v9; // xmm1
  unsigned __int64 v10; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int32 v11; // [rsp+28h] [rbp-50h]
  int v12; // [rsp+2Ch] [rbp-4Ch] BYREF

  v4 = _mm_movelh_ps((__m128)*(unsigned __int64 *)a2, (__m128)*((unsigned int *)a2 + 2));
  v5 = _mm_mul_ps(v4, v4);
  v6 = _mm_shuffle_ps(v5, v5, 102);
  v5.m128_f32[0] = (float)(v5.m128_f32[0] + v6.m128_f32[0]) + _mm_shuffle_ps(v6, v6, 85).m128_f32[0];
  v7 = _mm_div_ps(v4, _mm_sqrt_ps(_mm_shuffle_ps(v5, v5, 0)));
  v10 = v7.m128_u64[0];
  v11 = _mm_shuffle_ps(v7, v7, 170).m128_u32[0];
  float4x4_from_axis_angle = (_OWORD *)Windows::Foundation::Numerics::make_float4x4_from_axis_angle(&v12, &v10);
  *(_OWORD *)this = *float4x4_from_axis_angle;
  *((_OWORD *)this + 1) = float4x4_from_axis_angle[1];
  *((_OWORD *)this + 2) = float4x4_from_axis_angle[2];
  v9 = float4x4_from_axis_angle[3];
  *((_DWORD *)this + 16) = 0;
  *((_OWORD *)this + 3) = v9;
}
