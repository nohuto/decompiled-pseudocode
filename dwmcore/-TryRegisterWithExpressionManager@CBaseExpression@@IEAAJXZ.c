/*
 * XREFs of ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18009B288
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x180051314 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180097F68 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18009B084 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x1800E0B74 (-ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO.c)
 *     ?FlushPendingTriggeredAnimations@CExpressionManager@@AEAAX_N@Z @ 0x1802138FC (-FlushPendingTriggeredAnimations@CExpressionManager@@AEAAX_N@Z.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x180236828 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 * Callees:
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x180099600 (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 *     ??$emplace@AEAPEAVCBaseExpression@@@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@@std@@_N@1@AEAPEAVCBaseExpression@@@Z @ 0x1800BC1A8 (--$emplace@AEAPEAVCBaseExpression@@@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compa.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseExpression::TryRegisterWithExpressionManager(CBaseExpression *this)
{
  unsigned int v2; // edi
  CExpressionManager *v4; // rsi
  int v5; // eax
  unsigned int v6; // ecx
  _BYTE v7[24]; // [rsp+30h] [rbp-18h] BYREF
  CBaseExpression *v8; // [rsp+50h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 232) & 8) == 0
    && (*(unsigned __int8 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 264LL))(this) )
  {
    v4 = *(CExpressionManager **)(*((_QWORD *)this + 2) + 424LL);
    v5 = CExpressionManager::RegisterExpression(v4, this);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xF2u, 0LL);
      return v2;
    }
    *((_BYTE *)this + 232) |= 8u;
    if ( (*(unsigned __int8 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 304LL))(this) )
      *((_BYTE *)v4 + 448) |= 4u;
    if ( (*(unsigned __int8 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 248LL))(this) )
    {
      v8 = this;
      std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::emplace<CBaseExpression * &>(
        (char *)v4 + 528,
        v7,
        &v8);
    }
  }
  return 0;
}
