__int64 __fastcall CExpressionValueStack::Matrix4x4FromQuaternion(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rax
  CExpressionValue *v4; // rax
  _DWORD *v5; // rbx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  unsigned int v11; // [rsp+20h] [rbp-78h]
  __int128 v12; // [rsp+30h] [rbp-68h] BYREF
  _OWORD v13[5]; // [rsp+40h] [rbp-58h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
  {
    v3 = (unsigned int)(v1 - 1);
    if ( (unsigned int)v3 < *((_DWORD *)this + 12) )
    {
      v5 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v3);
    }
    else
    {
      v4 = CExpressionValue::CExpressionValue((CExpressionValue *)v13);
      v5 = &CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v4);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v13);
    }
    if ( v5[18] == 71 )
    {
      v12 = *(_OWORD *)v5;
      D2DMatrixRotationQuaternion((struct D2DMatrix *)v13, (const struct D2DQuaternion *)&v12);
      v6 = v13[0];
      v7 = v13[1];
      v5[18] = 265;
      *(_OWORD *)v5 = v6;
      *((_BYTE *)v5 + 76) = 1;
      v8 = v13[2];
      *((_OWORD *)v5 + 1) = v7;
      v9 = v13[3];
      *((_OWORD *)v5 + 2) = v8;
      *((_OWORD *)v5 + 3) = v9;
      return 0;
    }
    v11 = 6842;
  }
  else
  {
    v11 = 6837;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v11,
    0LL);
  return v2;
}
