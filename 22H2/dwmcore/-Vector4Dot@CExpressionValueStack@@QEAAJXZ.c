/*
 * XREFs of ?Vector4Dot@CExpressionValueStack@@QEAAJXZ @ 0x1802026B0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A610 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A10F4 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC6A4 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBAA4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector4Dot(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  unsigned int v4; // edx
  __int64 v5; // rax
  const __m128i *v6; // rbx
  CExpressionValue *v7; // rax
  __m128i *v8; // rsi
  CExpressionValue *v9; // rax
  __m128 v10; // xmm5
  __m128 v11; // xmm4
  unsigned int v13; // [rsp+20h] [rbp-68h]
  _BYTE v14[80]; // [rsp+30h] [rbp-58h] BYREF

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 >= 2 )
  {
    v4 = *((_DWORD *)this + 12);
    v5 = (unsigned int)(v2 - 2);
    v6 = (const __m128i *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v5 < v4 )
    {
      v8 = (__m128i *)(*((_QWORD *)this + 3) + 80 * v5);
    }
    else
    {
      v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v14);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v7);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v14);
      LODWORD(v2) = *((_DWORD *)this + 4);
      v8 = (__m128i *)&CExpressionValueStack::s_emptyValue;
      v4 = *((_DWORD *)this + 12);
    }
    v2 = (unsigned int)(v2 - 1);
    if ( (unsigned int)v2 < v4 )
    {
      v6 = (const __m128i *)(*((_QWORD *)this + 3) + 80 * v2);
    }
    else
    {
      v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v14);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v14);
    }
    if ( v8[4].m128i_i32[2] == 69 )
    {
      if ( v6[4].m128i_i32[2] == 69 )
      {
        v10 = (__m128)_mm_loadu_si128(v6);
        v11 = (__m128)_mm_loadu_si128(v8);
        v8[4].m128i_i32[2] = 18;
        v8[4].m128i_i8[12] = 1;
        *(float *)v8->m128i_i32 = (float)((float)((float)(v11.m128_f32[0] * v10.m128_f32[0])
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
    v2,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v13,
    0LL);
  return v3;
}
