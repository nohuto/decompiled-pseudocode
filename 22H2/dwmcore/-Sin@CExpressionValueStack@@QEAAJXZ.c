/*
 * XREFs of ?Sin@CExpressionValueStack@@QEAAJXZ @ 0x18005D300
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A610 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A10F4 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC6A4 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBAA4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     sinf_0 @ 0x1800F3FCF (sinf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Sin(CExpressionValueStack *this)
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
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v4);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v9);
    }
    if ( *((_DWORD *)v5 + 18) == 18 )
    {
      v6 = *v5;
      *((_DWORD *)v5 + 18) = 18;
      *v5 = sinf_0(v6);
      *((_BYTE *)v5 + 76) = 1;
      return 0;
    }
    v8 = 4083;
  }
  else
  {
    v8 = 4057;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (unsigned int)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v8,
    0LL);
  return v2;
}
