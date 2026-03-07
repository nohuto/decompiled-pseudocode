__int64 __fastcall CRegionShape::GetTightBounds(__int64 a1, __int64 a2, __int64 a3)
{
  int *v4; // rdx
  __int64 v5; // rax
  __m128i v6; // xmm2
  __m128i v7; // xmm3
  float v8; // xmm1_4
  __int64 result; // rax
  struct MilRectF *v10; // r9
  CMILMatrix *v11; // r10

  v4 = *(int **)(a1 + 16);
  v5 = *v4;
  if ( (_DWORD)v5 )
  {
    v6 = _mm_cvtsi32_si128(v4[2]);
    v7 = _mm_cvtsi32_si128(v4[2 * v5 + 1]);
    v8 = (float)v4[3];
    *(float *)a2 = (float)v4[1];
    *(float *)(a2 + 4) = v8;
    *(_DWORD *)(a2 + 8) = _mm_cvtepi32_ps(v6).m128_u32[0];
    *(_DWORD *)(a2 + 12) = _mm_cvtepi32_ps(v7).m128_u32[0];
    if ( a3 )
    {
      if ( !CMILMatrix::IsIdentity<0>(a3) )
        CMILMatrix::Transform2DBoundsHelper<0>(v11, v10, (float *)v10);
    }
    return 0LL;
  }
  else
  {
    result = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)a2 = 0LL;
  }
  return result;
}
