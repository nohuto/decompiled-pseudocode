__int64 __fastcall CExpressionValueStack::Vector4Dot(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v3; // ebx
  __int64 v4; // rax
  const __m128i *v5; // rbx
  CExpressionValue *v6; // rax
  __m128i *v7; // rsi
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  __m128 v10; // xmm5
  __m128 v11; // xmm4
  unsigned int v13; // [rsp+20h] [rbp-68h]
  _BYTE v14[80]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 2 )
  {
    v4 = v1 - 2;
    v5 = (const __m128i *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v4 < *((_DWORD *)this + 12) )
    {
      v7 = (__m128i *)(*((_QWORD *)this + 3) + 80 * v4);
    }
    else
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v14);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v14);
      v7 = (__m128i *)&CExpressionValueStack::s_emptyValue;
    }
    v8 = (unsigned int)(*((_DWORD *)this + 4) - 1);
    if ( (unsigned int)v8 < *((_DWORD *)this + 12) )
    {
      v5 = (const __m128i *)(*((_QWORD *)this + 3) + 80 * v8);
    }
    else
    {
      v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v14);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v14);
    }
    if ( v7[4].m128i_i32[2] == 69 )
    {
      if ( v5[4].m128i_i32[2] == 69 )
      {
        v10 = (__m128)_mm_loadu_si128(v5);
        v11 = (__m128)_mm_loadu_si128(v7);
        v7[4].m128i_i32[2] = 18;
        v7[4].m128i_i8[12] = 1;
        *(float *)v7->m128i_i32 = (float)((float)((float)(v11.m128_f32[0] * v10.m128_f32[0])
                                                + (float)(_mm_shuffle_ps(v11, v11, 85).m128_f32[0]
                                                        * _mm_shuffle_ps(v10, v10, 85).m128_f32[0]))
                                        + (float)(_mm_shuffle_ps(v11, v11, 170).m128_f32[0]
                                                * _mm_shuffle_ps(v10, v10, 170).m128_f32[0]))
                                + (float)(_mm_shuffle_ps(v10, v10, 255).m128_f32[0]
                                        * _mm_shuffle_ps(v11, v11, 255).m128_f32[0]);
        --*((_DWORD *)this + 4);
        return 0;
      }
      v13 = 7667;
    }
    else
    {
      v13 = 7666;
    }
  }
  else
  {
    v13 = 7660;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v13,
    0LL);
  return v3;
}
