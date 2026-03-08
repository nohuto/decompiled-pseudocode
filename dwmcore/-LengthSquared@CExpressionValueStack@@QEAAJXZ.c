/*
 * XREFs of ?LengthSquared@CExpressionValueStack@@QEAAJXZ @ 0x18025A4C4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016188 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1468 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180213E20 (--1CExpressionValue@@QEAA@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::LengthSquared(__int64 this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rax
  CExpressionValue *v4; // rax
  __m128i *v5; // rbx
  __int32 v6; // eax
  __m128 v7; // xmm3
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm2_4
  unsigned int v12; // [rsp+20h] [rbp-78h]
  _BYTE v13[88]; // [rsp+40h] [rbp-58h] BYREF

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
      v4 = CExpressionValue::CExpressionValue((CExpressionValue *)v13);
      v5 = (__m128i *)&CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v4);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v13);
    }
    v6 = v5[4].m128i_i32[2];
    this = 18LL;
    switch ( v6 )
    {
      case 18:
        *(float *)v5->m128i_i32 = *(float *)v5->m128i_i32 * *(float *)v5->m128i_i32;
        break;
      case 35:
        *(float *)v5->m128i_i32 = (float)(*(float *)v5->m128i_i32 * *(float *)v5->m128i_i32)
                                + (float)(*(float *)&v5->m128i_i32[1] * *(float *)&v5->m128i_i32[1]);
        break;
      case 52:
        *(float *)v5->m128i_i32 = (float)((float)(COERCE_FLOAT(HIDWORD(v5->m128i_i64[0]))
                                                * COERCE_FLOAT(HIDWORD(v5->m128i_i64[0])))
                                        + (float)(COERCE_FLOAT(v5->m128i_i64[0]) * COERCE_FLOAT(v5->m128i_i64[0])))
                                + (float)(*(float *)&v5->m128i_i32[2] * *(float *)&v5->m128i_i32[2]);
        break;
      case 69:
        v7 = (__m128)_mm_loadu_si128(v5);
        v8 = _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
        v9 = _mm_shuffle_ps(v7, v7, 170).m128_f32[0];
        v10 = (float)(v8 * v8) + (float)(v7.m128_f32[0] * v7.m128_f32[0]);
        v7.m128_f32[0] = _mm_shuffle_ps(v7, v7, 255).m128_f32[0];
        *(float *)v5->m128i_i32 = (float)(v10 + (float)(v9 * v9)) + (float)(v7.m128_f32[0] * v7.m128_f32[0]);
        break;
      case 71:
        *(float *)v5->m128i_i32 = (float)((float)((float)(*(float *)v5->m128i_i32 * *(float *)v5->m128i_i32)
                                                + (float)(*(float *)&v5->m128i_i32[1] * *(float *)&v5->m128i_i32[1]))
                                        + (float)(*(float *)&v5->m128i_i32[2] * *(float *)&v5->m128i_i32[2]))
                                + (float)(*(float *)&v5->m128i_i32[3] * *(float *)&v5->m128i_i32[3]);
        break;
      default:
        v12 = 3532;
        goto LABEL_3;
    }
    v5[4].m128i_i32[2] = 18;
    v5[4].m128i_i8[12] = 1;
    return 0;
  }
  v12 = 3472;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v12,
    0LL);
  return v2;
}
