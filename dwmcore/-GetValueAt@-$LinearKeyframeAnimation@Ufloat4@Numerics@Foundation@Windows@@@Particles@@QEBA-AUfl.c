// local variable allocation has failed, the output may be wrong!
_OWORD *__fastcall Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float4>::GetValueAt(
        __int64 a1,
        __int64 a2,
        double a3,
        __int64 a4,
        __int64 a5)
{
  __m128 v5; // xmm6
  unsigned int FirstFrameIndex; // eax
  __int64 v8; // rcx
  _OWORD *v9; // r10
  __int64 v10; // r11
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  __m128 v13; // xmm2
  __m128 v14; // xmm4
  __m128 v15; // xmm3
  __m128 v16; // xmm5
  __m128 v17; // xmm1

  v5 = *(__m128 *)&a3;
  FirstFrameIndex = Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float4>::FindFirstFrameIndex(
                      a1,
                      *(float *)&a3);
  v10 = *(_QWORD *)(v8 + 8);
  v11 = FirstFrameIndex + 1;
  if ( v11 >= 0x6DB6DB6DB6DB6DB7LL * ((*(_QWORD *)(v8 + 16) - v10) >> 2) )
  {
    *v9 = *(_OWORD *)(*(_QWORD *)(v8 + 16) - 24LL);
  }
  else
  {
    v12 = 28LL * FirstFrameIndex;
    v13 = *(__m128 *)*(_QWORD *)(a4 + 8);
    v14 = (__m128)*(unsigned int *)(28 * v11 + v10 + 20);
    v15 = *(__m128 *)*(_QWORD *)(a5 + 8);
    v16 = _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(
                _mm_shuffle_ps((__m128)*(unsigned int *)(v12 + v10 + 20), (__m128)*(unsigned int *)(v12 + v10 + 20), 0),
                v13),
              *(__m128 *)(v12 + v10 + 4)),
            _mm_mul_ps(
              _mm_shuffle_ps((__m128)*(unsigned int *)(v12 + v10 + 24), (__m128)*(unsigned int *)(v12 + v10 + 24), 0),
              v15));
    v17 = (__m128)*(unsigned int *)(28 * v11 + v10 + 24);
    v5.m128_f32[0] = fmaxf(
                       fminf(
                         (float)(v5.m128_f32[0] - *(float *)(v12 + v10))
                       / (float)(*(float *)(28 * v11 + v10) - *(float *)(v12 + v10)),
                         1.0),
                       0.0);
    *v9 = _mm_add_ps(
            _mm_mul_ps(
              _mm_sub_ps(
                _mm_add_ps(
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), v13), *(__m128 *)(28 * v11 + v10 + 4)),
                  _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v15)),
                v16),
              _mm_shuffle_ps(v5, v5, 0)),
            v16);
  }
  return v9;
}
