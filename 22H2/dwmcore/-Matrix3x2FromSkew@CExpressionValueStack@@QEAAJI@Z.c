/*
 * XREFs of ?Matrix3x2FromSkew@CExpressionValueStack@@QEAAJI@Z @ 0x1801FDB48
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A610 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A10F4 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC6A4 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBAA4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromSkew(CExpressionValueStack *this, unsigned int a2)
{
  char v3; // r13
  __int64 v4; // rcx
  unsigned int v6; // ebx
  unsigned int v7; // edx
  __int64 v8; // rax
  float *v9; // rbx
  CExpressionValue *v10; // rax
  _DWORD *v11; // r14
  CExpressionValue *v12; // rax
  float v13; // xmm1_4
  __m128 v14; // xmm4
  __m128 v15; // xmm3
  unsigned int v16; // edx
  __int64 v17; // rax
  unsigned int *v18; // rbx
  CExpressionValue *v19; // rax
  __int64 v20; // rax
  CExpressionValue *v21; // rax
  float *v22; // r15
  CExpressionValue *v23; // rax
  __int64 v24; // xmm1_8
  unsigned int v26; // [rsp+28h] [rbp-49h]
  _BYTE v27[80]; // [rsp+38h] [rbp-39h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+88h] [rbp+17h] BYREF

  v3 = 0;
  v4 = *((unsigned int *)this + 4);
  if ( (unsigned int)v4 < a2 )
  {
    v26 = 5959;
    goto LABEL_3;
  }
  if ( a2 == 2 )
  {
    v7 = *((_DWORD *)this + 12);
    v8 = (unsigned int)(v4 - 2);
    v9 = (float *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v8 < v7 )
    {
      v11 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v8);
    }
    else
    {
      v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v27);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v27);
      LODWORD(v4) = *((_DWORD *)this + 4);
      v11 = &CExpressionValueStack::s_emptyValue;
      v7 = *((_DWORD *)this + 12);
    }
    v4 = (unsigned int)(v4 - 1);
    if ( (unsigned int)v4 < v7 )
    {
      v9 = (float *)(*((_QWORD *)this + 3) + 80 * v4);
    }
    else
    {
      v12 = CExpressionValue::CExpressionValue((CExpressionValue *)v27);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v12);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v27);
    }
    if ( v11[18] != 18 || *((_DWORD *)v9 + 18) != 18 )
      goto LABEL_29;
    v13 = *v9;
    v14 = 0LL;
    v15 = 0LL;
  }
  else
  {
    if ( a2 != 3 )
      goto LABEL_29;
    v16 = *((_DWORD *)this + 12);
    v17 = (unsigned int)(v4 - 3);
    v18 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v17 < v16 )
    {
      v11 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v17);
    }
    else
    {
      v19 = CExpressionValue::CExpressionValue((CExpressionValue *)v27);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v19);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v27);
      LODWORD(v4) = *((_DWORD *)this + 4);
      v11 = &CExpressionValueStack::s_emptyValue;
      v16 = *((_DWORD *)this + 12);
    }
    v20 = (unsigned int)(v4 - 2);
    if ( (unsigned int)v20 < v16 )
    {
      v22 = (float *)(*((_QWORD *)this + 3) + 80 * v20);
    }
    else
    {
      v21 = CExpressionValue::CExpressionValue((CExpressionValue *)v27);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v21);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v27);
      LODWORD(v4) = *((_DWORD *)this + 4);
      v22 = (float *)&CExpressionValueStack::s_emptyValue;
      v16 = *((_DWORD *)this + 12);
    }
    v4 = (unsigned int)(v4 - 1);
    if ( (unsigned int)v4 < v16 )
    {
      v18 = (unsigned int *)(*((_QWORD *)this + 3) + 80 * v4);
    }
    else
    {
      v23 = CExpressionValue::CExpressionValue((CExpressionValue *)v27);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v23);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v27);
    }
    if ( v11[18] != 18 || *((_DWORD *)v22 + 18) != 18 || v18[18] != 35 )
      goto LABEL_29;
    v14 = (__m128)v18[1];
    v13 = *v22;
    v15 = (__m128)*v18;
  }
  v3 = 1;
  D2D1MakeSkewMatrix(
    *(float *)v11 * 57.295776,
    v13 * 57.295776,
    (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps(v15, v14),
    &matrix);
  v24 = *(_QWORD *)&matrix.m[2][0];
  *(_OWORD *)v11 = *(_OWORD *)&matrix.m11;
  *((_BYTE *)v11 + 76) = 1;
  *((_QWORD *)v11 + 2) = v24;
  v11[18] = 104;
LABEL_29:
  v6 = 0;
  if ( v3 )
  {
    *((_DWORD *)this + 4) += 1 - a2;
    return v6;
  }
  v26 = 6021;
LABEL_3:
  v6 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    v4,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v26,
    0LL);
  return v6;
}
