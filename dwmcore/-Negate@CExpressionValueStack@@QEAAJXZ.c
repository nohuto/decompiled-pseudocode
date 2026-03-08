/*
 * XREFs of ?Negate@CExpressionValueStack@@QEAAJXZ @ 0x1800BFE98
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016188 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1468 (--0CExpressionValue@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180213E20 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??GD2DMatrix@@QEBA?AU0@XZ @ 0x18027972C (--GD2DMatrix@@QEBA-AU0@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::Negate(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rax
  CExpressionValue *v4; // rax
  __m128 *v5; // rbx
  __int32 v6; // eax
  __m128 *v7; // rax
  __m128 v8; // xmm0
  __int32 v9; // xmm1_4
  __m128 v10; // xmm0
  __int32 v11; // xmm1_4
  __int32 v12; // xmm0_4
  __int32 v13; // xmm1_4
  unsigned int v15; // [rsp+20h] [rbp-88h]
  _BYTE v16[80]; // [rsp+40h] [rbp-68h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
  {
    v3 = (unsigned int)(v1 - 1);
    if ( (unsigned int)v3 < *((_DWORD *)this + 12) )
    {
      v5 = (__m128 *)(*((_QWORD *)this + 3) + 80 * v3);
    }
    else
    {
      v4 = CExpressionValue::CExpressionValue((CExpressionValue *)v16);
      v5 = (__m128 *)&CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v4);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v16);
    }
    v6 = v5[4].m128_i32[2];
    switch ( v6 )
    {
      case 18:
        v5->m128_i32[0] ^= _xmm;
        v5[4].m128_i32[2] = 18;
        break;
      case 35:
        v13 = v5->m128_i32[1] ^ _xmm;
        v5->m128_i32[0] ^= _xmm;
        v5->m128_i32[1] = v13;
        v5[4].m128_i32[2] = 35;
        break;
      case 52:
        v11 = v5->m128_i32[2];
        v5->m128_i32[0] ^= _xmm;
        v12 = v5->m128_i32[1] ^ _xmm;
        v5->m128_i32[2] = v11 ^ _xmm;
        v5->m128_i32[1] = v12;
        v5[4].m128_i32[2] = 52;
        break;
      case 69:
        v10 = *v5;
        v5[4].m128_i32[2] = 69;
        *v5 = _mm_xor_ps(v10, (__m128)_xmm);
        break;
      case 104:
        v8 = *v5;
        v5[4].m128_i32[2] = 104;
        v9 = v5[1].m128_i32[0] ^ _xmm;
        *v5 = _mm_xor_ps(v8, (__m128)_xmm);
        v8.m128_i32[0] = v5[1].m128_i32[1] ^ _xmm;
        v5[1].m128_i32[0] = v9;
        v5[1].m128_i32[1] = v8.m128_i32[0];
        break;
      case 265:
        v7 = (__m128 *)D2DMatrix::operator-(v5, v16);
        v5[4].m128_i32[2] = 265;
        *v5 = *v7;
        v5[1] = v7[1];
        v5[2] = v7[2];
        v5[3] = v7[3];
        break;
      default:
        v15 = 820;
        goto LABEL_3;
    }
    v5[4].m128_i8[12] = 1;
    return 0;
  }
  v15 = 758;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (unsigned int)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v15,
    0LL);
  return v2;
}
