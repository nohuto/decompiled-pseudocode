__int64 __fastcall CExpressionValueStack::Min(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v3; // r14d
  __int64 v4; // rax
  float *v5; // rdi
  CExpressionValue *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  int v10; // eax
  __m128 v11; // xmm3
  __m128 v12; // xmm4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  unsigned int v20; // [rsp+28h] [rbp-29h]
  __int128 v21; // [rsp+48h] [rbp-9h]
  _BYTE v22[80]; // [rsp+58h] [rbp+7h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 2 )
  {
    v4 = v1 - 2;
    v5 = (float *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v4 < *((_DWORD *)this + 12) )
    {
      v7 = (_QWORD *)(*((_QWORD *)this + 3) + 80 * v4);
    }
    else
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v22);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v22);
      v7 = &CExpressionValueStack::s_emptyValue;
    }
    v8 = (unsigned int)(*((_DWORD *)this + 4) - 1);
    if ( (unsigned int)v8 < *((_DWORD *)this + 12) )
    {
      v5 = (float *)(*((_QWORD *)this + 3) + 80 * v8);
    }
    else
    {
      v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v22);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v22);
    }
    v10 = *((_DWORD *)v7 + 18);
    v3 = 0;
    if ( v10 == *((_DWORD *)v5 + 18) )
    {
      switch ( v10 )
      {
        case 18:
          v18 = fminf(*(float *)v7, *v5);
          *((_DWORD *)v7 + 18) = 18;
          *(float *)v7 = v18;
          break;
        case 35:
          v16 = fminf(*(float *)v7, *v5);
          v17 = fminf(*((float *)v7 + 1), v5[1]);
          *((_DWORD *)v7 + 18) = 35;
          *(float *)v7 = v16;
          *((float *)v7 + 1) = v17;
          break;
        case 52:
          v13 = fminf(COERCE_FLOAT(*v7), COERCE_FLOAT(*(_QWORD *)v5));
          v14 = fminf(COERCE_FLOAT(HIDWORD(*v7)), COERCE_FLOAT(HIDWORD(*(_QWORD *)v5)));
          v15 = fminf(*((float *)v7 + 2), v5[2]);
          *((_DWORD *)v7 + 18) = 52;
          *(float *)v7 = v13;
          *((float *)v7 + 1) = v14;
          *((float *)v7 + 2) = v15;
          break;
        case 69:
          v11 = (__m128)_mm_loadu_si128((const __m128i *)v5);
          *((_DWORD *)v7 + 18) = 69;
          v12 = (__m128)_mm_loadu_si128((const __m128i *)v7);
          *(_QWORD *)&v21 = __PAIR64__(
                              COERCE_UNSIGNED_INT(
                                fminf(
                                  _mm_shuffle_ps(v12, v12, 85).m128_f32[0],
                                  _mm_shuffle_ps(v11, v11, 85).m128_f32[0])),
                              COERCE_UNSIGNED_INT(fminf(v12.m128_f32[0], v11.m128_f32[0])));
          *((_QWORD *)&v21 + 1) = __PAIR64__(
                                    COERCE_UNSIGNED_INT(
                                      fminf(
                                        _mm_shuffle_ps(v12, v12, 255).m128_f32[0],
                                        _mm_shuffle_ps(v11, v11, 255).m128_f32[0])),
                                    COERCE_UNSIGNED_INT(
                                      fminf(
                                        _mm_shuffle_ps(v12, v12, 170).m128_f32[0],
                                        _mm_shuffle_ps(v11, v11, 170).m128_f32[0])));
          *(_OWORD *)v7 = v21;
          break;
        default:
          v20 = 2387;
          goto LABEL_3;
      }
      *((_BYTE *)v7 + 76) = 1;
      --*((_DWORD *)this + 4);
      return v3;
    }
    v20 = 2331;
  }
  else
  {
    v20 = 2307;
  }
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v20,
    0LL);
  return v3;
}
