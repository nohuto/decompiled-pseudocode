__int64 __fastcall CExpressionValueStack::Matrix4x4FromAxisAngle(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  __int64 v3; // rax
  float *v4; // rbx
  CExpressionValue *v5; // rax
  _DWORD *v6; // rdi
  __int64 v7; // rax
  CExpressionValue *v8; // rax
  unsigned int v9; // r14d
  int v10; // eax
  float v11; // xmm2_4
  unsigned int v13; // [rsp+28h] [rbp-19h]
  __int64 v14; // [rsp+38h] [rbp-9h] BYREF
  int v15; // [rsp+40h] [rbp-1h]
  _OWORD v16[5]; // [rsp+48h] [rbp+7h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 2 )
  {
    v13 = 6134;
LABEL_13:
    v9 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v13,
      0LL);
    return v9;
  }
  v3 = v1 - 2;
  v4 = (float *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v3 < *((_DWORD *)this + 12) )
  {
    v6 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v3);
  }
  else
  {
    v5 = CExpressionValue::CExpressionValue((CExpressionValue *)v16);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v5);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v16);
    v6 = &CExpressionValueStack::s_emptyValue;
  }
  v7 = (unsigned int)(*((_DWORD *)this + 4) - 1);
  if ( (unsigned int)v7 < *((_DWORD *)this + 12) )
  {
    v4 = (float *)(*((_QWORD *)this + 3) + 80 * v7);
  }
  else
  {
    v8 = CExpressionValue::CExpressionValue((CExpressionValue *)v16);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v8);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v16);
  }
  if ( v6[18] != 52 || (v9 = 0, *((_DWORD *)v4 + 18) != 18) )
  {
    v13 = 6148;
    goto LABEL_13;
  }
  v10 = v6[2];
  v11 = *v4;
  v14 = *(_QWORD *)v6;
  v15 = v10;
  D2DMatrixRotationAxis((struct D2DMatrix *)v16, (const struct D2DVector3 *)&v14, v11);
  v6[18] = 265;
  *(_OWORD *)v6 = v16[0];
  *((_OWORD *)v6 + 1) = v16[1];
  *((_OWORD *)v6 + 2) = v16[2];
  *((_OWORD *)v6 + 3) = v16[3];
  *((_BYTE *)v6 + 76) = 1;
  --*((_DWORD *)this + 4);
  return v9;
}
