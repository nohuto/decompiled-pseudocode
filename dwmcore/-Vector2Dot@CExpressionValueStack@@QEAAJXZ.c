__int64 __fastcall CExpressionValueStack::Vector2Dot(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v3; // ebx
  __int64 v4; // rax
  float *v5; // rbx
  CExpressionValue *v6; // rax
  float *v7; // rsi
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  unsigned int v15; // [rsp+20h] [rbp-68h]
  _BYTE v16[80]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 2 )
  {
    v4 = v1 - 2;
    v5 = (float *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v4 < *((_DWORD *)this + 12) )
    {
      v7 = (float *)(*((_QWORD *)this + 3) + 80 * v4);
    }
    else
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v16);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v16);
      v7 = (float *)&CExpressionValueStack::s_emptyValue;
    }
    v8 = (unsigned int)(*((_DWORD *)this + 4) - 1);
    if ( (unsigned int)v8 < *((_DWORD *)this + 12) )
    {
      v5 = (float *)(*((_QWORD *)this + 3) + 80 * v8);
    }
    else
    {
      v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v16);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v16);
    }
    if ( *((_DWORD *)v7 + 18) == 35 )
    {
      if ( *((_DWORD *)v5 + 18) == 35 )
      {
        v10 = *v5;
        v11 = v5[1];
        v12 = *v7;
        v13 = v7[1];
        *((_DWORD *)v7 + 18) = 18;
        *((_BYTE *)v7 + 76) = 1;
        *v7 = (float)(v12 * v10) + (float)(v13 * v11);
        --*((_DWORD *)this + 4);
        return 0;
      }
      v15 = 7253;
    }
    else
    {
      v15 = 7252;
    }
  }
  else
  {
    v15 = 7246;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v15,
    0LL);
  return v3;
}
