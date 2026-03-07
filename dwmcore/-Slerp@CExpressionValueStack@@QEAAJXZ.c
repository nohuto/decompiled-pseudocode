__int64 __fastcall CExpressionValueStack::Slerp(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  __int64 v3; // rax
  _QWORD *v4; // rbp
  float *v5; // rbx
  CExpressionValue *v6; // rax
  const struct D2DQuaternion *v7; // rsi
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  const struct D2DQuaternion *v10; // r14
  __int64 v11; // rax
  CExpressionValue *v12; // rax
  int v13; // eax
  unsigned int v14; // ebp
  __int128 v15; // xmm0
  unsigned int v17; // [rsp+20h] [rbp-78h]
  __int128 v18; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v19[80]; // [rsp+40h] [rbp-58h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 3 )
  {
    v17 = 3878;
LABEL_18:
    v14 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v17,
      0LL);
    return v14;
  }
  v3 = v1 - 3;
  v4 = (_QWORD *)((char *)this + 24);
  v5 = (float *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v3 < *((_DWORD *)this + 12) )
  {
    v7 = (const struct D2DQuaternion *)(*v4 + 80 * v3);
  }
  else
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
    v7 = (const struct D2DQuaternion *)&CExpressionValueStack::s_emptyValue;
  }
  v8 = (unsigned int)(*((_DWORD *)this + 4) - 2);
  if ( (unsigned int)v8 < *((_DWORD *)this + 12) )
  {
    v10 = (const struct D2DQuaternion *)(*v4 + 80 * v8);
  }
  else
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
    v10 = (const struct D2DQuaternion *)&CExpressionValueStack::s_emptyValue;
  }
  v11 = (unsigned int)(*((_DWORD *)this + 4) - 1);
  if ( (unsigned int)v11 < *((_DWORD *)this + 12) )
  {
    v5 = (float *)(*v4 + 80 * v11);
  }
  else
  {
    v12 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v12);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
  }
  v13 = *((_DWORD *)v7 + 18);
  if ( *((_DWORD *)v5 + 18) != 18 || (v14 = 0, v13 != *((_DWORD *)v10 + 18)) )
  {
    v17 = 3903;
    goto LABEL_18;
  }
  if ( v13 != 71 )
  {
    v17 = 3935;
    goto LABEL_18;
  }
  D3DXQuaternionSlerp((struct D2DQuaternion *)&v18, v7, v10, *v5);
  v15 = v18;
  *((_DWORD *)v7 + 18) = 71;
  *((_BYTE *)v7 + 76) = 1;
  *(_OWORD *)v7 = v15;
  *((_DWORD *)this + 4) -= 2;
  return v14;
}
