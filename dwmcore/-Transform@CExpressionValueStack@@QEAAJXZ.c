__int64 __fastcall CExpressionValueStack::Transform(
        CExpressionValueStack *this,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v4; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  float *v8; // rbx
  CExpressionValue *v9; // rax
  float *v10; // rdi
  __int64 v11; // rax
  CExpressionValue *v12; // rax
  __int128 v13; // xmm0
  float v14; // xmm2_4
  float v15; // xmm3_4
  unsigned int v17; // [rsp+20h] [rbp-98h]
  unsigned int v18; // [rsp+28h] [rbp-90h]
  _BYTE v19[80]; // [rsp+30h] [rbp-88h] BYREF
  __int128 v20; // [rsp+80h] [rbp-38h] BYREF
  __int128 v21; // [rsp+90h] [rbp-28h] BYREF

  v4 = *((_DWORD *)this + 4);
  if ( v4 >= 2 )
  {
    v7 = v4 - 2;
    v8 = (float *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v7 < *((_DWORD *)this + 12) )
    {
      v10 = (float *)(*((_QWORD *)this + 3) + 80 * v7);
    }
    else
    {
      v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
      v10 = (float *)&CExpressionValueStack::s_emptyValue;
    }
    v11 = (unsigned int)(*((_DWORD *)this + 4) - 1);
    if ( (unsigned int)v11 < *((_DWORD *)this + 12) )
    {
      v8 = (float *)(*((_QWORD *)this + 3) + 80 * v11);
    }
    else
    {
      v12 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v12);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
    }
    if ( *((_DWORD *)v10 + 18) == 35 )
    {
      if ( *((_DWORD *)v8 + 18) != 104 )
      {
        v17 = 2841;
        goto LABEL_3;
      }
      v14 = (float)((float)(v10[1] * v8[2]) + (float)(*v10 * *v8)) + v8[4];
      v15 = (float)((float)(*v10 * v8[1]) + (float)(v10[1] * v8[3])) + v8[5];
      *((_DWORD *)v10 + 18) = 35;
      *v10 = v14;
      v10[1] = v15;
    }
    else
    {
      if ( *((_DWORD *)v10 + 18) != 69 )
      {
LABEL_19:
        --*((_DWORD *)this + 4);
        return 0;
      }
      if ( *((_DWORD *)v8 + 18) != 265 )
      {
        v17 = 2810;
        goto LABEL_3;
      }
      v20 = *(_OWORD *)v10;
      D3DXVec4TransformArray(
        (struct D2DVector4 *)&v21,
        a2,
        (const struct D2DVector4 *)&v20,
        a4,
        (const struct D2DMatrix *)v8,
        v18);
      v13 = v21;
      *((_DWORD *)v10 + 18) = 69;
      *(_OWORD *)v10 = v13;
    }
    *((_BYTE *)v10 + 76) = 1;
    goto LABEL_19;
  }
  v17 = 2784;
LABEL_3:
  v6 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v17,
    0LL);
  return v6;
}
