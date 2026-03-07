unsigned __int64 __fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>::NormalizeFrames(
        __int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // r8
  unsigned __int64 result; // rax
  __int64 v5; // rcx
  __m128 v6; // xmm3
  __m128 v7; // xmm2
  __m128 v8; // xmm1
  __m128 v9; // xmm0
  __m128 v10; // xmm2
  __m128 v11; // xmm3
  __int128 v12; // [rsp+Ch] [rbp-2Ch]

  v2 = 0LL;
  while ( 1 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    result = 0xAAAAAAAAAAAAAAABuLL * ((*(_QWORD *)(a1 + 16) - v3) >> 3);
    if ( (unsigned int)v2 >= result )
      break;
    v5 = 3 * v2;
    v2 = (unsigned int)(v2 + 1);
    v6 = _mm_movelh_ps((__m128)*(unsigned __int64 *)(v3 + 8 * v5 + 4), (__m128)*(unsigned int *)(v3 + 8 * v5 + 12));
    v7 = _mm_mul_ps(v6, v6);
    v8 = _mm_shuffle_ps(v7, v7, 102);
    v7.m128_f32[0] = (float)(v7.m128_f32[0] + v8.m128_f32[0]) + _mm_shuffle_ps(v8, v8, 85).m128_f32[0];
    v9 = _mm_sqrt_ps(_mm_shuffle_ps(v7, v7, 0));
    v10 = (__m128)*(unsigned int *)(v3 + 8 * v5 + 20);
    v11 = _mm_div_ps(v6, v9);
    LODWORD(v12) = *(_DWORD *)(v3 + 8 * v5);
    *(_QWORD *)((char *)&v12 + 4) = v11.m128_u64[0];
    HIDWORD(v12) = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
    *(_OWORD *)(v3 + 8 * v5) = v12;
    *(_QWORD *)(v3 + 8 * v5 + 16) = _mm_unpacklo_ps((__m128)*(unsigned int *)(v3 + 8 * v5 + 16), v10).m128_u64[0];
  }
  return result;
}
