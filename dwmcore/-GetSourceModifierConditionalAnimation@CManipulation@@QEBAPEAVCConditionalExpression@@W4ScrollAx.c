/*
 * XREFs of ?GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x180271214
 * Callers:
 *     ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1802612EC (-CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z @ 0x180271288 (-InsertDependenciesForAxis@InteractionSourceManager@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulation::GetSourceModifierConditionalAnimation(_QWORD *a1, int a2)
{
  int v2; // edx

  if ( !a2 )
    return a1[63];
  v2 = a2 - 1;
  if ( !v2 )
    return a1[64];
  if ( v2 == 1 )
    return a1[65];
  return 0LL;
}
