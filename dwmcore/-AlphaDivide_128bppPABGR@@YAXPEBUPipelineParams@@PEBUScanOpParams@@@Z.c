void __fastcall AlphaDivide_128bppPABGR(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  int v2; // eax
  const __m128i *v3; // r9
  __m128 *i; // r8
  __m128 v5; // xmm0
  float v6; // xmm1_4
  __m128 v7; // [rsp+0h] [rbp-18h]

  v2 = *((_DWORD *)a1 + 2);
  v3 = (const __m128i *)*((_QWORD *)a2 + 1);
  for ( i = *(__m128 **)a2; v2; ++v3 )
  {
    v5 = (__m128)_mm_loadu_si128(v3);
    --v2;
    v6 = _mm_shuffle_ps(v5, v5, 255).m128_f32[0];
    v7.m128_i32[3] = v5.m128_i32[3];
    if ( v6 != 1.0 )
    {
      if ( v6 == 0.0 )
      {
        *(unsigned __int64 *)((char *)v7.m128_u64 + 4) = 0LL;
        v7.m128_i32[0] = 0;
      }
      else
      {
        v7.m128_f32[0] = v5.m128_f32[0] * (float)(1.0 / v6);
        v7.m128_f32[1] = v5.m128_f32[1] * (float)(1.0 / v6);
        v7.m128_f32[2] = v5.m128_f32[2] * (float)(1.0 / v6);
      }
      v5 = v7;
    }
    *i++ = v5;
  }
}
