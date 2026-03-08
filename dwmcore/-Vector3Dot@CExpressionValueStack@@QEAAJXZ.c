/*
 * XREFs of ?Vector3Dot@CExpressionValueStack@@QEAAJXZ @ 0x18025F1D0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BD330 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180016188 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800C1468 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180213E20 (--1CExpressionValue@@QEAA@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::Vector3Dot(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v3; // ebx
  __int64 v4; // rax
  float *v5; // rbx
  CExpressionValue *v6; // rax
  float *v7; // rsi
  __int64 v8; // rax
  CExpressionValue *v9; // rax
  float v10; // xmm2_4
  float v11; // eax
  float v12; // xmm0_4
  unsigned int v14; // [rsp+28h] [rbp-29h]
  float v15; // [rsp+50h] [rbp-1h]
  _BYTE v16[80]; // [rsp+58h] [rbp+7h] BYREF

  v1 = *((_DWORD *)this + 4);
  if ( v1 >= 2 )
  {
    v4 = v1 - 2;
    v5 = (float *)&CExpressionValueStack::s_emptyValue;
    if ( (unsigned int)v4 < *((_DWORD *)this + 12) )
    {
      v7 = (float *)(*((_QWORD *)this + 3) + 80 * v4);
    }
    else
    {
      v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v16);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v16);
      v7 = (float *)&CExpressionValueStack::s_emptyValue;
    }
    v8 = (unsigned int)(*((_DWORD *)this + 4) - 1);
    if ( (unsigned int)v8 < *((_DWORD *)this + 12) )
    {
      v5 = (float *)(*((_QWORD *)this + 3) + 80 * v8);
    }
    else
    {
      v9 = CExpressionValue::CExpressionValue((CExpressionValue *)v16);
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v9);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v16);
    }
    if ( *((_DWORD *)v7 + 18) == 52 )
    {
      if ( *((_DWORD *)v5 + 18) == 52 )
      {
        v10 = COERCE_FLOAT(HIDWORD(*(_QWORD *)v7)) * COERCE_FLOAT(HIDWORD(*(_QWORD *)v5));
        v15 = v7[2];
        v11 = v5[2];
        v12 = COERCE_FLOAT(*(_QWORD *)v5) * COERCE_FLOAT(*(_QWORD *)v7);
        *((_DWORD *)v7 + 18) = 18;
        *((_BYTE *)v7 + 76) = 1;
        *v7 = (float)(v10 + v12) + (float)(v11 * v15);
        --*((_DWORD *)this + 4);
        return 0;
      }
      v14 = 7500;
    }
    else
    {
      v14 = 7499;
    }
  }
  else
  {
    v14 = 7493;
  }
  v3 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    (__int64)this,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v14,
    0LL);
  return v3;
}
