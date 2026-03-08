/*
 * XREFs of ?Matrix3x2FromRotation@CExpressionValueStack@@QEAAJI@Z @ 0x18025AF4C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016188 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1468 (--0CExpressionValue@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180213E20 (--1CExpressionValue@@QEAA@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromRotation(CExpressionValueStack *this, unsigned int a2)
{
  unsigned int v2; // eax
  char v3; // r12
  unsigned int v6; // ebx
  __int64 v7; // rax
  CExpressionValue *v8; // rax
  _DWORD *v9; // rbx
  __int128 v10; // xmm0
  __int64 v11; // xmm1_8
  __int64 v12; // rax
  unsigned int *v13; // rbx
  CExpressionValue *v14; // rax
  _DWORD *v15; // r14
  __int64 v16; // rax
  CExpressionValue *v17; // rax
  __int128 v18; // xmm0
  __int64 v19; // xmm1_8
  unsigned int v21; // [rsp+20h] [rbp-49h]
  _BYTE v22[80]; // [rsp+30h] [rbp-39h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+80h] [rbp+17h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  if ( v2 >= a2 )
  {
    if ( a2 == 1 )
    {
      v7 = v2 - 1;
      if ( (unsigned int)v7 < *((_DWORD *)this + 12) )
      {
        v9 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v7);
      }
      else
      {
        v8 = CExpressionValue::CExpressionValue((CExpressionValue *)v22);
        v9 = &CExpressionValueStack::s_emptyValue;
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v8);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v22);
      }
      if ( v9[18] == 18 )
      {
        v3 = 1;
        D2D1MakeRotateMatrix(
          *(float *)v9 * 57.295776,
          (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps((__m128)0LL, (__m128)0LL),
          &matrix);
        v10 = *(_OWORD *)&matrix.m11;
        v9[18] = 104;
        v11 = *(_QWORD *)&matrix.m[2][0];
        *(_OWORD *)v9 = v10;
        *((_BYTE *)v9 + 76) = 1;
        *((_QWORD *)v9 + 2) = v11;
      }
    }
    else if ( a2 == 2 )
    {
      v12 = v2 - 2;
      v13 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
      if ( (unsigned int)v12 < *((_DWORD *)this + 12) )
      {
        v15 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v12);
      }
      else
      {
        v14 = CExpressionValue::CExpressionValue((CExpressionValue *)v22);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v14);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v22);
        v15 = &CExpressionValueStack::s_emptyValue;
      }
      v16 = (unsigned int)(*((_DWORD *)this + 4) - 1);
      if ( (unsigned int)v16 < *((_DWORD *)this + 12) )
      {
        v13 = (unsigned int *)(*((_QWORD *)this + 3) + 80 * v16);
      }
      else
      {
        v17 = CExpressionValue::CExpressionValue((CExpressionValue *)v22);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v17);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v22);
      }
      if ( v15[18] == 18 && v13[18] == 35 )
      {
        D2D1MakeRotateMatrix(
          *(float *)v15 * 57.295776,
          (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps((__m128)*v13, (__m128)v13[1]),
          &matrix);
        v18 = *(_OWORD *)&matrix.m11;
        v6 = 0;
        v15[18] = 104;
        v19 = *(_QWORD *)&matrix.m[2][0];
        *(_OWORD *)v15 = v18;
        *((_BYTE *)v15 + 76) = 1;
        *((_QWORD *)v15 + 2) = v19;
        goto LABEL_22;
      }
    }
    v6 = 0;
    if ( !v3 )
    {
      v21 = 6097;
      goto LABEL_3;
    }
LABEL_22:
    *((_DWORD *)this + 4) += 1 - a2;
    return v6;
  }
  v21 = 6055;
LABEL_3:
  v6 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v21,
    0LL);
  return v6;
}
