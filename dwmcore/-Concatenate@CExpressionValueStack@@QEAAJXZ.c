__int64 __fastcall CExpressionValueStack::Concatenate(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v3; // ebp
  __int64 v4; // rax
  const struct D2DQuaternion *v5; // rbx
  CExpressionValue *v6; // rax
  const struct D2DQuaternion *v7; // rdi
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  int v10; // eax
  __int128 v11; // xmm0
  unsigned int v13; // [rsp+20h] [rbp-78h]
  __int128 v14; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v15[80]; // [rsp+40h] [rbp-58h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 2 )
  {
    v4 = v1 - 2;
    v5 = (const struct D2DQuaternion *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v4 < *((_DWORD *)this + 12) )
    {
      v7 = (const struct D2DQuaternion *)(*((_QWORD *)this + 3) + 80 * v4);
    }
    else
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v15);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v15);
      v7 = (const struct D2DQuaternion *)&CExpressionValueStack::s_emptyValue;
    }
    v8 = (unsigned int)(*((_DWORD *)this + 4) - 1);
    if ( (unsigned int)v8 < *((_DWORD *)this + 12) )
    {
      v5 = (const struct D2DQuaternion *)(*((_QWORD *)this + 3) + 80 * v8);
    }
    else
    {
      v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v15);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v15);
    }
    v10 = *((_DWORD *)v7 + 18);
    v3 = 0;
    if ( v10 == *((_DWORD *)v5 + 18) )
    {
      if ( v10 == 71 )
      {
        D3DXQuaternionMultiply((struct D2DQuaternion *)&v14, v7, v5);
        v11 = v14;
        *((_DWORD *)v7 + 18) = 71;
        *((_BYTE *)v7 + 76) = 1;
        *(_OWORD *)v7 = v11;
        --*((_DWORD *)this + 4);
        return v3;
      }
      v13 = 4021;
    }
    else
    {
      v13 = 3991;
    }
  }
  else
  {
    v13 = 3968;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v13,
    0LL);
  return v3;
}
