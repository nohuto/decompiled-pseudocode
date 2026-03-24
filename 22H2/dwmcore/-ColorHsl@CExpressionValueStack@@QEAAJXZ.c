/*
 * XREFs of ?ColorHsl@CExpressionValueStack@@QEAAJXZ @ 0x1801FB834
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A610 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1800047B8 (-Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A10F4 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC6A4 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBAA4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     fmodf_0 @ 0x1800F3FAB (fmodf_0.c)
 */

__int64 __fastcall CExpressionValueStack::ColorHsl(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  __int64 v4; // rax
  float *v5; // rbx
  CExpressionValue *v6; // rax
  _DWORD *v7; // rsi
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  float *v10; // rbp
  CExpressionValue *v11; // rax
  unsigned int v12; // r14d
  float v13; // xmm8_4
  float v14; // xmm6_4
  ColorSpaceHelpers *v15; // rcx
  __int128 v16; // xmm0
  unsigned int v18; // [rsp+20h] [rbp-A8h]
  __int128 v19; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v20[112]; // [rsp+50h] [rbp-78h] BYREF

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 < 3 )
  {
    v18 = 5382;
LABEL_17:
    v12 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      v2,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v18,
      0LL);
    return v12;
  }
  v3 = *((_DWORD *)this + 12);
  v4 = (unsigned int)(v2 - 3);
  v5 = (float *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v4 < v3 )
  {
    v7 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v4);
  }
  else
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
    LODWORD(v2) = *((_DWORD *)this + 4);
    v7 = &CExpressionValueStack::s_emptyValue;
    v3 = *((_DWORD *)this + 12);
  }
  v8 = (unsigned int)(v2 - 2);
  if ( (unsigned int)v8 < v3 )
  {
    v10 = (float *)(*((_QWORD *)this + 3) + 80 * v8);
  }
  else
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
    LODWORD(v2) = *((_DWORD *)this + 4);
    v10 = (float *)&CExpressionValueStack::s_emptyValue;
    v3 = *((_DWORD *)this + 12);
  }
  v2 = (unsigned int)(v2 - 1);
  if ( (unsigned int)v2 < v3 )
  {
    v5 = (float *)(*((_QWORD *)this + 3) + 80 * v2);
  }
  else
  {
    v11 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v11);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
  }
  if ( v7[18] != 18 || *((_DWORD *)v10 + 18) != 18 || (v12 = 0, *((_DWORD *)v5 + 18) != 18) )
  {
    v18 = 5398;
    goto LABEL_17;
  }
  v13 = fmaxf(fminf(*v5, 1.0), 0.0);
  v14 = fmaxf(fminf(*v10, 1.0), 0.0);
  fmodf_0(*(float *)v7, 6.2831855);
  ColorSpaceHelpers::Color_RGBAfromHSLA(
    v15,
    v14,
    v13,
    1.0,
    (float *)&v19,
    (float *)&v19 + 1,
    (float *)&v19 + 2,
    (float *)&v19 + 3);
  v16 = v19;
  v7[18] = 70;
  *((_BYTE *)v7 + 76) = 1;
  *(_OWORD *)v7 = v16;
  *((_DWORD *)this + 4) -= 2;
  return v12;
}
