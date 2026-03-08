/*
 * XREFs of ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAXAEBUExpressionWalkContext@@PEAV?$CWeakReference@VCResource@@@@I@Z @ 0x1802139BC
 * Callers:
 *     _lambda_532e28217b0c2aa3dc63221d13b9d2f4_::operator() @ 0x18022D4D4 (_lambda_532e28217b0c2aa3dc63221d13b9d2f4_--operator().c)
 *     ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z @ 0x180271288 (-InsertDependenciesForAxis@InteractionSourceManager@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxi.c)
 * Callees:
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x1800DA970 (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV?$CWeakReference@VCResource@@@@I@Z @ 0x180213A08 (-LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV-$CWeakReferenc.c)
 */

void __fastcall CExpressionManager::InsertExpressionsInOrderForTarget(
        __int64 a1,
        const struct ExpressionWalkContext *a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 i; // rbx

  for ( i = CExpressionManager::LookupExpressionsForTarget(a1, a3, a4); i; i = *(_QWORD *)(i + 16) )
    CBaseExpression::InsertInOrder(*(CBaseExpression **)(i + 8), a2);
}
