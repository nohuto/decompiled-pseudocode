/*
 * XREFs of ?Absolute@CExpressionValueStack@@QEAAJXZ @ 0x180258D08
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016188 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1468 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180213E20 (--1CExpressionValue@@QEAA@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::Absolute(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rax
  CExpressionValue *v4; // rax
  __m128i *v5; // rbx
  __int32 v6; // eax
  __m128 v7; // xmm3
  __int32 v8; // eax
  __int32 v9; // xmm0_4
  __int32 v10; // xmm1_4
  unsigned int v12; // [rsp+20h] [rbp-19h]
  __m128i v13; // [rsp+30h] [rbp-9h]
  __int64 v14; // [rsp+30h] [rbp-9h]
  _BYTE v15[80]; // [rsp+40h] [rbp+7h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
  {
    v3 = (unsigned int)(v1 - 1);
    if ( (unsigned int)v3 < *((_DWORD *)this + 12) )
    {
      v5 = (__m128i *)(*((_QWORD *)this + 3) + 80 * v3);
    }
    else
    {
      v4 = CExpressionValue::CExpressionValue((CExpressionValue *)v15);
      v5 = (__m128i *)&CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v4);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v15);
    }
    v6 = v5[4].m128i_i32[2];
    switch ( v6 )
    {
      case 18:
        v5->m128i_i32[0] &= _xmm;
        v5[4].m128i_i32[2] = 18;
        break;
      case 35:
        v10 = v5->m128i_i32[1] & _xmm;
        v5->m128i_i32[0] &= _xmm;
        v5->m128i_i32[1] = v10;
        v5[4].m128i_i32[2] = 35;
        break;
      case 52:
        v14 = v5->m128i_i64[0];
        v9 = v5->m128i_i64[0] & _xmm;
        v8 = v5->m128i_i32[2];
        v5[4].m128i_i32[2] = 52;
        v5->m128i_i32[0] = v9;
        v5->m128i_i32[1] = HIDWORD(v14) & _xmm;
        v5->m128i_i32[2] = v8 & _xmm;
        break;
      case 69:
        v7 = (__m128)_mm_loadu_si128(v5);
        v5[4].m128i_i32[2] = 69;
        v13.m128i_i32[0] = v7.m128_i32[0] & _xmm;
        v13.m128i_i32[1] = _mm_shuffle_ps(v7, v7, 85).m128_u32[0] & _xmm;
        v13.m128i_i32[2] = _mm_shuffle_ps(v7, v7, 170).m128_u32[0] & _xmm;
        v13.m128i_i32[3] = _mm_shuffle_ps(v7, v7, 255).m128_u32[0] & _xmm;
        *v5 = v13;
        break;
      default:
        v12 = 725;
        goto LABEL_3;
    }
    v5[4].m128i_i8[12] = 1;
    return 0;
  }
  v12 = 667;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v12,
    0LL);
  return v2;
}
