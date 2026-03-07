__int64 __fastcall CExpressionValueStack::Length(__int64 this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rax
  CExpressionValue *v4; // rax
  __m128i *v5; // rbx
  __int32 v6; // eax
  float v7; // xmm0_4
  float v8; // xmm0_4
  __m128 v9; // xmm3
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  unsigned int v14; // [rsp+20h] [rbp-78h]
  _BYTE v15[88]; // [rsp+40h] [rbp-58h] BYREF

  v1 = *(_DWORD *)(this + 16);
  if ( v1 )
  {
    v3 = (unsigned int)(v1 - 1);
    if ( (unsigned int)v3 < *(_DWORD *)(this + 48) )
    {
      v5 = (__m128i *)(*(_QWORD *)(this + 24) + 80 * v3);
    }
    else
    {
      v4 = CExpressionValue::CExpressionValue((CExpressionValue *)v15);
      v5 = (__m128i *)&CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v4);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v15);
    }
    v6 = v5[4].m128i_i32[2];
    this = 18LL;
    if ( v6 == 18 )
    {
      LODWORD(v8) = v5->m128i_i32[0] & _xmm;
      v5[4].m128i_i32[2] = 18;
    }
    else
    {
      switch ( v6 )
      {
        case '#':
          v7 = (float)(*(float *)v5->m128i_i32 * *(float *)v5->m128i_i32)
             + (float)(*(float *)&v5->m128i_i32[1] * *(float *)&v5->m128i_i32[1]);
          break;
        case '4':
          v7 = (float)((float)(COERCE_FLOAT(HIDWORD(v5->m128i_i64[0])) * COERCE_FLOAT(HIDWORD(v5->m128i_i64[0])))
                     + (float)(COERCE_FLOAT(v5->m128i_i64[0]) * COERCE_FLOAT(v5->m128i_i64[0])))
             + (float)(*(float *)&v5->m128i_i32[2] * *(float *)&v5->m128i_i32[2]);
          break;
        case 'E':
          v9 = (__m128)_mm_loadu_si128(v5);
          v10 = _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
          v11 = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
          v12 = (float)(v10 * v10) + (float)(v9.m128_f32[0] * v9.m128_f32[0]);
          v9.m128_f32[0] = _mm_shuffle_ps(v9, v9, 255).m128_f32[0];
          v7 = (float)(v12 + (float)(v11 * v11)) + (float)(v9.m128_f32[0] * v9.m128_f32[0]);
          break;
        case 'G':
          v7 = (float)((float)((float)(*(float *)v5->m128i_i32 * *(float *)v5->m128i_i32)
                             + (float)(*(float *)&v5->m128i_i32[1] * *(float *)&v5->m128i_i32[1]))
                     + (float)(*(float *)&v5->m128i_i32[2] * *(float *)&v5->m128i_i32[2]))
             + (float)(*(float *)&v5->m128i_i32[3] * *(float *)&v5->m128i_i32[3]);
          break;
        default:
          v14 = 3439;
          goto LABEL_3;
      }
      v5[4].m128i_i32[2] = 18;
      v8 = sqrtf_0(v7);
    }
    *(float *)v5->m128i_i32 = v8;
    v5[4].m128i_i8[12] = 1;
    return 0;
  }
  v14 = 3381;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v14,
    0LL);
  return v2;
}
