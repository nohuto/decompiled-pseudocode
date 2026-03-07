__int64 __fastcall CExpressionValueStack::Normalize(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rax
  CExpressionValue *v4; // rax
  const struct D2DVector2 *v5; // rbx
  int v6; // eax
  int v7; // eax
  unsigned int v9; // [rsp+20h] [rbp-78h]
  __int128 v10; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v11[88]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v12; // [rsp+A0h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
  {
    v3 = (unsigned int)(v1 - 1);
    if ( (unsigned int)v3 < *((_DWORD *)this + 12) )
    {
      v5 = (const struct D2DVector2 *)(*((_QWORD *)this + 3) + 80 * v3);
    }
    else
    {
      v4 = CExpressionValue::CExpressionValue((CExpressionValue *)v11);
      v5 = (const struct D2DVector2 *)&CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v4);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v11);
    }
    v6 = *((_DWORD *)v5 + 18);
    if ( v6 == 35 )
    {
      D3DXVec2Normalize((struct D2DVector2 *)&v12, v5);
      *(_QWORD *)v5 = v12;
      *((_DWORD *)v5 + 18) = 35;
    }
    else if ( v6 == 52 )
    {
      D3DXVec3Normalize((struct D2DVector3 *)&v10, v5);
      v7 = DWORD2(v10);
      *(_QWORD *)v5 = v10;
      *((_DWORD *)v5 + 2) = v7;
      *((_DWORD *)v5 + 18) = 52;
    }
    else
    {
      if ( v6 == 69 )
      {
        D3DXVec4Normalize((struct D2DVector4 *)&v10, v5);
        *((_DWORD *)v5 + 18) = 69;
      }
      else
      {
        if ( v6 != 71 )
        {
          v9 = 3847;
          goto LABEL_3;
        }
        D3DXQuaternionNormalize((struct D2DQuaternion *)&v10, v5);
        *((_DWORD *)v5 + 18) = 71;
      }
      *(_OWORD *)v5 = v10;
    }
    *((_BYTE *)v5 + 76) = 1;
    return 0;
  }
  v9 = 3790;
LABEL_3:
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v9,
    0LL);
  return v2;
}
