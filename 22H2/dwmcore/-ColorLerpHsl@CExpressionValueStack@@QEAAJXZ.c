/*
 * XREFs of ?ColorLerpHsl@CExpressionValueStack@@QEAAJXZ @ 0x180004450
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A610 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x180004704 (-Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1800047B8 (-Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A10F4 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC6A4 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBAA4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ColorLerpHsl(unsigned __int64 this)
{
  unsigned __int64 v1; // rdi
  unsigned int v2; // edx
  __int64 v3; // rax
  float *v4; // rbx
  CExpressionValue *v5; // rax
  __m128i *v6; // rsi
  __int64 v7; // rax
  CExpressionValue *v8; // rax
  const __m128i *v9; // r14
  CExpressionValue *v10; // rax
  __int32 v11; // eax
  float v12; // xmm7_4
  unsigned int v13; // ebx
  __m128 v14; // xmm0
  __m128 v15; // xmm6
  ColorSpaceHelpers *v16; // rcx
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm3_4
  ColorSpaceHelpers *v20; // rcx
  __m128i v21; // xmm0
  unsigned int v23; // [rsp+28h] [rbp-59h]
  float *v24; // [rsp+48h] [rbp-39h] BYREF
  float v25; // [rsp+50h] [rbp-31h] BYREF
  float v26; // [rsp+54h] [rbp-2Dh] BYREF
  __m128i v27; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v28[112]; // [rsp+68h] [rbp-19h] BYREF

  v1 = this;
  LODWORD(this) = *(_DWORD *)(this + 16);
  if ( (unsigned int)this < 3 )
  {
    v23 = 3176;
LABEL_18:
    v13 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v23,
      0LL);
    return v13;
  }
  v2 = *(_DWORD *)(v1 + 48);
  v3 = (unsigned int)(this - 3);
  v4 = (float *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v3 < v2 )
  {
    v6 = (__m128i *)(*(_QWORD *)(v1 + 24) + 80 * v3);
  }
  else
  {
    v5 = CExpressionValue::CExpressionValue((CExpressionValue *)v28);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v5);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v28);
    LODWORD(this) = *(_DWORD *)(v1 + 16);
    v6 = (__m128i *)&CExpressionValueStack::s_emptyValue;
    v2 = *(_DWORD *)(v1 + 48);
  }
  v7 = (unsigned int)(this - 2);
  if ( (unsigned int)v7 < v2 )
  {
    v9 = (const __m128i *)(*(_QWORD *)(v1 + 24) + 80 * v7);
  }
  else
  {
    v8 = CExpressionValue::CExpressionValue((CExpressionValue *)v28);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v8);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v28);
    LODWORD(this) = *(_DWORD *)(v1 + 16);
    v9 = (const __m128i *)&CExpressionValueStack::s_emptyValue;
    v2 = *(_DWORD *)(v1 + 48);
  }
  this = (unsigned int)(this - 1);
  if ( (unsigned int)this < v2 )
  {
    v4 = (float *)(*(_QWORD *)(v1 + 24) + 80 * this);
  }
  else
  {
    v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v28);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v10);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v28);
  }
  v11 = v6[4].m128i_i32[2];
  v12 = *v4;
  if ( *((_DWORD *)v4 + 18) != 18 || (v13 = 0, v11 != v9[4].m128i_i32[2]) )
  {
    v23 = 3202;
    goto LABEL_18;
  }
  if ( v11 != 70 )
  {
    v23 = 3254;
    goto LABEL_18;
  }
  v14 = (__m128)_mm_loadu_si128(v6);
  v15 = (__m128)_mm_loadu_si128(v9);
  ColorSpaceHelpers::Color_HSLAfromRGBA(
    (ColorSpaceHelpers *)this,
    _mm_shuffle_ps(v14, v14, 85).m128_f32[0],
    _mm_shuffle_ps(v14, v14, 170).m128_f32[0],
    _mm_shuffle_ps(v14, v14, 255).m128_f32[0],
    COERCE_FLOAT(&v24),
    (float *)&v24 + 1,
    &v25,
    &v26,
    v24);
  ColorSpaceHelpers::Color_HSLAfromRGBA(
    v16,
    _mm_shuffle_ps(v15, v15, 85).m128_f32[0],
    _mm_shuffle_ps(v15, v15, 170).m128_f32[0],
    _mm_shuffle_ps(v15, v15, 255).m128_f32[0],
    COERCE_FLOAT(&v27),
    (float *)&v27.m128i_i32[1],
    (float *)&v27.m128i_i32[2],
    (float *)&v27.m128i_i32[3],
    v24);
  v17 = *(float *)&v27.m128i_i32[1] - *((float *)&v24 + 1);
  v18 = *(float *)&v27.m128i_i32[2] - v25;
  v19 = *(float *)&v27.m128i_i32[3] - v26;
  v27 = 0LL;
  v14.m128_f32[0] = fmaxf(0.0, fminf(v12, 1.0));
  ColorSpaceHelpers::Color_RGBAfromHSLA(
    v20,
    (float)(v17 * v14.m128_f32[0]) + *((float *)&v24 + 1),
    (float)(v18 * v14.m128_f32[0]) + v25,
    (float)(v19 * v14.m128_f32[0]) + v26,
    COERCE_FLOAT(&v27),
    (float *)&v27.m128i_i32[1],
    (float *)&v27.m128i_i32[2],
    (float *)&v27.m128i_i32[3],
    v24);
  v21 = v27;
  v6[4].m128i_i32[2] = 70;
  v6[4].m128i_i8[12] = 1;
  *v6 = v21;
  *(_DWORD *)(v1 + 16) -= 2;
  return v13;
}
