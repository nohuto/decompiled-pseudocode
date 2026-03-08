/*
 * XREFs of ?InsertDependenciesForProperty@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4Enum@InteractionTrackerProperty@@@Z @ 0x18022FA20
 * Callers:
 *     ?UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z @ 0x180053950 (-UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z.c)
 *     ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAXAEBUExpressionWalkContext@@@Z @ 0x1800976E0 (-InsertDependenciesInOrder@CKeyframeAnimation@@UEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x1800DA970 (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?InsertDependenciesForAxis@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z @ 0x18022F92C (-InsertDependenciesForAxis@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _lambda_532e28217b0c2aa3dc63221d13b9d2f4_::operator() @ 0x18022D4D4 (_lambda_532e28217b0c2aa3dc63221d13b9d2f4_--operator().c)
 */

void __fastcall CInteractionTracker::InsertDependenciesForProperty(
        const struct ExpressionWalkContext *a1,
        const struct ExpressionWalkContext *a2,
        int a3)
{
  int v3; // r8d
  _QWORD v4[2]; // [rsp+20h] [rbp-40h] BYREF
  const struct ExpressionWalkContext *v5[2]; // [rsp+30h] [rbp-30h] BYREF
  int v6; // [rsp+40h] [rbp-20h] BYREF
  int v7; // [rsp+44h] [rbp-1Ch]
  int v8; // [rsp+48h] [rbp-18h]
  int v9; // [rsp+4Ch] [rbp-14h]

  v5[0] = a1;
  v5[1] = a2;
  v3 = a3 - 1;
  if ( v3 )
  {
    if ( v3 != 1 )
      return;
    v6 = 29;
    v7 = 30;
    v8 = 64;
    v4[0] = 3LL;
  }
  else
  {
    v6 = 2;
    v7 = 23;
    v8 = 26;
    v9 = 61;
    v4[0] = 4LL;
  }
  v4[1] = &v6;
  lambda_532e28217b0c2aa3dc63221d13b9d2f4_::operator()(v5, v4);
}
