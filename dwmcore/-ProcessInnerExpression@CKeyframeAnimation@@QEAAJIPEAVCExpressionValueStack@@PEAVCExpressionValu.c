/*
 * XREFs of ?ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x180055954
 * Callers:
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x180057560 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053D90 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180057DA8 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessInnerExpression(
        CKeyframeAnimation *this,
        unsigned int a2,
        struct CExpressionValueStack *a3,
        struct CExpressionValue *a4)
{
  __int64 v5; // rsi
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  bool v10; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 >= *((_DWORD *)this + 106) )
  {
    v8 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147467259, 0x6C6u, 0LL);
  }
  else
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 50) + 8LL * a2);
    v6 = CBaseExpression::CalculateValue((CBaseExpression *)v5, a3, *((_QWORD *)this + 21), &v10);
    v8 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x6CDu, 0LL);
    }
    else
    {
      CExpressionValue::CopyFrom(a4, (const struct CExpressionValue *)(v5 + 72));
      return 0;
    }
  }
  return v8;
}
