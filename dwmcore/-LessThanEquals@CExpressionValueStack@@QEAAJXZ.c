__int64 __fastcall CExpressionValueStack::LessThanEquals(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v3; // ebp
  __int64 v4; // rax
  float *v5; // rbx
  CExpressionValue *v6; // rax
  _DWORD *v7; // rdi
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  int v10; // eax
  bool v11; // cf
  unsigned int v13; // [rsp+20h] [rbp-68h]
  _BYTE v14[80]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 2 )
  {
    v4 = v1 - 2;
    v5 = (float *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v4 < *((_DWORD *)this + 12) )
    {
      v7 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v4);
    }
    else
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v14);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v14);
      v7 = &CExpressionValueStack::s_emptyValue;
    }
    v8 = (unsigned int)(*((_DWORD *)this + 4) - 1);
    if ( (unsigned int)v8 < *((_DWORD *)this + 12) )
    {
      v5 = (float *)(*((_QWORD *)this + 3) + 80 * v8);
    }
    else
    {
      v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v14);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v14);
    }
    v10 = v7[18];
    v3 = 0;
    if ( v10 == *((_DWORD *)v5 + 18) )
    {
      if ( v10 == 18 )
      {
        v11 = *v5 < *(float *)v7;
        v7[18] = 17;
        *((_BYTE *)v7 + 76) = 1;
        *(_BYTE *)v7 = !v11;
        --*((_DWORD *)this + 4);
        return v3;
      }
      v13 = 1880;
    }
    else
    {
      v13 = 1860;
    }
  }
  else
  {
    v13 = 1832;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (unsigned int)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v13,
    0LL);
  return v3;
}
