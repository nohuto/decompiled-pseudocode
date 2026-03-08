/*
 * XREFs of ?ColorLerpRgb@CExpressionValueStack@@QEAAJXZ @ 0x180259530
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016188 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1468 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180213E20 (--1CExpressionValue@@QEAA@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::ColorLerpRgb(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  __int64 v3; // rax
  _QWORD *v4; // r14
  float *v5; // rbx
  CExpressionValue *v6; // rax
  __m128i *v7; // rsi
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  const __m128i *v10; // rbp
  __int64 v11; // rax
  CExpressionValue *v12; // rax
  __int32 v13; // eax
  float v14; // xmm0_4
  unsigned int v15; // ebx
  __m128 v16; // xmm5
  __m128 v17; // xmm4
  float v18; // xmm3_4
  float v19; // xmm0_4
  __int32 v20; // xmm1_4
  float v21; // xmm0_4
  unsigned int v23; // [rsp+20h] [rbp-78h]
  __m128i v24; // [rsp+30h] [rbp-68h]
  _BYTE v25[80]; // [rsp+40h] [rbp-58h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 3 )
  {
    v23 = 3288;
LABEL_18:
    v15 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v23,
      0LL);
    return v15;
  }
  v3 = v1 - 3;
  v4 = (_QWORD *)((char *)this + 24);
  v5 = (float *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v3 < *((_DWORD *)this + 12) )
  {
    v7 = (__m128i *)(*v4 + 80 * v3);
  }
  else
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v25);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v25);
    v7 = (__m128i *)&CExpressionValueStack::s_emptyValue;
  }
  v8 = (unsigned int)(*((_DWORD *)this + 4) - 2);
  if ( (unsigned int)v8 < *((_DWORD *)this + 12) )
  {
    v10 = (const __m128i *)(*v4 + 80 * v8);
  }
  else
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v25);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v25);
    v10 = (const __m128i *)&CExpressionValueStack::s_emptyValue;
  }
  v11 = (unsigned int)(*((_DWORD *)this + 4) - 1);
  if ( (unsigned int)v11 < *((_DWORD *)this + 12) )
  {
    v5 = (float *)(*v4 + 80 * v11);
  }
  else
  {
    v12 = CExpressionValue::CExpressionValue((CExpressionValue *)v25);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v12);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v25);
  }
  v13 = v7[4].m128i_i32[2];
  v14 = *v5;
  if ( *((_DWORD *)v5 + 18) != 18 || (v15 = 0, v13 != v10[4].m128i_i32[2]) )
  {
    v23 = 3314;
    goto LABEL_18;
  }
  if ( v13 != 70 )
  {
    v23 = 3345;
    goto LABEL_18;
  }
  v16 = (__m128)_mm_loadu_si128(v10);
  v7[4].m128i_i32[2] = 70;
  v17 = (__m128)_mm_loadu_si128(v7);
  v7[4].m128i_i8[12] = 1;
  v18 = fmaxf(0.0, fminf(v14, 1.0));
  *(float *)v24.m128i_i32 = (float)((float)(v16.m128_f32[0] - v17.m128_f32[0]) * v18) + v17.m128_f32[0];
  v19 = _mm_shuffle_ps(v17, v17, 85).m128_f32[0];
  *(float *)&v20 = (float)((float)(_mm_shuffle_ps(v16, v16, 85).m128_f32[0] - v19) * v18) + v19;
  v21 = _mm_shuffle_ps(v17, v17, 170).m128_f32[0];
  v17.m128_f32[0] = _mm_shuffle_ps(v17, v17, 255).m128_f32[0];
  v24.m128i_i32[1] = v20;
  *(float *)&v24.m128i_i32[2] = (float)((float)(_mm_shuffle_ps(v16, v16, 170).m128_f32[0] - v21) * v18) + v21;
  *(float *)&v24.m128i_i32[3] = (float)((float)(_mm_shuffle_ps(v16, v16, 255).m128_f32[0] - v17.m128_f32[0]) * v18)
                              + v17.m128_f32[0];
  *v7 = v24;
  *((_DWORD *)this + 4) -= 2;
  return v15;
}
