__int64 __fastcall CExpressionValueStack::Tan(CExpressionValueStack *this)
{
  int v1; // eax
  __int64 v2; // rax
  CExpressionValue *v3; // rax
  _DWORD *v4; // rbx
  float v5; // xmm6_4
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+20h] [rbp-78h]
  _BYTE v9[80]; // [rsp+30h] [rbp-68h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( !v1 )
  {
    v8 = 4331;
LABEL_11:
    v6 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v8,
      0LL);
    return v6;
  }
  v2 = (unsigned int)(v1 - 1);
  if ( (unsigned int)v2 < *((_DWORD *)this + 12) )
  {
    v4 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v2);
  }
  else
  {
    v3 = CExpressionValue::CExpressionValue((CExpressionValue *)v9);
    v4 = &CExpressionValueStack::s_emptyValue;
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v3);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v9);
  }
  if ( v4[18] != 18 )
  {
    v8 = 4373;
    goto LABEL_11;
  }
  v5 = tanf_0(*(float *)v4);
  if ( _isnan(v5) )
  {
    v8 = 4358;
    goto LABEL_11;
  }
  *(float *)v4 = v5;
  v4[18] = 18;
  *((_BYTE *)v4 + 76) = 1;
  return 0;
}
