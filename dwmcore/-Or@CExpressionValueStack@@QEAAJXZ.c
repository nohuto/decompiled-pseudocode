/*
 * XREFs of ?Or@CExpressionValueStack@@QEAAJXZ @ 0x18025D560
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016188 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1468 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180213E20 (--1CExpressionValue@@QEAA@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::Or(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  CExpressionValueStack *v2; // rsi
  unsigned int v3; // ebp
  __int64 v4; // rax
  _DWORD *v5; // rdi
  CExpressionValue *v6; // rax
  unsigned int *v7; // rbx
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  char v10; // al
  unsigned int v12; // [rsp+20h] [rbp-68h]
  _BYTE v13[80]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = this;
  if ( v1 < 2 )
  {
    v12 = 2155;
LABEL_3:
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v12,
      0LL);
    return v3;
  }
  v4 = v1 - 2;
  v5 = &CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v4 < *((_DWORD *)this + 12) )
  {
    v7 = (unsigned int *)(*((_QWORD *)this + 3) + 80 * v4);
  }
  else
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v13);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v13);
    v7 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
  }
  v8 = (unsigned int)(*((_DWORD *)v2 + 4) - 1);
  if ( (unsigned int)v8 < *((_DWORD *)v2 + 12) )
  {
    v5 = (_DWORD *)(*((_QWORD *)v2 + 3) + 80 * v8);
  }
  else
  {
    v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v13);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v13);
  }
  this = (CExpressionValueStack *)v7[18];
  v10 = 0;
  v3 = 0;
  if ( (_DWORD)this != v5[18] )
  {
    v12 = 2183;
    goto LABEL_3;
  }
  if ( (_DWORD)this != 17 )
  {
    v12 = 2202;
    goto LABEL_3;
  }
  if ( *(_BYTE *)v7 || *(_BYTE *)v5 )
    v10 = 1;
  v7[18] = 17;
  *(_BYTE *)v7 = v10;
  *((_BYTE *)v7 + 76) = 1;
  --*((_DWORD *)v2 + 4);
  return v3;
}
