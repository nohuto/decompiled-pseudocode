__int64 __fastcall CExpressionValueStack::DistanceSquared(__int64 this)
{
  unsigned int v1; // eax
  __int64 v2; // rsi
  unsigned int v3; // r14d
  __int64 v4; // rax
  const __m128i *v5; // rdi
  CExpressionValue *v6; // rax
  __m128i *v7; // rbx
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  __int32 v10; // eax
  __m128 v11; // xmm4
  __m128 v12; // xmm2
  float v13; // xmm3_4
  float v14; // xmm1_4
  float v15; // xmm5_4
  float v16; // xmm0_4
  float v17; // xmm5_4
  unsigned int v19; // [rsp+28h] [rbp-29h]
  _BYTE v20[80]; // [rsp+58h] [rbp+7h] BYREF

  v1 = *(_DWORD *)(this + 16);
  v2 = this;
  if ( v1 >= 2 )
  {
    v4 = v1 - 2;
    v5 = (const __m128i *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v4 < *(_DWORD *)(this + 48) )
    {
      v7 = (__m128i *)(*(_QWORD *)(this + 24) + 80 * v4);
    }
    else
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
      v7 = (__m128i *)&CExpressionValueStack::s_emptyValue;
    }
    v8 = (unsigned int)(*(_DWORD *)(v2 + 16) - 1);
    if ( (unsigned int)v8 < *(_DWORD *)(v2 + 48) )
    {
      v5 = (const __m128i *)(*(_QWORD *)(v2 + 24) + 80 * v8);
    }
    else
    {
      v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
    }
    v10 = v7[4].m128i_i32[2];
    v3 = 0;
    if ( v10 == v5[4].m128i_i32[2] )
    {
      this = 18LL;
      switch ( v10 )
      {
        case 18:
          v17 = (float)(*(float *)v7->m128i_i32 - *(float *)v5->m128i_i32)
              * (float)(*(float *)v7->m128i_i32 - *(float *)v5->m128i_i32);
          break;
        case 35:
          v17 = (float)((float)(*(float *)&v7->m128i_i32[1] - *(float *)&v5->m128i_i32[1])
                      * (float)(*(float *)&v7->m128i_i32[1] - *(float *)&v5->m128i_i32[1]))
              + (float)((float)(*(float *)v7->m128i_i32 - *(float *)v5->m128i_i32)
                      * (float)(*(float *)v7->m128i_i32 - *(float *)v5->m128i_i32));
          break;
        case 52:
          v17 = (float)((float)((float)(COERCE_FLOAT(HIDWORD(v7->m128i_i64[0])) - COERCE_FLOAT(HIDWORD(v5->m128i_i64[0])))
                              * (float)(COERCE_FLOAT(HIDWORD(v7->m128i_i64[0])) - COERCE_FLOAT(HIDWORD(v5->m128i_i64[0]))))
                      + (float)((float)(COERCE_FLOAT(v7->m128i_i64[0]) - COERCE_FLOAT(v5->m128i_i64[0]))
                              * (float)(COERCE_FLOAT(v7->m128i_i64[0]) - COERCE_FLOAT(v5->m128i_i64[0]))))
              + (float)((float)(*(float *)&v7->m128i_i32[2] - *(float *)&v5->m128i_i32[2])
                      * (float)(*(float *)&v7->m128i_i32[2] - *(float *)&v5->m128i_i32[2]));
          break;
        case 69:
          v11 = (__m128)_mm_loadu_si128(v7);
          v12 = (__m128)_mm_loadu_si128(v5);
          v13 = v11.m128_f32[0] - v12.m128_f32[0];
          v14 = _mm_shuffle_ps(v11, v11, 170).m128_f32[0];
          v15 = _mm_shuffle_ps(v11, v11, 85).m128_f32[0] - _mm_shuffle_ps(v12, v12, 85).m128_f32[0];
          v11.m128_f32[0] = _mm_shuffle_ps(v11, v11, 255).m128_f32[0];
          v16 = _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
          v12.m128_f32[0] = _mm_shuffle_ps(v12, v12, 255).m128_f32[0];
          v17 = (float)((float)((float)(v15 * v15) + (float)(v13 * v13))
                      + (float)((float)(v14 - v16) * (float)(v14 - v16)))
              + (float)((float)(v11.m128_f32[0] - v12.m128_f32[0]) * (float)(v11.m128_f32[0] - v12.m128_f32[0]));
          break;
        default:
          v19 = 3761;
          goto LABEL_3;
      }
      v7[4].m128i_i8[12] = 1;
      v7[4].m128i_i32[2] = 18;
      *(float *)v7->m128i_i32 = v17;
      --*(_DWORD *)(v2 + 16);
      return v3;
    }
    v19 = 3701;
  }
  else
  {
    v19 = 3678;
  }
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v19,
    0LL);
  return v3;
}
