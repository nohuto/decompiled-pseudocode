/*
 * XREFs of ?Vector3@CExpressionValueStack@@QEAAJXZ @ 0x1800CC744
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A610 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A10F4 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC6A4 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBAA4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector3(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  __int64 v4; // rax
  int *v5; // rbx
  CExpressionValue *v6; // rax
  _DWORD *v7; // rsi
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  int *v10; // r14
  CExpressionValue *v11; // rax
  unsigned int v12; // ebp
  int v13; // xmm0_4
  int v14; // xmm1_4
  unsigned int v16; // [rsp+20h] [rbp-68h]
  _BYTE v17[80]; // [rsp+30h] [rbp-58h] BYREF

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 < 3 )
  {
    v16 = 5180;
LABEL_17:
    v12 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      v2,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v16,
      0LL);
    return v12;
  }
  v3 = *((_DWORD *)this + 12);
  v4 = (unsigned int)(v2 - 3);
  v5 = (int *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v4 < v3 )
  {
    v7 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v4);
  }
  else
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v17);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v17);
    LODWORD(v2) = *((_DWORD *)this + 4);
    v7 = &CExpressionValueStack::s_emptyValue;
    v3 = *((_DWORD *)this + 12);
  }
  v8 = (unsigned int)(v2 - 2);
  if ( (unsigned int)v8 < v3 )
  {
    v10 = (int *)(*((_QWORD *)this + 3) + 80 * v8);
  }
  else
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v17);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v17);
    LODWORD(v2) = *((_DWORD *)this + 4);
    v10 = (int *)&CExpressionValueStack::s_emptyValue;
    v3 = *((_DWORD *)this + 12);
  }
  v2 = (unsigned int)(v2 - 1);
  if ( (unsigned int)v2 < v3 )
  {
    v5 = (int *)(*((_QWORD *)this + 3) + 80 * v2);
  }
  else
  {
    v11 = CExpressionValue::CExpressionValue((CExpressionValue *)v17);
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v11);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v17);
  }
  if ( v7[18] != 18 || v10[18] != 18 || (v12 = 0, v5[18] != 18) )
  {
    v16 = 5196;
    goto LABEL_17;
  }
  v13 = *v10;
  v14 = *v5;
  v7[18] = 52;
  v7[1] = v13;
  v7[2] = v14;
  *((_BYTE *)v7 + 76) = 1;
  *((_DWORD *)this + 4) -= 2;
  return v12;
}
