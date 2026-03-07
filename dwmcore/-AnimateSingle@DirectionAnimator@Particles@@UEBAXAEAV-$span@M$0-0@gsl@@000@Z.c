__int64 __fastcall Particles::DirectionAnimator::AnimateSingle(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        gsl::details *a4,
        __int64 a5)
{
  __int64 v5; // rcx
  __m128 v7; // xmm3
  __m128 v8; // xmm2
  __m128 v9; // xmm1
  __m128 v10; // xmm3
  float *v11; // rax
  __m128 v12; // xmm2
  __m128 v13; // xmm1
  __int64 v14; // rcx
  __int64 result; // rax
  unsigned __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  float v17; // [rsp+38h] [rbp-28h]
  unsigned __int64 v18; // [rsp+40h] [rbp-20h]
  _QWORD v19[2]; // [rsp+50h] [rbp-10h] BYREF

  v5 = *(_QWORD *)(a1 + 8);
  v19[0] = 3LL;
  v19[1] = &v16;
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*(_QWORD *)v5 + 8LL))(v5, a2, a3, v19);
  v7 = _mm_movelh_ps((__m128)v16, (__m128)LODWORD(v17));
  v8 = _mm_mul_ps(v7, v7);
  v9 = _mm_shuffle_ps(v8, v8, 102);
  v8.m128_f32[0] = (float)(v8.m128_f32[0] + v9.m128_f32[0]) + _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
  v10 = _mm_div_ps(v7, _mm_sqrt_ps(_mm_shuffle_ps(v8, v8, 0)));
  v18 = v10.m128_u64[0];
  v16 = v10.m128_u64[0];
  LODWORD(v17) = _mm_shuffle_ps(v10, v10, 170).m128_u32[0];
  v11 = (float *)gsl::span<float,-1>::operator[](a4);
  v12 = (__m128)(unsigned int)v16;
  v13 = (__m128)HIDWORD(v16);
  v12.m128_f32[0] = *(float *)&v16 * *v11;
  v13.m128_f32[0] = *((float *)&v16 + 1) * *v11;
  v17 = v17 * *v11;
  v14 = *(_QWORD *)(a5 + 8);
  *(_QWORD *)v14 = _mm_unpacklo_ps(v12, v13).m128_u64[0];
  result = LODWORD(v17);
  *(float *)(v14 + 8) = v17;
  return result;
}
