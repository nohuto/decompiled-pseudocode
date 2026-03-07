__int64 __fastcall CExpressionValueStack::Vector3(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  __int64 v3; // rax
  _QWORD *v4; // r14
  int *v5; // rdi
  CExpressionValue *v6; // rax
  _DWORD *v7; // rbx
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  int *v10; // rbp
  __int64 v11; // rax
  CExpressionValue *v12; // rax
  unsigned int v13; // r14d
  int v14; // xmm0_4
  int v15; // xmm1_4
  int v16; // eax
  unsigned int v18; // [rsp+20h] [rbp-68h]
  _BYTE v19[80]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 3 )
  {
    v18 = 5180;
LABEL_17:
    v13 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (unsigned int)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v18,
      0LL);
    return v13;
  }
  v3 = v1 - 3;
  v4 = (_QWORD *)((char *)this + 24);
  v5 = (int *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v3 < *((_DWORD *)this + 12) )
  {
    v7 = (_DWORD *)(*v4 + 80 * v3);
  }
  else
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
    v7 = &CExpressionValueStack::s_emptyValue;
  }
  v8 = (unsigned int)(*((_DWORD *)this + 4) - 2);
  if ( (unsigned int)v8 < *((_DWORD *)this + 12) )
  {
    v10 = (int *)(*v4 + 80 * v8);
  }
  else
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
    v10 = (int *)&CExpressionValueStack::s_emptyValue;
  }
  v11 = (unsigned int)(*((_DWORD *)this + 4) - 1);
  if ( (unsigned int)v11 < *((_DWORD *)this + 12) )
  {
    v5 = (int *)(*v4 + 80 * v11);
  }
  else
  {
    v12 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v12);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
  }
  if ( v7[18] != 18 || v10[18] != 18 || (v13 = 0, v5[18] != 18) )
  {
    v18 = 5196;
    goto LABEL_17;
  }
  v14 = *v10;
  v15 = *v5;
  v16 = *v7;
  v7[18] = 52;
  *v7 = v16;
  v7[1] = v14;
  v7[2] = v15;
  *((_BYTE *)v7 + 76) = 1;
  *((_DWORD *)this + 4) -= 2;
  return v13;
}
