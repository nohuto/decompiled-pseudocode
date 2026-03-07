__int64 __fastcall CExpressionValueStack::Vector4Transform(__int64 this)
{
  unsigned int v1; // eax
  __int64 v2; // rsi
  __int64 v3; // rax
  unsigned int *v4; // rbx
  CExpressionValue *v5; // rax
  _DWORD *v6; // rdi
  __int64 v7; // rax
  CExpressionValue *v8; // rax
  int v9; // edx
  unsigned __int64 v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  int v14; // eax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  unsigned int v22; // ebx
  unsigned int v24; // [rsp+20h] [rbp-49h]
  __int128 v25; // [rsp+30h] [rbp-39h] BYREF
  __int128 v26; // [rsp+40h] [rbp-29h] BYREF
  __int128 v27; // [rsp+50h] [rbp-19h] BYREF
  __int128 v28; // [rsp+60h] [rbp-9h] BYREF
  __int128 v29; // [rsp+70h] [rbp+7h]
  __int128 v30; // [rsp+80h] [rbp+17h]
  __int128 v31; // [rsp+90h] [rbp+27h]
  __int64 v32; // [rsp+D0h] [rbp+67h] BYREF

  v1 = *(_DWORD *)(this + 16);
  v2 = this;
  if ( v1 < 2 )
  {
    v24 = 7708;
LABEL_28:
    v22 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v24,
      0LL);
    return v22;
  }
  v3 = v1 - 2;
  v4 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v3 < *(_DWORD *)(this + 48) )
  {
    v6 = (_DWORD *)(*(_QWORD *)(this + 24) + 80 * v3);
  }
  else
  {
    v5 = CExpressionValue::CExpressionValue((CExpressionValue *)&v28);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v5);
    CExpressionValue::~CExpressionValue((CExpressionValue *)&v28);
    v6 = &CExpressionValueStack::s_emptyValue;
  }
  v7 = (unsigned int)(*(_DWORD *)(v2 + 16) - 1);
  if ( (unsigned int)v7 < *(_DWORD *)(v2 + 48) )
  {
    v4 = (unsigned int *)(*(_QWORD *)(v2 + 24) + 80 * v7);
  }
  else
  {
    v8 = CExpressionValue::CExpressionValue((CExpressionValue *)&v28);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v8);
    CExpressionValue::~CExpressionValue((CExpressionValue *)&v28);
  }
  v9 = v6[18];
  v10 = (unsigned int)(v9 - 35);
  if ( (unsigned int)v10 > 0x22 || (this = 0x400020001LL, !_bittest64(&this, v10)) )
  {
    v24 = 7722;
    goto LABEL_28;
  }
  this = v4[18];
  if ( (_DWORD)this != 71 && (_DWORD)this != 265 )
  {
    v24 = 7731;
    goto LABEL_28;
  }
  switch ( v9 )
  {
    case '#':
      v32 = *(_QWORD *)v6;
      if ( (_DWORD)this == 265 )
      {
        v11 = *((_OWORD *)v4 + 1);
        v28 = *(_OWORD *)v4;
        v12 = *((_OWORD *)v4 + 2);
        v29 = v11;
        v13 = *((_OWORD *)v4 + 3);
        v30 = v12;
        v31 = v13;
        D3DXVec4Transform((struct D2DVector4 *)&v26, (const struct D2DVector2 *)&v32, (const struct D2DMatrix *)&v28);
      }
      else
      {
        v25 = *(_OWORD *)v4;
        D3DXVec4Transform(
          (struct D2DVector4 *)&v26,
          (const struct D2DVector2 *)&v32,
          (const struct D2DQuaternion *)&v25);
      }
      break;
    case '4':
      v14 = v6[2];
      *(_QWORD *)&v25 = *(_QWORD *)v6;
      DWORD2(v25) = v14;
      if ( (_DWORD)this == 265 )
      {
        v15 = *((_OWORD *)v4 + 1);
        v28 = *(_OWORD *)v4;
        v16 = *((_OWORD *)v4 + 2);
        v29 = v15;
        v17 = *((_OWORD *)v4 + 3);
        v30 = v16;
        v31 = v17;
        D3DXVec4Transform((struct D2DVector4 *)&v26, (const struct D2DVector3 *)&v25, (const struct D2DMatrix *)&v28);
      }
      else
      {
        v27 = *(_OWORD *)v4;
        D3DXVec4Transform(
          (struct D2DVector4 *)&v26,
          (const struct D2DVector3 *)&v25,
          (const struct D2DQuaternion *)&v27);
      }
      break;
    case 'E':
      v25 = *(_OWORD *)v6;
      if ( (_DWORD)this == 265 )
      {
        v18 = *((_OWORD *)v4 + 1);
        v28 = *(_OWORD *)v4;
        v19 = *((_OWORD *)v4 + 2);
        v29 = v18;
        v20 = *((_OWORD *)v4 + 3);
        v30 = v19;
        v31 = v20;
        D3DXVec4Transform((struct D2DVector4 *)&v26, (const struct D2DVector4 *)&v25, (const struct D2DMatrix *)&v28);
      }
      else
      {
        v27 = *(_OWORD *)v4;
        D3DXVec4Transform(
          (struct D2DVector4 *)&v26,
          (const struct D2DVector4 *)&v25,
          (const struct D2DQuaternion *)&v27);
      }
      break;
  }
  v21 = v26;
  v6[18] = 69;
  *((_BYTE *)v6 + 76) = 1;
  *(_OWORD *)v6 = v21;
  --*(_DWORD *)(v2 + 16);
  return 0;
}
