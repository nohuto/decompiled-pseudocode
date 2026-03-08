/*
 * XREFs of ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x180014650
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x1800BF728 (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016188 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1468 (--0CExpressionValue@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180213E20 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??DD2DMatrix@@QEBA?AU0@M@Z @ 0x1802793F8 (--DD2DMatrix@@QEBA-AU0@M@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Scale(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  CExpressionValueStack *v2; // rbp
  unsigned int v3; // ebx
  __int64 v4; // rax
  float *v5; // rdi
  CExpressionValue *v6; // rax
  float *v7; // rbx
  float *v8; // r14
  __int64 v9; // rax
  float *v10; // r15
  CExpressionValue *v11; // rax
  float *v12; // rsi
  float *v13; // rdx
  float *v14; // rax
  int v15; // eax
  _OWORD *v16; // rax
  float v17; // xmm6_4
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  float v20; // xmm0_4
  __m128 v21; // xmm2
  __m128 v22; // xmm0
  float v23; // xmm1_4
  float v24; // xmm3_4
  float v25; // xmm2_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  unsigned int v31; // [rsp+20h] [rbp-A8h]
  _BYTE v32[80]; // [rsp+40h] [rbp-88h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = this;
  if ( v1 >= 2 )
  {
    v4 = v1 - 2;
    v5 = (float *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v4 < *((_DWORD *)this + 12) )
    {
      v7 = (float *)(*((_QWORD *)this + 3) + 80 * v4);
    }
    else
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v32);
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v32);
      v7 = (float *)&CExpressionValueStack::s_emptyValue;
    }
    v8 = v7;
    v9 = (unsigned int)(*((_DWORD *)v2 + 4) - 1);
    v10 = v7;
    if ( (unsigned int)v9 < *((_DWORD *)v2 + 12) )
    {
      v5 = (float *)(*((_QWORD *)v2 + 3) + 80 * v9);
    }
    else
    {
      v11 = CExpressionValue::CExpressionValue((CExpressionValue *)v32);
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v11);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v32);
    }
    this = (CExpressionValueStack *)(v7 + 18);
    v12 = v7;
    v13 = v7;
    if ( *((_DWORD *)v5 + 18) != 18 )
    {
      if ( *(_DWORD *)this != 18 )
      {
        v31 = 2688;
        goto LABEL_3;
      }
      v14 = v7;
      v7 = v5;
      v5 = v14;
    }
    v15 = *((_DWORD *)v7 + 18);
    switch ( v15 )
    {
      case 18:
        v29 = *v7 * *v5;
        *(_DWORD *)this = 18;
        *v12 = v29;
        break;
      case 35:
        v27 = *v5 * v7[1];
        v28 = *v5 * *v7;
        *(_DWORD *)this = 35;
        v12[1] = v27;
        *v8 = v28;
        break;
      case 52:
        v23 = *v5;
        v24 = *v7;
        v25 = *v5 * v7[1];
        v26 = *v5 * v7[2];
        *(_DWORD *)this = 52;
        *v10 = v24 * v23;
        v13[1] = v25;
        v13[2] = v26;
        break;
      case 69:
        v21 = (__m128)*(unsigned int *)v5;
        v22 = *(__m128 *)v7;
        *((_DWORD *)v12 + 18) = 69;
        *(__m128 *)v12 = _mm_mul_ps(v22, _mm_shuffle_ps(v21, v21, 0));
        break;
      case 104:
        v17 = *v7;
        v18 = _mm_shuffle_ps((__m128)*(unsigned int *)v5, (__m128)*(unsigned int *)v5, 0);
        v19 = _mm_mul_ps(*(__m128 *)(v7 + 1), v18);
        v20 = v18.m128_f32[0] * v7[5];
        *((_DWORD *)v12 + 18) = 104;
        *v10 = v17 * v18.m128_f32[0];
        *(__m128 *)(v13 + 1) = v19;
        v13[5] = v20;
        break;
      case 265:
        v16 = (_OWORD *)D2DMatrix::operator*(v7, v32);
        *((_DWORD *)v12 + 18) = 265;
        *(_OWORD *)v12 = *v16;
        *((_OWORD *)v12 + 1) = v16[1];
        *((_OWORD *)v12 + 2) = v16[2];
        *((_OWORD *)v12 + 3) = v16[3];
        break;
      default:
        v31 = 2751;
        goto LABEL_3;
    }
    *((_BYTE *)v12 + 76) = 1;
    --*((_DWORD *)v2 + 4);
    return 0;
  }
  v31 = 2654;
LABEL_3:
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (unsigned int)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v31,
    0LL);
  return v3;
}
