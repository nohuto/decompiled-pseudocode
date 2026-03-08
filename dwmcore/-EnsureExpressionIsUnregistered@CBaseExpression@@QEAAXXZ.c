/*
 * XREFs of ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18009AF40
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x180051314 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053D90 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ??1CBaseExpression@@MEAA@XZ @ 0x180099D04 (--1CBaseExpression@@MEAA@XZ.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18009B084 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800BCA20 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ?ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800F31B0 (-ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_.c)
 *     ?Stop@CScrollAnimation@@QEAAJXZ @ 0x180261F34 (-Stop@CScrollAnimation@@QEAAJXZ.c)
 * Callees:
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1800995D8 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1800BC29C (-EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2831068478@@@details@wil@@QEAA_NXZ @ 0x180111B70 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2831068478@@@details@wil@@QEAA_NX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UnregisterIndirectTarget@CExpressionManager@@QEAAXPEAVCBaseExpression@@PEAV?$CWeakReference@VCResource@@@@IPEAVSubchannelMaskInfo@@@Z @ 0x180213C5C (-UnregisterIndirectTarget@CExpressionManager@@QEAAXPEAVCBaseExpression@@PEAV-$CWeakReference@VCR.c)
 */

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
