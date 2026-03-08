/*
 * XREFs of ?Create@?$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x18009990C
 * Callers:
 *     ?ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETSOURCES@@PEBXI@Z @ 0x1800490B8 (-ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETSOURCES@@PE.c)
 *     ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAXAEBUExpressionWalkContext@@@Z @ 0x1800976E0 (-InsertDependenciesInOrder@CKeyframeAnimation@@UEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18009B084 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?UpdateKeyframeAnimations@CAnimationController@@AEAAXXZ @ 0x1800D5A94 (-UpdateKeyframeAnimations@CAnimationController@@AEAAXXZ.c)
 *     ?RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x1801E03AC (-RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 *     ?UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x1801E082C (-UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 *     ?GetWeakRefToSelf@CInteractionTracker@@AEAAPEAV?$CWeakReference@VCResource@@@@XZ @ 0x18022F7C4 (-GetWeakRefToSelf@CInteractionTracker@@AEAAPEAV-$CWeakReference@VCResource@@@@XZ.c)
 *     ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z @ 0x180271288 (-InsertDependenciesForAxis@InteractionSourceManager@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxi.c)
 * Callees:
 *     ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x18009995C (-Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWeakReference<CResource>::Create(struct CResource *a1, struct CWeakResourceReference **a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  struct CWeakResourceReference *v6; // rcx
  struct CWeakResourceReference *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  v3 = CWeakResourceReference::Get(a1, &v8);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x94u, 0LL);
    v6 = v8;
  }
  else
  {
    v6 = 0LL;
    *a2 = v8;
  }
  if ( v6 )
    (*(void (__fastcall **)(struct CWeakResourceReference *))(*(_QWORD *)v6 + 8LL))(v6);
  return v5;
}
