__int64 __fastcall CExpressionValueStack::Matrix4x4FromRotationX(CExpressionValueStack *this, __int64 a2)
{
  unsigned int v2; // eax
  int v3; // r15d
  __int64 v5; // rax
  CExpressionValue *v6; // rax
  _DWORD *v7; // rbx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rax
  _DWORD *v12; // rbx
  CExpressionValue *v13; // rax
  _DWORD *v14; // r14
  __int64 v15; // rax
  CExpressionValue *v16; // rax
  int v17; // eax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  unsigned int v22; // ebx
  unsigned int v24; // [rsp+28h] [rbp-29h]
  __int64 v25; // [rsp+38h] [rbp-19h] BYREF
  int v26; // [rsp+40h] [rbp-11h]
  __int128 v27; // [rsp+48h] [rbp-9h] BYREF
  __int128 v28; // [rsp+58h] [rbp+7h]
  __int128 v29; // [rsp+68h] [rbp+17h]
  __int128 v30; // [rsp+78h] [rbp+27h]

  v2 = *((_DWORD *)this + 4);
  v3 = a2;
  if ( v2 < (unsigned int)a2 )
  {
    v24 = 6358;
LABEL_21:
    v22 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v24,
      0LL);
    return v22;
  }
  if ( (_DWORD)a2 != 1 )
  {
    if ( (_DWORD)a2 == 2 )
    {
      v11 = v2 - 2;
      v12 = &CExpressionValueStack::s_emptyValue;
      if ( (unsigned int)v11 < *((_DWORD *)this + 12) )
      {
        v14 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v11);
      }
      else
      {
        v13 = CExpressionValue::CExpressionValue((CExpressionValue *)&v27);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v13);
        CExpressionValue::~CExpressionValue((CExpressionValue *)&v27);
        v14 = &CExpressionValueStack::s_emptyValue;
      }
      v15 = (unsigned int)(*((_DWORD *)this + 4) - 1);
      if ( (unsigned int)v15 < *((_DWORD *)this + 12) )
      {
        v12 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v15);
      }
      else
      {
        v16 = CExpressionValue::CExpressionValue((CExpressionValue *)&v27);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v16);
        CExpressionValue::~CExpressionValue((CExpressionValue *)&v27);
      }
      if ( v14[18] == 18 && v12[18] == 52 )
      {
        v17 = v12[2];
        v25 = *(_QWORD *)v12;
        v26 = v17;
        D2DMatrixRotationX(&v27, a2, &v25);
        v18 = v27;
        v19 = v28;
        v14[18] = 265;
        *(_OWORD *)v14 = v18;
        *((_BYTE *)v14 + 76) = 1;
        v20 = v29;
        *((_OWORD *)v14 + 1) = v19;
        v21 = v30;
        *((_OWORD *)v14 + 2) = v20;
        *((_OWORD *)v14 + 3) = v21;
        goto LABEL_19;
      }
    }
LABEL_20:
    v24 = 6404;
    goto LABEL_21;
  }
  v5 = v2 - 1;
  if ( (unsigned int)v5 < *((_DWORD *)this + 12) )
  {
    v7 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v5);
  }
  else
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)&v27);
    v7 = &CExpressionValueStack::s_emptyValue;
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)&v27);
  }
  if ( v7[18] != 18 )
    goto LABEL_20;
  D2DMatrixRotationX((struct D2DMatrix *)&v27, *(float *)v7);
  v8 = v28;
  *(_OWORD *)v7 = v27;
  v7[18] = 265;
  v9 = v29;
  *((_OWORD *)v7 + 1) = v8;
  *((_BYTE *)v7 + 76) = 1;
  v10 = v30;
  *((_OWORD *)v7 + 2) = v9;
  *((_OWORD *)v7 + 3) = v10;
LABEL_19:
  *((_DWORD *)this + 4) += 1 - v3;
  return 0;
}
