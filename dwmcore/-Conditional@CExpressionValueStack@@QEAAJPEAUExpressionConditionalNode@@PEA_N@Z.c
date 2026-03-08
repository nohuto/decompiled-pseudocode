/*
 * XREFs of ?Conditional@CExpressionValueStack@@QEAAJPEAUExpressionConditionalNode@@PEA_N@Z @ 0x1800C095C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016188 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1468 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180213E20 (--1CExpressionValue@@QEAA@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::Conditional(
        CExpressionValueStack *this,
        struct ExpressionConditionalNode *a2,
        bool *a3)
{
  int v3; // eax
  unsigned int v6; // esi
  __int64 v7; // rax
  CExpressionValue *v8; // rax
  _DWORD *v9; // rbx
  char v10; // cl
  unsigned int v12; // [rsp+20h] [rbp-68h]
  _BYTE v13[80]; // [rsp+30h] [rbp-58h] BYREF

  v3 = *((_DWORD *)this + 4);
  if ( v3 )
  {
    v7 = (unsigned int)(v3 - 1);
    if ( (unsigned int)v7 < *((_DWORD *)this + 12) )
    {
      v9 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v7);
    }
    else
    {
      v8 = CExpressionValue::CExpressionValue((CExpressionValue *)v13);
      v9 = &CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v8);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v13);
    }
    v6 = 0;
    if ( v9[18] == 17 )
    {
      v10 = *(_BYTE *)v9;
      --*((_DWORD *)this + 4);
      *a3 = v10;
      return v6;
    }
    v12 = 8013;
  }
  else
  {
    v12 = 7994;
  }
  v6 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v12,
    0LL);
  return v6;
}
