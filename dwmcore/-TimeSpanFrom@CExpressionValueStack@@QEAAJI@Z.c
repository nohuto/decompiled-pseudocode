__int64 __fastcall CExpressionValueStack::TimeSpanFrom(CExpressionValueStack *this, int a2)
{
  int v2; // eax
  unsigned int v4; // ebx
  __int64 v5; // rax
  CExpressionValue *v6; // rax
  _DWORD *v7; // rbx
  unsigned int v9; // [rsp+20h] [rbp-68h]
  _BYTE v10[88]; // [rsp+30h] [rbp-58h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    v5 = (unsigned int)(v2 - 1);
    if ( (unsigned int)v5 < *((_DWORD *)this + 12) )
    {
      v7 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v5);
    }
    else
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v10);
      v7 = &CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v10);
    }
    if ( v7[18] == 18 )
    {
      v7[18] = 42;
      *((_BYTE *)v7 + 76) = 1;
      *(float *)v7 = (float)a2 * *(float *)v7;
      return 0;
    }
    v9 = 7212;
  }
  else
  {
    v9 = 7200;
  }
  v4 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v9,
    0LL);
  return v4;
}
