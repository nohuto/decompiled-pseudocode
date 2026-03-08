/*
 * XREFs of ?Clamp@CExpressionValueStack@@QEAAJXZ @ 0x18001ED14
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016188 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1468 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180213E20 (--1CExpressionValue@@QEAA@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::Clamp(CExpressionValueStack *this)
{
  unsigned int v2; // eax
  __int64 v3; // rax
  _QWORD *v4; // r15
  _QWORD *v5; // rdi
  CExpressionValue *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rax
  CExpressionValue *v12; // rax
  int v13; // eax
  unsigned int v14; // r15d
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  __m128 v17; // xmm6
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm2_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  unsigned int v26; // [rsp+28h] [rbp-59h]
  __int128 v27; // [rsp+38h] [rbp-49h]
  float v28; // [rsp+40h] [rbp-41h]
  _BYTE v29[96]; // [rsp+68h] [rbp-19h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( v2 < 3 )
  {
    v26 = 2533;
LABEL_26:
    v14 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (unsigned int)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v26,
      0LL);
    return v14;
  }
  v3 = v2 - 3;
  v4 = (_QWORD *)((char *)this + 24);
  v5 = &CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v3 < *((_DWORD *)this + 12) )
  {
    v7 = (_QWORD *)(*v4 + 80 * v3);
  }
  else
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v29);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v29);
    v7 = &CExpressionValueStack::s_emptyValue;
  }
  v8 = (unsigned int)(*((_DWORD *)this + 4) - 2);
  if ( (unsigned int)v8 < *((_DWORD *)this + 12) )
  {
    v10 = (_QWORD *)(*v4 + 80 * v8);
  }
  else
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v29);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v29);
    v10 = &CExpressionValueStack::s_emptyValue;
  }
  v11 = (unsigned int)(*((_DWORD *)this + 4) - 1);
  if ( (unsigned int)v11 < *((_DWORD *)this + 12) )
  {
    v5 = (_QWORD *)(*v4 + 80 * v11);
  }
  else
  {
    v12 = CExpressionValue::CExpressionValue((CExpressionValue *)v29);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v12);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v29);
  }
  v13 = *((_DWORD *)v7 + 18);
  if ( v13 != *((_DWORD *)v10 + 18) || (v14 = 0, v13 != *((_DWORD *)v5 + 18)) )
  {
    v26 = 2558;
    goto LABEL_26;
  }
  switch ( v13 )
  {
    case 18:
      v23 = *(float *)v5;
      v24 = fmaxf(*(float *)v7, *(float *)v10);
      *((_DWORD *)v7 + 18) = 18;
      v22 = fminf(v24, v23);
      goto LABEL_23;
    case 35:
      v21 = fminf(fmaxf(*((float *)v7 + 1), *((float *)v10 + 1)), *((float *)v5 + 1));
      v22 = fminf(fmaxf(*(float *)v7, *(float *)v10), *(float *)v5);
      *((_DWORD *)v7 + 18) = 35;
      *((float *)v7 + 1) = v21;
LABEL_23:
      *(float *)v7 = v22;
      break;
    case 52:
      v18 = fminf(fmaxf(COERCE_FLOAT(HIDWORD(*v7)), COERCE_FLOAT(HIDWORD(*v10))), COERCE_FLOAT(HIDWORD(*v5)));
      v19 = fminf(fmaxf(COERCE_FLOAT(*v7), COERCE_FLOAT(*v10)), COERCE_FLOAT(*v5));
      v20 = fmaxf(*((float *)v7 + 2), *((float *)v10 + 2));
      v28 = *((float *)v5 + 2);
      *((_DWORD *)v7 + 18) = 52;
      *(float *)v7 = v19;
      *((float *)v7 + 1) = v18;
      *((float *)v7 + 2) = fminf(v20, v28);
      break;
    case 69:
      v15 = (__m128)_mm_loadu_si128((const __m128i *)v10);
      v16 = (__m128)_mm_loadu_si128((const __m128i *)v5);
      *((_DWORD *)v7 + 18) = 69;
      v17 = (__m128)_mm_loadu_si128((const __m128i *)v7);
      *(_QWORD *)&v27 = __PAIR64__(
                          COERCE_UNSIGNED_INT(
                            fminf(
                              fmaxf(_mm_shuffle_ps(v17, v17, 85).m128_f32[0], _mm_shuffle_ps(v15, v15, 85).m128_f32[0]),
                              _mm_shuffle_ps(v16, v16, 85).m128_f32[0])),
                          COERCE_UNSIGNED_INT(fminf(fmaxf(v17.m128_f32[0], v15.m128_f32[0]), v16.m128_f32[0])));
      *((_QWORD *)&v27 + 1) = __PAIR64__(
                                COERCE_UNSIGNED_INT(
                                  fminf(
                                    fmaxf(
                                      _mm_shuffle_ps(v17, v17, 255).m128_f32[0],
                                      _mm_shuffle_ps(v15, v15, 255).m128_f32[0]),
                                    _mm_shuffle_ps(v16, v16, 255).m128_f32[0])),
                                COERCE_UNSIGNED_INT(
                                  fminf(
                                    fmaxf(
                                      _mm_shuffle_ps(v17, v17, 170).m128_f32[0],
                                      _mm_shuffle_ps(v15, v15, 170).m128_f32[0]),
                                    _mm_shuffle_ps(v16, v16, 170).m128_f32[0])));
      *(_OWORD *)v7 = v27;
      break;
    default:
      v26 = 2621;
      goto LABEL_26;
  }
  *((_BYTE *)v7 + 76) = 1;
  *((_DWORD *)this + 4) -= 2;
  return v14;
}
