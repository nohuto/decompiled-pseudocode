/*
 * XREFs of ?Round@CExpressionValueStack@@QEAAJXZ @ 0x18025E264
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016188 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1468 (--0CExpressionValue@@QEAA@XZ.c)
 *     ceilf_0 @ 0x1801176EC (ceilf_0.c)
 *     floorf_0 @ 0x180117728 (floorf_0.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180213E20 (--1CExpressionValue@@QEAA@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::Round(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rax
  CExpressionValue *v4; // rax
  _DWORD *v5; // rbx
  float v6; // xmm6_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  unsigned int v10; // [rsp+20h] [rbp-78h]
  _BYTE v11[96]; // [rsp+30h] [rbp-68h] BYREF
  float Y; // [rsp+A0h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( !v1 )
  {
    v10 = 4594;
LABEL_3:
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      (__int64)this,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v10,
      0LL);
    return v2;
  }
  v3 = (unsigned int)(v1 - 1);
  if ( (unsigned int)v3 < *((_DWORD *)this + 12) )
  {
    v5 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v3);
  }
  else
  {
    v4 = CExpressionValue::CExpressionValue((CExpressionValue *)v11);
    v5 = &CExpressionValueStack::s_emptyValue;
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v4);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v11);
  }
  if ( v5[18] != 18 )
  {
    v10 = 4639;
    goto LABEL_3;
  }
  v6 = *(float *)v5;
  v7 = modff(*(float *)v5, &Y);
  if ( ((int)COERCE_FLOAT(LODWORD(Y) & _xmm) & 1) != 0 || COERCE_FLOAT(LODWORD(v7) & _xmm) != 0.5 )
  {
    if ( v6 < 0.0 )
      v8 = ceilf_0(v6 - 0.5);
    else
      v8 = floorf_0(v6 + 0.5);
  }
  else if ( v6 < 0.0 )
  {
    v8 = ceilf_0(v6 - 0.5) + 1.0;
  }
  else
  {
    v8 = floorf_0(v6 + 0.5) - 1.0;
  }
  v5[18] = 18;
  *(float *)v5 = v8;
  *((_BYTE *)v5 + 76) = 1;
  return 0;
}
