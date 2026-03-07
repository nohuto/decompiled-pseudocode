__int64 __fastcall CExpressionValueStack::QuaternionFromAxisAngle(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  __int64 v3; // rax
  float *v4; // rbx
  CExpressionValue *v5; // rax
  _DWORD *v6; // rdi
  __int64 v7; // rax
  CExpressionValue *v8; // rax
  unsigned int v9; // ebp
  int v10; // eax
  float v11; // xmm2_4
  __int128 v12; // xmm0
  unsigned int v14; // [rsp+20h] [rbp-88h]
  __int64 v15; // [rsp+30h] [rbp-78h] BYREF
  int v16; // [rsp+38h] [rbp-70h]
  __int128 v17; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v18[80]; // [rsp+50h] [rbp-58h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 2 )
  {
    v14 = 6941;
LABEL_13:
    v9 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v14,
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
    v5 = CExpressionValue::CExpressionValue((CExpressionValue *)v18);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v5);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v18);
    v6 = &CExpressionValueStack::s_emptyValue;
  }
  v7 = (unsigned int)(*((_DWORD *)this + 4) - 1);
  if ( (unsigned int)v7 < *((_DWORD *)this + 12) )
  {
    v4 = (float *)(*((_QWORD *)this + 3) + 80 * v7);
  }
  else
  {
    v8 = CExpressionValue::CExpressionValue((CExpressionValue *)v18);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v8);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v18);
  }
  if ( v6[18] != 52 || (v9 = 0, *((_DWORD *)v4 + 18) != 18) )
  {
    v14 = 6955;
    goto LABEL_13;
  }
  v10 = v6[2];
  v11 = *v4;
  v15 = *(_QWORD *)v6;
  v16 = v10;
  D3DXQuaternionRotationAxis((struct D2DQuaternion *)&v17, (const struct D2DVector3 *)&v15, v11);
  v12 = v17;
  v6[18] = 71;
  *((_BYTE *)v6 + 76) = 1;
  *(_OWORD *)v6 = v12;
  --*((_DWORD *)this + 4);
  return v9;
}
