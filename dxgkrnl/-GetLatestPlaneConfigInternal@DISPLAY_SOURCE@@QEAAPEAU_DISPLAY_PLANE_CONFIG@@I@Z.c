/*
 * XREFs of ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C019C1C0
 * Callers:
 *     ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C01730CC (-SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D.c)
 *     ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z @ 0x1C017669C (-DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z.c)
 *     ?GetAllocationsForAllPlanes@ADAPTER_DISPLAY@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C019C040 (-GetAllocationsForAllPlanes@ADAPTER_DISPLAY@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?IsPlaneEnabled@ADAPTER_DISPLAY@@QEAAEII@Z @ 0x1C01DACD0 (-IsPlaneEnabled@ADAPTER_DISPLAY@@QEAAEII@Z.c)
 *     ?ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ @ 0x1C02B676C (-ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ.c)
 *     ?GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@1PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@@Z @ 0x1C02B847C (-GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DK.c)
 *     ?GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE@@QEAAIXZ @ 0x1C02B8A9C (-GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE@@QEAAIXZ.c)
 *     ?GetLatestPlaneAttributesUnsafe@DISPLAY_SOURCE@@QEAAXIPEAIPEAUtagRECT@@11PEAW4_D3DDDI_ROTATION@@PEAW4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@PEAW4D3DDDI_COLOR_SPACE_TYPE@@0@Z @ 0x1C02B8C58 (-GetLatestPlaneAttributesUnsafe@DISPLAY_SOURCE@@QEAAXIPEAIPEAUtagRECT@@11PEAW4_D3DDDI_ROTATION@@.c)
 *     ?GetPlaneAllocationUnsafe@DISPLAY_SOURCE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C02B8DCC (-GetPlaneAllocationUnsafe@DISPLAY_SOURCE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C02B8F54 (-InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z @ 0x1C02BA3C4 (-ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z.c)
 *     ?UpdateIndependentFlipStateUnsafe@DISPLAY_SOURCE@@QEAAXIE@Z @ 0x1C02BB578 (-UpdateIndependentFlipStateUnsafe@DISPLAY_SOURCE@@QEAAXIE@Z.c)
 *     ?Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z @ 0x1C02F3C44 (-Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

struct _DISPLAY_PLANE_CONFIG *__fastcall DISPLAY_SOURCE::GetLatestPlaneConfigInternal(
        DISPLAY_SOURCE *this,
        unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax

  if ( a2 >= *((_DWORD *)this + 940) )
    return 0LL;
  v3 = 168LL * a2;
  if ( *(_DWORD *)((char *)this + v3 + 1144) == -1 && *(_DWORD *)((char *)this + v3 + 1148) != -1 )
  {
    WdLogSingleEntry1(1LL, 9141LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
      9141LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = *(int *)((char *)this + v3 + 1144);
  if ( (_DWORD)v4 == -1 )
    return 0LL;
  else
    return (DISPLAY_SOURCE *)((char *)this + 80 * v4 + v3 + 1152);
}
