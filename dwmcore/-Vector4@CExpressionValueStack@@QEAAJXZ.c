__int64 __fastcall CExpressionValueStack::Vector4(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  __int64 v3; // rax
  _QWORD *v4; // r15
  _DWORD *v5; // rbx
  CExpressionValue *v6; // rax
  _DWORD *v7; // rsi
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  _DWORD *v10; // r14
  __int64 v11; // rax
  CExpressionValue *v12; // rax
  _DWORD *v13; // r12
  __int64 v14; // rax
  CExpressionValue *v15; // rax
  unsigned int v16; // r15d
  unsigned int v18; // [rsp+28h] [rbp-29h]
  __int128 v19; // [rsp+38h] [rbp-19h]
  _BYTE v20[80]; // [rsp+48h] [rbp-9h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 4 )
  {
    v18 = 5237;
LABEL_21:
    v16 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v18,
      0LL);
    return v16;
  }
  v3 = v1 - 4;
  v4 = (_QWORD *)((char *)this + 24);
  v5 = &CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v3 < *((_DWORD *)this + 12) )
  {
    v7 = (_DWORD *)(*v4 + 80 * v3);
  }
  else
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
    v7 = &CExpressionValueStack::s_emptyValue;
  }
  v8 = (unsigned int)(*((_DWORD *)this + 4) - 3);
  if ( (unsigned int)v8 < *((_DWORD *)this + 12) )
  {
    v10 = (_DWORD *)(*v4 + 80 * v8);
  }
  else
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
    v10 = &CExpressionValueStack::s_emptyValue;
  }
  v11 = (unsigned int)(*((_DWORD *)this + 4) - 2);
  if ( (unsigned int)v11 < *((_DWORD *)this + 12) )
  {
    v13 = (_DWORD *)(*v4 + 80 * v11);
  }
  else
  {
    v12 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v12);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
    v13 = &CExpressionValueStack::s_emptyValue;
  }
  v14 = (unsigned int)(*((_DWORD *)this + 4) - 1);
  if ( (unsigned int)v14 < *((_DWORD *)this + 12) )
  {
    v5 = (_DWORD *)(*v4 + 80 * v14);
  }
  else
  {
    v15 = CExpressionValue::CExpressionValue((CExpressionValue *)v20);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v15);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v20);
  }
  if ( v7[18] != 18 || v10[18] != 18 || v13[18] != 18 || (v16 = 0, v5[18] != 18) )
  {
    v18 = 5255;
    goto LABEL_21;
  }
  LODWORD(v19) = *v7;
  DWORD1(v19) = *v10;
  DWORD2(v19) = *v13;
  HIDWORD(v19) = *v5;
  v7[18] = 69;
  *((_BYTE *)v7 + 76) = 1;
  *(_OWORD *)v7 = v19;
  *((_DWORD *)this + 4) -= 3;
  return v16;
}
