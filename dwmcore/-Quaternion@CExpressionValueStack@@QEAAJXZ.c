/*
 * XREFs of ?Quaternion@CExpressionValueStack@@QEAAJXZ @ 0x18025DAEC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016188 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1468 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180213E20 (--1CExpressionValue@@QEAA@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::Quaternion(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  __int64 v3; // rax
  _QWORD *v4; // rbp
  int *v5; // rdi
  CExpressionValue *v6; // rax
  _DWORD *v7; // rsi
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  int *v10; // r14
  __int64 v11; // rax
  CExpressionValue *v12; // rax
  int *v13; // r15
  __int64 v14; // rax
  CExpressionValue *v15; // rax
  unsigned int v16; // ebp
  int v17; // xmm0_4
  int v18; // xmm1_4
  int v19; // xmm2_4
  int v20; // eax
  unsigned int v22; // [rsp+20h] [rbp-78h]
  _BYTE v23[80]; // [rsp+30h] [rbp-68h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 < 4 )
  {
    v22 = 5465;
LABEL_21:
    v16 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v22,
      0LL);
    return v16;
  }
  v3 = v1 - 4;
  v4 = (_QWORD *)((char *)this + 24);
  v5 = (int *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v3 < *((_DWORD *)this + 12) )
  {
    v7 = (_DWORD *)(*v4 + 80 * v3);
  }
  else
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v23);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v23);
    v7 = &CExpressionValueStack::s_emptyValue;
  }
  v8 = (unsigned int)(*((_DWORD *)this + 4) - 3);
  if ( (unsigned int)v8 < *((_DWORD *)this + 12) )
  {
    v10 = (int *)(*v4 + 80 * v8);
  }
  else
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v23);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v23);
    v10 = (int *)&CExpressionValueStack::s_emptyValue;
  }
  v11 = (unsigned int)(*((_DWORD *)this + 4) - 2);
  if ( (unsigned int)v11 < *((_DWORD *)this + 12) )
  {
    v13 = (int *)(*v4 + 80 * v11);
  }
  else
  {
    v12 = CExpressionValue::CExpressionValue((CExpressionValue *)v23);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v12);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v23);
    v13 = (int *)&CExpressionValueStack::s_emptyValue;
  }
  v14 = (unsigned int)(*((_DWORD *)this + 4) - 1);
  if ( (unsigned int)v14 < *((_DWORD *)this + 12) )
  {
    v5 = (int *)(*v4 + 80 * v14);
  }
  else
  {
    v15 = CExpressionValue::CExpressionValue((CExpressionValue *)v23);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v15);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v23);
  }
  if ( v7[18] != 18 || v10[18] != 18 || v13[18] != 18 || (v16 = 0, v5[18] != 18) )
  {
    v22 = 5483;
    goto LABEL_21;
  }
  v17 = *v10;
  v18 = *v13;
  v19 = *v5;
  v20 = *v7;
  v7[18] = 71;
  *v7 = v20;
  v7[1] = v17;
  v7[2] = v18;
  v7[3] = v19;
  *((_BYTE *)v7 + 76) = 1;
  *((_DWORD *)this + 4) -= 3;
  return v16;
}
