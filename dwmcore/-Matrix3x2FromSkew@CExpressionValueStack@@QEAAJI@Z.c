__int64 __fastcall CExpressionValueStack::Matrix3x2FromSkew(CExpressionValueStack *this, unsigned int a2)
{
  unsigned int v2; // eax
  char v3; // r13
  unsigned int v6; // ebx
  __int64 v7; // rax
  float *v8; // rbx
  CExpressionValue *v9; // rax
  _DWORD *v10; // r14
  __int64 v11; // rax
  CExpressionValue *v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // xmm1_8
  __int64 v15; // rax
  unsigned int *v16; // rbx
  CExpressionValue *v17; // rax
  _DWORD *v18; // r15
  __int64 v19; // rax
  CExpressionValue *v20; // rax
  float *v21; // r14
  __int64 v22; // rax
  CExpressionValue *v23; // rax
  __int128 v24; // xmm0
  __int64 v25; // xmm1_8
  unsigned int v27; // [rsp+28h] [rbp-49h]
  _BYTE v28[80]; // [rsp+38h] [rbp-39h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+88h] [rbp+17h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  if ( v2 >= a2 )
  {
    if ( a2 == 2 )
    {
      v7 = v2 - 2;
      v8 = (float *)&CExpressionValueStack::s_emptyValue;
      if ( (unsigned int)v7 < *((_DWORD *)this + 12) )
      {
        v10 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v7);
      }
      else
      {
        v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v28);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v28);
        v10 = &CExpressionValueStack::s_emptyValue;
      }
      v11 = (unsigned int)(*((_DWORD *)this + 4) - 1);
      if ( (unsigned int)v11 < *((_DWORD *)this + 12) )
      {
        v8 = (float *)(*((_QWORD *)this + 3) + 80 * v11);
      }
      else
      {
        v12 = CExpressionValue::CExpressionValue((CExpressionValue *)v28);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v12);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v28);
      }
      if ( v10[18] == 18 && *((_DWORD *)v8 + 18) == 18 )
      {
        v3 = 1;
        D2D1MakeSkewMatrix(
          *(float *)v10 * 57.295776,
          *v8 * 57.295776,
          (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps((__m128)0LL, (__m128)0LL),
          &matrix);
        v13 = *(_OWORD *)&matrix.m11;
        v10[18] = 104;
        v14 = *(_QWORD *)&matrix.m[2][0];
        *(_OWORD *)v10 = v13;
        *((_BYTE *)v10 + 76) = 1;
        *((_QWORD *)v10 + 2) = v14;
      }
    }
    else if ( a2 == 3 )
    {
      v15 = v2 - 3;
      v16 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
      if ( (unsigned int)v15 < *((_DWORD *)this + 12) )
      {
        v18 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v15);
      }
      else
      {
        v17 = CExpressionValue::CExpressionValue((CExpressionValue *)v28);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v17);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v28);
        v18 = &CExpressionValueStack::s_emptyValue;
      }
      v19 = (unsigned int)(*((_DWORD *)this + 4) - 2);
      if ( (unsigned int)v19 < *((_DWORD *)this + 12) )
      {
        v21 = (float *)(*((_QWORD *)this + 3) + 80 * v19);
      }
      else
      {
        v20 = CExpressionValue::CExpressionValue((CExpressionValue *)v28);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v20);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v28);
        v21 = (float *)&CExpressionValueStack::s_emptyValue;
      }
      v22 = (unsigned int)(*((_DWORD *)this + 4) - 1);
      if ( (unsigned int)v22 < *((_DWORD *)this + 12) )
      {
        v16 = (unsigned int *)(*((_QWORD *)this + 3) + 80 * v22);
      }
      else
      {
        v23 = CExpressionValue::CExpressionValue((CExpressionValue *)v28);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v23);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v28);
      }
      if ( v18[18] == 18 && *((_DWORD *)v21 + 18) == 18 && v16[18] == 35 )
      {
        D2D1MakeSkewMatrix(
          *(float *)v18 * 57.295776,
          *v21 * 57.295776,
          (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps((__m128)*v16, (__m128)v16[1]),
          &matrix);
        v24 = *(_OWORD *)&matrix.m11;
        v6 = 0;
        v18[18] = 104;
        v25 = *(_QWORD *)&matrix.m[2][0];
        *(_OWORD *)v18 = v24;
        *((_BYTE *)v18 + 76) = 1;
        *((_QWORD *)v18 + 2) = v25;
        goto LABEL_30;
      }
    }
    v6 = 0;
    if ( !v3 )
    {
      v27 = 6021;
      goto LABEL_3;
    }
LABEL_30:
    *((_DWORD *)this + 4) += 1 - a2;
    return v6;
  }
  v27 = 5959;
LABEL_3:
  v6 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v27,
    0LL);
  return v6;
}
