/*
 * XREFs of ?And@CExpressionValueStack@@QEAAJXZ @ 0x1801FB49C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005A610 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x1800A10F4 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x1800AC6A4 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBAA4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::And(CExpressionValueStack *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ebp
  unsigned int v4; // edx
  __int64 v5; // rax
  _DWORD *v6; // rbx
  CExpressionValue *v7; // rax
  unsigned int *v8; // rsi
  __int64 v9; // rcx
  CExpressionValue *v10; // rax
  bool v11; // al
  unsigned int v13; // [rsp+20h] [rbp-68h]
  _BYTE v14[80]; // [rsp+30h] [rbp-58h] BYREF

  v2 = *((unsigned int *)this + 4);
  if ( (unsigned int)v2 < 2 )
  {
    v13 = 2075;
LABEL_3:
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      v2,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v13,
      0LL);
    return v3;
  }
  v4 = *((_DWORD *)this + 12);
  v5 = (unsigned int)(v2 - 2);
  v6 = &CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v5 < v4 )
  {
    v8 = (unsigned int *)(*((_QWORD *)this + 3) + 80 * v5);
  }
  else
  {
    v7 = CExpressionValue::CExpressionValue((CExpressionValue *)v14);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v7);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v14);
    LODWORD(v2) = *((_DWORD *)this + 4);
    v8 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
    v4 = *((_DWORD *)this + 12);
  }
  v9 = (unsigned int)(v2 - 1);
  if ( (unsigned int)v9 < v4 )
  {
    v6 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v9);
  }
  else
  {
    v10 = CExpressionValue::CExpressionValue((CExpressionValue *)v14);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v10);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v14);
  }
  v2 = v8[18];
  v11 = 0;
  v3 = 0;
  if ( (_DWORD)v2 != v6[18] )
  {
    v13 = 2103;
    goto LABEL_3;
  }
  if ( (_DWORD)v2 != 17 )
  {
    v13 = 2122;
    goto LABEL_3;
  }
  if ( *(_BYTE *)v8 )
    v11 = *(_BYTE *)v6 != 0;
  v8[18] = 17;
  *(_BYTE *)v8 = v11;
  *((_BYTE *)v8 + 76) = 1;
  --*((_DWORD *)this + 4);
  return v3;
}
