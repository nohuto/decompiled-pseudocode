/*
 * XREFs of ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0166DF0
 * Callers:
 *     _lambda_940d064d943a20fd52938170853ed62c_::operator() @ 0x1C0167038 (_lambda_940d064d943a20fd52938170853ed62c_--operator().c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016A260 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C01732D0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     DxgkDisplayOnOff @ 0x1C01C33B0 (DxgkDisplayOnOff.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C01E07B0 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     DpiPowerArbiterThread @ 0x1C0210150 (DpiPowerArbiterThread.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C02B26A4 (-EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z.c)
 *     ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C02BB188 (-Stop@ADAPTER_DISPLAY@@QEAAXE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0166EB8 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0179B90 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C017E400 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(PERESOURCE **this, PERESOURCE **a2)
{
  struct ADAPTER_RENDER *v4; // rcx
  unsigned int i; // edi

  if ( a2 && !DXGADAPTER::IsCoreResourceExclusiveOwner(a2[2]) )
  {
    WdLogSingleEntry1(1LL, 3363LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"((!pRenderCore) || (pRenderCore->IsCoreResourceExclusiveOwner()))",
      3363LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 3364LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 3364LL, 0LL, 0LL, 0LL, 0LL);
  }
  WdLogSingleEntry1(4LL, this);
  v4 = (struct ADAPTER_RENDER *)this[2][366];
  if ( v4 && v4 == (struct ADAPTER_RENDER *)a2 )
    ADAPTER_DISPLAY::DisableAllPrimaries((ADAPTER_DISPLAY *)this, (struct ADAPTER_RENDER *)a2);
  for ( i = 0; i < *((_DWORD *)this + 24); ++i )
  {
    if ( this[16][500 * i + 91] )
    {
      ADAPTER_DISPLAY::RemoveVidPnOwnership((ADAPTER_DISPLAY *)this, i);
      ADAPTER_DISPLAY::UpdateGammaRamp((ADAPTER_DISPLAY *)this, i);
    }
  }
}
