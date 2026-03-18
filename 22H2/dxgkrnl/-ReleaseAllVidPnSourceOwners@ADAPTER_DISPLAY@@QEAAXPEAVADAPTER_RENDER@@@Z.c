/*
 * XREFs of ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0195BF4
 * Callers:
 *     DxgkDisplayOnOff @ 0x1C0186080 (DxgkDisplayOnOff.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C0187F00 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0193D3C (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     _lambda_940d064d943a20fd52938170853ed62c_::operator() @ 0x1C01DAAF8 (_lambda_940d064d943a20fd52938170853ed62c_--operator().c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C01EF0D0 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     DpiPowerArbiterThread @ 0x1C021E730 (DpiPowerArbiterThread.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C02B7564 (-EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z.c)
 *     ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C02C00A8 (-Stop@ADAPTER_DISPLAY@@QEAAXE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005BA8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0173924 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C017664C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01E944C (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(PERESOURCE **this, PERESOURCE **a2)
{
  struct ADAPTER_RENDER *v4; // rcx
  unsigned int i; // edi

  if ( a2 && !DXGADAPTER::IsCoreResourceExclusiveOwner(a2[2]) )
  {
    WdLogSingleEntry1(1LL, 3364LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"((!pRenderCore) || (pRenderCore->IsCoreResourceExclusiveOwner()))",
      3364LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 3365LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 3365LL, 0LL, 0LL, 0LL, 0LL);
  }
  WdLogSingleEntry1(4LL, this);
  v4 = (struct ADAPTER_RENDER *)this[2][366];
  if ( v4 && v4 == (struct ADAPTER_RENDER *)a2 )
    ADAPTER_DISPLAY::DisableAllPrimaries(this, a2);
  for ( i = 0; i < *((_DWORD *)this + 24); ++i )
  {
    if ( this[16][500 * i + 91] )
    {
      ADAPTER_DISPLAY::RemoveVidPnOwnership((ADAPTER_DISPLAY *)this, i);
      ADAPTER_DISPLAY::UpdateGammaRamp((DXGADAPTER **)this, i);
    }
  }
}
