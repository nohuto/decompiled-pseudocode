__int64 __fastcall CExpressionValueStack::Pow(CExpressionValueStack *this)
{
  unsigned int v2; // eax
  __int64 v3; // rax
  float *v4; // rdi
  CExpressionValue *v5; // rax
  _DWORD *v6; // rbx
  __int64 v7; // rax
  CExpressionValue *v8; // rax
  int v9; // eax
  unsigned int v10; // r14d
  float v11; // xmm6_4
  unsigned int v13; // [rsp+20h] [rbp-78h]
  _BYTE v14[96]; // [rsp+30h] [rbp-68h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( v2 < 2 )
  {
    v13 = 4741;
LABEL_16:
    v10 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (unsigned int)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v13,
      0LL);
    return v10;
  }
  v3 = v2 - 2;
  v4 = (float *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v3 < *((_DWORD *)this + 12) )
  {
    v6 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v3);
  }
  else
  {
    v5 = CExpressionValue::CExpressionValue((CExpressionValue *)v14);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v5);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v14);
    v6 = &CExpressionValueStack::s_emptyValue;
  }
  v7 = (unsigned int)(*((_DWORD *)this + 4) - 1);
  if ( (unsigned int)v7 < *((_DWORD *)this + 12) )
  {
    v4 = (float *)(*((_QWORD *)this + 3) + 80 * v7);
  }
  else
  {
    v8 = CExpressionValue::CExpressionValue((CExpressionValue *)v14);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v8);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v14);
  }
  v9 = v6[18];
  v10 = 0;
  if ( v9 != *((_DWORD *)v4 + 18) )
  {
    v13 = 4764;
    goto LABEL_16;
  }
  if ( v9 != 18 )
  {
    v13 = 4798;
    goto LABEL_16;
  }
  v11 = powf_0(*(float *)v6, *v4);
  if ( _isnan(v11) )
  {
    v13 = 4784;
    goto LABEL_16;
  }
  *(float *)v6 = v11;
  v6[18] = 18;
  *((_BYTE *)v6 + 76) = 1;
  --*((_DWORD *)this + 4);
  return v10;
}
