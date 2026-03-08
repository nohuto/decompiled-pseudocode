/*
 * XREFs of ?ColorLerpHsl@CExpressionValueStack@@QEAAJXZ @ 0x180015CD4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x180015F84 (-Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x180016038 (-Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016188 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1468 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180213E20 (--1CExpressionValue@@QEAA@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::ColorLerpHsl(CExpressionValueStack *this)
{
  unsigned int v2; // eax
  __int64 v3; // rax
  _QWORD *v4; // r15
  float *v5; // rbx
  CExpressionValue *v6; // rax
  __m128i *v7; // rsi
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  const __m128i *v10; // r14
  __int64 v11; // rax
  CExpressionValue *v12; // rax
  __int32 v13; // eax
  float v14; // xmm7_4
  unsigned int v15; // ebx
  __m128 v16; // xmm0
  __m128 v17; // xmm6
  ColorSpaceHelpers *v18; // rcx
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  ColorSpaceHelpers *v22; // rcx
  __m128i v23; // xmm0
  unsigned int v25; // [rsp+28h] [rbp-69h]
  float *v26; // [rsp+48h] [rbp-49h] BYREF
  float v27; // [rsp+50h] [rbp-41h] BYREF
  float v28; // [rsp+54h] [rbp-3Dh] BYREF
  __m128i v29; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v30[112]; // [rsp+68h] [rbp-29h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( v2 < 3 )
  {
    v25 = 3176;
LABEL_18:
    v15 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (unsigned int)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v25,
      0LL);
    return v15;
  }
  v3 = v2 - 3;
  v4 = (_QWORD *)((char *)this + 24);
  v5 = (float *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v3 < *((_DWORD *)this + 12) )
  {
    v7 = (__m128i *)(*v4 + 80 * v3);
  }
  else
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v30);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v30);
    v7 = (__m128i *)&CExpressionValueStack::s_emptyValue;
  }
  v8 = (unsigned int)(*((_DWORD *)this + 4) - 2);
  if ( (unsigned int)v8 < *((_DWORD *)this + 12) )
  {
    v10 = (const __m128i *)(*v4 + 80 * v8);
  }
  else
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v30);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v30);
    v10 = (const __m128i *)&CExpressionValueStack::s_emptyValue;
  }
  v11 = (unsigned int)(*((_DWORD *)this + 4) - 1);
  if ( (unsigned int)v11 < *((_DWORD *)this + 12) )
  {
    v5 = (float *)(*v4 + 80 * v11);
  }
  else
  {
    v12 = CExpressionValue::CExpressionValue((CExpressionValue *)v30);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v12);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v30);
  }
  v13 = v7[4].m128i_i32[2];
  v14 = *v5;
  if ( *((_DWORD *)v5 + 18) != 18 || (v15 = 0, v13 != v10[4].m128i_i32[2]) )
  {
    v25 = 3202;
    goto LABEL_18;
  }
  if ( v13 != 70 )
  {
    v25 = 3254;
    goto LABEL_18;
  }
  v16 = (__m128)_mm_loadu_si128(v7);
  v17 = (__m128)_mm_loadu_si128(v10);
  ColorSpaceHelpers::Color_HSLAfromRGBA(
    this,
    _mm_shuffle_ps(v16, v16, 85).m128_f32[0],
    _mm_shuffle_ps(v16, v16, 170).m128_f32[0],
    _mm_shuffle_ps(v16, v16, 255).m128_f32[0],
    COERCE_FLOAT(&v26),
    (float *)&v26 + 1,
    &v27,
    &v28,
    v26);
  ColorSpaceHelpers::Color_HSLAfromRGBA(
    v18,
    _mm_shuffle_ps(v17, v17, 85).m128_f32[0],
    _mm_shuffle_ps(v17, v17, 170).m128_f32[0],
    _mm_shuffle_ps(v17, v17, 255).m128_f32[0],
    COERCE_FLOAT(&v29),
    (float *)&v29.m128i_i32[1],
    (float *)&v29.m128i_i32[2],
    (float *)&v29.m128i_i32[3],
    v26);
  v19 = *(float *)&v29.m128i_i32[1] - *((float *)&v26 + 1);
  v20 = *(float *)&v29.m128i_i32[2] - v27;
  v21 = *(float *)&v29.m128i_i32[3] - v28;
  v29 = 0LL;
  v16.m128_f32[0] = fmaxf(0.0, fminf(v14, 1.0));
  ColorSpaceHelpers::Color_RGBAfromHSLA(
    v22,
    (float)(v19 * v16.m128_f32[0]) + *((float *)&v26 + 1),
    (float)(v20 * v16.m128_f32[0]) + v27,
    (float)(v21 * v16.m128_f32[0]) + v28,
    COERCE_FLOAT(&v29),
    (float *)&v29.m128i_i32[1],
    (float *)&v29.m128i_i32[2],
    (float *)&v29.m128i_i32[3],
    v26);
  v23 = v29;
  v7[4].m128i_i32[2] = 70;
  v7[4].m128i_i8[12] = 1;
  *v7 = v23;
  *((_DWORD *)this + 4) -= 2;
  return v15;
}
