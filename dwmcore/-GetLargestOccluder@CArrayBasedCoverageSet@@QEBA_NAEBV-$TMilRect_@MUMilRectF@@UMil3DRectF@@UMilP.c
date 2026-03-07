bool __fastcall CArrayBasedCoverageSet::GetLargestOccluder(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r10
  __int64 v4; // r11
  float i; // xmm5_4
  __int64 v6; // rcx
  const __m128i *v7; // rdx
  __int64 v8; // rcx
  _OWORD *v9; // r9
  int v10; // r10d
  __m128i v11; // xmm0
  float v12; // xmm3_4
  float v13; // xmm6_4
  float v14; // xmm4_4
  float v15; // xmm1_4
  float v16; // xmm7_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  __m128i v20; // [rsp+20h] [rbp-38h]

  v3 = 0LL;
  v4 = a1;
  for ( i = 0.0; (unsigned int)v3 < *(_DWORD *)(v4 + 24); v3 = (unsigned int)(v10 + 1) )
  {
    v6 = *(_QWORD *)v4 + 36 * v3;
    if ( *(_DWORD *)(v6 + 16) >= a3 )
      break;
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v6) )
    {
      v11 = _mm_loadu_si128(v7);
      v20 = v11;
      if ( *(float *)v8 > *(float *)v11.m128i_i32 )
        v11.m128i_i32[0] = *(_DWORD *)v8;
      v12 = *(float *)&v20.m128i_i32[1];
      v13 = *(float *)&v20.m128i_i32[1];
      if ( *(float *)(v8 + 4) > *(float *)&v20.m128i_i32[1] )
      {
        v12 = *(float *)(v8 + 4);
        v13 = v12;
      }
      v14 = *(float *)&v20.m128i_i32[2];
      v15 = *(float *)&v20.m128i_i32[2];
      v16 = *(float *)&v20.m128i_i32[2];
      if ( *(float *)&v20.m128i_i32[2] > *(float *)(v8 + 8) )
      {
        v14 = *(float *)(v8 + 8);
        v15 = v14;
        v16 = v14;
      }
      v17 = *(float *)&v20.m128i_i32[3];
      if ( *(float *)&v20.m128i_i32[3] > *(float *)(v8 + 12) )
      {
        v17 = *(float *)(v8 + 12);
        v15 = v16;
      }
      if ( v14 > *(float *)v11.m128i_i32 && v17 > v13 )
      {
        v18 = (float)(v15 - *(float *)v11.m128i_i32) * (float)(v17 - v12);
        if ( v18 > i )
        {
          i = v18;
          *v9 = *(_OWORD *)v8;
        }
      }
    }
  }
  return i > 0.0;
}
