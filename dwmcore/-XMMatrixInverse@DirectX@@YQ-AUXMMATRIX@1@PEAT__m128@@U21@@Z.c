// local variable allocation has failed, the output may be wrong!
__m128 __fastcall DirectX::XMMatrixInverse(__m128 *a1, double a2, double a3, double a4)
{
  __m128 v4; // xmm0
  __m128 v5; // xmm11
  __m128 v6; // xmm13
  __m128 v7; // xmm1
  __m128 v8; // xmm2
  __m128 v9; // xmm12
  __m128 v10; // xmm13
  __m128 v11; // xmm14
  __m128 v12; // xmm11
  __m128 v13; // xmm14
  __m128 v14; // xmm10
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  __m128 v17; // xmm0
  __m128 v18; // xmm11
  __m128 v19; // xmm1
  __m128 v20; // xmm1
  __m128 v21; // xmm0
  __m128 v22; // xmm14
  __m128 v23; // xmm0
  __m128 v24; // xmm0

  v5 = _mm_shuffle_ps(v4, *(__m128 *)&a2, 68);
  v6 = _mm_shuffle_ps(v4, *(__m128 *)&a2, 238);
  v7 = _mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a4, 68);
  v8 = _mm_shuffle_ps(*(__m128 *)&a3, *(__m128 *)&a4, 238);
  v9 = _mm_shuffle_ps(v6, v8, 136);
  v10 = _mm_shuffle_ps(v6, v8, 221);
  v11 = v5;
  v12 = _mm_shuffle_ps(v5, v7, 221);
  v13 = _mm_shuffle_ps(v11, v7, 136);
  v14 = _mm_sub_ps(
          _mm_mul_ps(_mm_shuffle_ps(v10, v10, 238), _mm_shuffle_ps(v9, v9, 80)),
          _mm_mul_ps(_mm_shuffle_ps(v9, v9, 238), _mm_shuffle_ps(v10, v10, 80)));
  v15 = _mm_sub_ps(
          _mm_mul_ps(_mm_shuffle_ps(v10, v12, 221), _mm_shuffle_ps(v9, v13, 136)),
          _mm_mul_ps(_mm_shuffle_ps(v9, v13, 221), _mm_shuffle_ps(v10, v12, 136)));
  v16 = _mm_sub_ps(
          _mm_mul_ps(_mm_shuffle_ps(v12, v12, 73), _mm_shuffle_ps(_mm_shuffle_ps(v14, v15, 93), v14, 50)),
          _mm_mul_ps(_mm_shuffle_ps(v12, v12, 158), _mm_shuffle_ps(v14, _mm_shuffle_ps(v14, v15, 4), 147)));
  v17 = _mm_shuffle_ps(v14, v15, 74);
  v18 = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 51), _mm_shuffle_ps(v17, v17, 44));
  v19 = _mm_shuffle_ps(_mm_add_ps(v16, v18), _mm_sub_ps(v16, v18), 216);
  v20 = _mm_shuffle_ps(v19, v19, 216);
  v21 = _mm_mul_ps(v13, v20);
  v22 = _mm_add_ps(_mm_shuffle_ps(v13, v21, 64), v21);
  v23 = _mm_add_ps(_mm_shuffle_ps(v21, v22, 48), v22);
  v24 = _mm_shuffle_ps(v23, v23, 170);
  if ( a1 )
    *a1 = v24;
  return _mm_mul_ps(_mm_div_ps(DirectX::g_XMOne, v24), v20);
}
