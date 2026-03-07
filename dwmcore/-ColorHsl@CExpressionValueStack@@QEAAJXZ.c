__int64 __fastcall CExpressionValueStack::ColorHsl(CExpressionValueStack *this)
{
  unsigned int v2; // eax
  __int64 v3; // rax
  _QWORD *v4; // r14
  float *v5; // rbx
  CExpressionValue *v6; // rax
  _DWORD *v7; // rsi
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  float *v10; // rbp
  __int64 v11; // rax
  CExpressionValue *v12; // rax
  unsigned int v13; // r14d
  float v14; // xmm8_4
  float v15; // xmm6_4
  ColorSpaceHelpers *v16; // rcx
  __int128 v17; // xmm0
  unsigned int v19; // [rsp+20h] [rbp-A8h]
  __int128 v20; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v21[112]; // [rsp+50h] [rbp-78h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( v2 < 3 )
  {
    v19 = 5382;
LABEL_17:
    v13 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v19,
      0LL);
    return v13;
  }
  v3 = v2 - 3;
  v4 = (_QWORD *)((char *)this + 24);
  v5 = (float *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v3 < *((_DWORD *)this + 12) )
  {
    v7 = (_DWORD *)(*v4 + 80 * v3);
  }
  else
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
    v7 = &CExpressionValueStack::s_emptyValue;
  }
  v8 = (unsigned int)(*((_DWORD *)this + 4) - 2);
  if ( (unsigned int)v8 < *((_DWORD *)this + 12) )
  {
    v10 = (float *)(*v4 + 80 * v8);
  }
  else
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
    v10 = (float *)&CExpressionValueStack::s_emptyValue;
  }
  v11 = (unsigned int)(*((_DWORD *)this + 4) - 1);
  if ( (unsigned int)v11 < *((_DWORD *)this + 12) )
  {
    v5 = (float *)(*v4 + 80 * v11);
  }
  else
  {
    v12 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v12);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
  }
  if ( v7[18] != 18 || *((_DWORD *)v10 + 18) != 18 || (v13 = 0, *((_DWORD *)v5 + 18) != 18) )
  {
    v19 = 5398;
    goto LABEL_17;
  }
  v14 = fmaxf(fminf(*v5, 1.0), 0.0);
  v15 = fmaxf(fminf(*v10, 1.0), 0.0);
  fmodf_0(*(float *)v7, 6.2831855);
  ColorSpaceHelpers::Color_RGBAfromHSLA(
    v16,
    v15,
    v14,
    1.0,
    (float *)&v20,
    (float *)&v20 + 1,
    (float *)&v20 + 2,
    (float *)&v20 + 3);
  v17 = v20;
  v7[18] = 70;
  *((_BYTE *)v7 + 76) = 1;
  *(_OWORD *)v7 = v17;
  *((_DWORD *)this + 4) -= 2;
  return v13;
}
