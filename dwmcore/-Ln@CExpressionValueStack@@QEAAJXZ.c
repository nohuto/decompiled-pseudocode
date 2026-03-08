/*
 * XREFs of ?Ln@CExpressionValueStack@@QEAAJXZ @ 0x18025AD64
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016188 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1468 (--0CExpressionValue@@QEAA@XZ.c)
 *     logf_0 @ 0x180117764 (logf_0.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180213E20 (--1CExpressionValue@@QEAA@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::Ln(CExpressionValueStack *this)
{
  int v1; // eax
  __int64 v2; // rax
  CExpressionValue *v3; // rax
  _DWORD *v4; // rbx
  float v5; // xmm6_4
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+20h] [rbp-78h]
  _BYTE v9[80]; // [rsp+30h] [rbp-68h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( !v1 )
  {
    v8 = 4949;
LABEL_11:
    v6 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v8,
      0LL);
    return v6;
  }
  v2 = (unsigned int)(v1 - 1);
  if ( (unsigned int)v2 < *((_DWORD *)this + 12) )
  {
    v4 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v2);
  }
  else
  {
    v3 = CExpressionValue::CExpressionValue((CExpressionValue *)v9);
    v4 = &CExpressionValueStack::s_emptyValue;
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v3);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v9);
  }
  if ( v4[18] != 18 )
  {
    v8 = 4990;
    goto LABEL_11;
  }
  v5 = logf_0(*(float *)v4);
  if ( _isnan(v5) )
  {
    v8 = 4975;
    goto LABEL_11;
  }
  *(float *)v4 = v5;
  v4[18] = 18;
  *((_BYTE *)v4 + 76) = 1;
  return 0;
}
