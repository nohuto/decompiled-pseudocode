void __fastcall CExpressionManager::FlushPendingTriggeredAnimations(CExpressionManager *this, char a2)
{
  __int64 v2; // rsi
  char *i; // rbx

  v2 = 0LL;
  for ( i = (char *)this + 416; (unsigned int)v2 < *((_DWORD *)this + 110); v2 = (unsigned int)(v2 + 1) )
  {
    CBaseExpression::TryRegisterWithExpressionManager(*(CBaseExpression **)(*(_QWORD *)i + 8 * v2));
    if ( a2 )
      CBaseExpression::ForceDependentAnimationsDirtied(*(CBaseExpression **)(*(_QWORD *)i + 8 * v2));
  }
  *((_DWORD *)i + 6) = 0;
  DynArrayImpl<1>::ShrinkToSize((__int64)i, 8u);
}
