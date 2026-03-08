/*
 * XREFs of ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4OutputCoordinate@@PEA_NPEAM@Z @ 0x180224F4C
 * Callers:
 *     ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x18022DDB4 (-CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollStat.c)
 *     ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1802612EC (-CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?TryProcessInertiaModifier@CScrollKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@_KW4ModifierType@1@W4ScrollAxis@@PEAVCExpressionValue@@@Z @ 0x18026BE00 (-TryProcessInertiaModifier@CScrollKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@_KW4Modifie.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180224940 (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180224B14 (-IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Reset@CConditionalExpression@@QEAAXXZ @ 0x1802250C0 (-Reset@CConditionalExpression@@QEAAXXZ.c)
 */

__int64 __fastcall CConditionalExpression::ProcessConditionalExpression(
        CConditionalExpression *a1,
        struct CExpressionValueStack *a2,
        wchar_t *a3,
        int a4,
        bool *a5,
        float *a6)
{
  int IsAnyConditionSatisfied; // eax
  unsigned int v11; // ebx
  int Value; // eax
  unsigned int v14; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  CConditionalExpression::Reset(a1);
  IsAnyConditionSatisfied = CConditionalExpression::IsAnyConditionSatisfied(a1, a2, (__int64)a3, a5);
  v11 = IsAnyConditionSatisfied;
  if ( IsAnyConditionSatisfied < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26C,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\conditionalexpression.cpp",
      (const char *)(unsigned int)IsAnyConditionSatisfied);
    return v11;
  }
  if ( *a5 )
  {
    Value = CConditionalExpression::GetValue((MatrixSubchannelMaskInfo **)a1, a2, a3, a6);
    v14 = Value;
    if ( Value < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x275,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\conditionalexpression.cpp",
        (const char *)(unsigned int)Value);
      return v14;
    }
    if ( a4 == 1 )
      *a6 = *a6 * -1.0;
  }
  return 0LL;
}
