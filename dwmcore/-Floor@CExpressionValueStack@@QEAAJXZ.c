/*
 * XREFs of ?Floor@CExpressionValueStack@@QEAAJXZ @ 0x180259F9C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016188 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1468 (--0CExpressionValue@@QEAA@XZ.c)
 *     floorf_0 @ 0x180117728 (floorf_0.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180213E20 (--1CExpressionValue@@QEAA@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::Floor(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rax
  CExpressionValue *v4; // rax
  float *v5; // rbx
  float v6; // xmm0_4
  unsigned int v8; // [rsp+20h] [rbp-68h]
  _BYTE v9[88]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
  {
    v3 = (unsigned int)(v1 - 1);
    if ( (unsigned int)v3 < *((_DWORD *)this + 12) )
    {
      v5 = (float *)(*((_QWORD *)this + 3) + 80 * v3);
    }
    else
    {
      v4 = CExpressionValue::CExpressionValue((CExpressionValue *)v9);
      v5 = (float *)&CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v4);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v9);
    }
    if ( *((_DWORD *)v5 + 18) == 18 )
    {
      v6 = *v5;
      *((_DWORD *)v5 + 18) = 18;
      *v5 = floorf_0(v6);
      *((_BYTE *)v5 + 76) = 1;
      return 0;
    }
    v8 = 4560;
  }
  else
  {
    v8 = 4532;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v8,
    0LL);
  return v2;
}
