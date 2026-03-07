__int64 __fastcall CExpressionValueStack::QuaternionFromLerp(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v3; // ebx
  __int64 v4; // rax
  float *v5; // rbx
  CExpressionValue *v6; // rax
  _DWORD *v7; // r14
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  _DWORD *v10; // r15
  __int64 v11; // rax
  CExpressionValue *v12; // rax
  __int128 v13; // xmm1
  float v14; // xmm3_4
  __int128 v15; // xmm0
  unsigned int v17; // [rsp+28h] [rbp-39h]
  __int128 v18; // [rsp+38h] [rbp-29h] BYREF
  __int128 v19; // [rsp+48h] [rbp-19h] BYREF
  __int128 v20; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v21[80]; // [rsp+68h] [rbp+7h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 3 )
  {
    v4 = v1 - 3;
    v5 = (float *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v4 < *((_DWORD *)this + 12) )
    {
      v7 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v4);
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
      v10 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v8);
    }
    else
    {
      v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
      v10 = &CExpressionValueStack::s_emptyValue;
    }
    v11 = (unsigned int)(*((_DWORD *)this + 4) - 1);
    if ( (unsigned int)v11 < *((_DWORD *)this + 12) )
    {
      v5 = (float *)(*((_QWORD *)this + 3) + 80 * v11);
    }
    else
    {
      v12 = CExpressionValue::CExpressionValue((CExpressionValue *)v21);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v12);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v21);
    }
    if ( v7[18] == 71 )
    {
      if ( v10[18] == 71 )
      {
        if ( *((_DWORD *)v5 + 18) == 18 )
        {
          v13 = *(_OWORD *)v10;
          v14 = *v5;
          v19 = *(_OWORD *)v7;
          v18 = v13;
          D3DXQuaternionLerp(
            (struct D2DQuaternion *)&v20,
            (const struct D2DQuaternion *)&v19,
            (const struct D2DQuaternion *)&v18,
            v14);
          v15 = v20;
          v7[18] = 71;
          *((_BYTE *)v7 + 76) = 1;
          *(_OWORD *)v7 = v15;
          *((_DWORD *)this + 4) -= 2;
          return 0;
        }
        v17 = 7011;
      }
      else
      {
        v17 = 7010;
      }
    }
    else
    {
      v17 = 7009;
    }
  }
  else
  {
    v17 = 7002;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v17,
    0LL);
  return v3;
}
