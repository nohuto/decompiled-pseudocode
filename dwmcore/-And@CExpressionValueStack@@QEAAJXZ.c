__int64 __fastcall CExpressionValueStack::And(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  CExpressionValueStack *v2; // rsi
  unsigned int v3; // ebp
  __int64 v4; // rax
  _DWORD *v5; // rdi
  CExpressionValue *v6; // rax
  unsigned int *v7; // rbx
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  bool v10; // al
  unsigned int v12; // [rsp+20h] [rbp-68h]
  _BYTE v13[80]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = this;
  if ( v1 < 2 )
  {
    v12 = 2075;
LABEL_3:
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v12,
      0LL);
    return v3;
  }
  v4 = v1 - 2;
  v5 = &CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v4 < *((_DWORD *)this + 12) )
  {
    v7 = (unsigned int *)(*((_QWORD *)this + 3) + 80 * v4);
  }
  else
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v13);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v13);
    v7 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
  }
  v8 = (unsigned int)(*((_DWORD *)v2 + 4) - 1);
  if ( (unsigned int)v8 < *((_DWORD *)v2 + 12) )
  {
    v5 = (_DWORD *)(*((_QWORD *)v2 + 3) + 80 * v8);
  }
  else
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v13);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v13);
  }
  this = (CExpressionValueStack *)v7[18];
  v10 = 0;
  v3 = 0;
  if ( (_DWORD)this != v5[18] )
  {
    v12 = 2103;
    goto LABEL_3;
  }
  if ( (_DWORD)this != 17 )
  {
    v12 = 2122;
    goto LABEL_3;
  }
  if ( *(_BYTE *)v7 )
    v10 = *(_BYTE *)v5 != 0;
  v7[18] = 17;
  *(_BYTE *)v7 = v10;
  *((_BYTE *)v7 + 76) = 1;
  --*((_DWORD *)v2 + 4);
  return v3;
}
