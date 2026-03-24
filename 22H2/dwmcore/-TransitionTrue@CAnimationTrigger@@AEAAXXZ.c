/*
 * XREFs of ?TransitionTrue@CAnimationTrigger@@AEAAXXZ @ 0x1801B6784
 * Callers:
 *     ?SetProperty@CAnimationTrigger@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801B6710 (-SetProperty@CAnimationTrigger@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x180064DF8 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 */

void __fastcall CAnimationTrigger::TransitionTrue(CAnimationTrigger *this)
{
  CBaseExpression **v1; // rdi
  __int64 v2; // rbx
  unsigned __int64 v3; // rsi

  v1 = (CBaseExpression **)*((_QWORD *)this + 10);
  v2 = 0LL;
  v3 = (unsigned __int64)(*((_QWORD *)this + 11) - (_QWORD)v1 + 7LL) >> 3;
  if ( (unsigned __int64)v1 > *((_QWORD *)this + 11) )
    v3 = 0LL;
  if ( v3 )
  {
    do
    {
      CBaseExpression::TryRegisterWithExpressionManager(*v1);
      ++v2;
      ++v1;
    }
    while ( v2 != v3 );
  }
}
