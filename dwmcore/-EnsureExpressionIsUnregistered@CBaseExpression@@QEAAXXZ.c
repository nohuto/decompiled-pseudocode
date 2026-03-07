void __fastcall CBaseExpression::EnsureExpressionIsUnregistered(CBaseExpression *this)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  CExpressionManager *v4; // rsi
  char v5; // al
  __int64 v6; // rbp
  __int64 v7; // rdi

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_2831068478>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_2831068478>::GetImpl'::`2'::impl) )
  {
    v2 = *((_QWORD *)this + 39);
    v3 = *((_QWORD *)this + 38);
    v4 = *(CExpressionManager **)(*((_QWORD *)this + 2) + 424LL);
    while ( v3 != v2 )
    {
      CExpressionManager::UnregisterIndirectTarget(v4, this, *(_QWORD *)v3, *(unsigned int *)(v3 + 8));
      v3 += 16LL;
    }
    *((_QWORD *)this + 39) = *((_QWORD *)this + 38);
    if ( (*((_BYTE *)this + 232) & 8) == 0 )
      return;
    v5 = (*(__int64 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 248LL))(this);
  }
  else
  {
    if ( (*((_BYTE *)this + 232) & 8) == 0 )
      return;
    v6 = *((_QWORD *)this + 39);
    v7 = *((_QWORD *)this + 38);
    v4 = *(CExpressionManager **)(*((_QWORD *)this + 2) + 424LL);
    while ( v7 != v6 )
    {
      CExpressionManager::UnregisterIndirectTarget(v4, this, *(_QWORD *)v7, *(unsigned int *)(v7 + 8));
      v7 += 16LL;
    }
    *((_QWORD *)this + 39) = *((_QWORD *)this + 38);
    v5 = (*(__int64 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 248LL))(this);
  }
  if ( v5 )
    CExpressionManager::EnsureAutoCompleteOnOccludedAnimationRemoved(v4, this);
  CExpressionManager::UnregisterExpression(v4, this);
  *((_BYTE *)this + 232) &= ~8u;
}
