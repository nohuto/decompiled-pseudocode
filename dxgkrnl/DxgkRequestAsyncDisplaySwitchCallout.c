/*
 * XREFs of DxgkRequestAsyncDisplaySwitchCallout @ 0x1C0311340
 * Callers:
 *     DxgkSessionConnected @ 0x1C01C5E00 (DxgkSessionConnected.c)
 *     DxgkSessionReconnected @ 0x1C01E5250 (DxgkSessionReconnected.c)
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z @ 0x1C02BBD60 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z.c)
 *     ?HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ @ 0x1C030E7EC (-HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0310A38 (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C03969C0 (DpiFdoExcludeAdapterAccess.c)
 *     DpiIndirectCbForceDisplaySwitch @ 0x1C039FF80 (DpiIndirectCbForceDisplaySwitch.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1C0216854 (-SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z.c)
 *     ??0DISPLAY_CALLOUT_ENTRY@@QEAA@PEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C030CD98 (--0DISPLAY_CALLOUT_ENTRY@@QEAA@PEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 */

__int64 __fastcall DxgkRequestAsyncDisplaySwitchCallout(
        struct _DXGK_WIN32K_PARAM_DATA *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3)
{
  DISPLAY_CALLOUT_ENTRY *v6; // rax
  struct DISPLAY_CALLOUT_ENTRY *v7; // rbx
  struct DXGGLOBAL *Global; // rax

  v6 = (DISPLAY_CALLOUT_ENTRY *)operator new[](0x88uLL, 0x4B677844u, 256LL);
  if ( v6 && (v7 = DISPLAY_CALLOUT_ENTRY::DISPLAY_CALLOUT_ENTRY(v6, a1, a2)) != 0LL )
  {
    Global = DXGGLOBAL::GetGlobal();
    return DXGDISPLAYCALLOUTQUEUE::SubmitSingleEntry((DXGDISPLAYCALLOUTQUEUE ***)Global + 230, v7, a3);
  }
  else
  {
    WdLogSingleEntry1(6LL, 801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for dispaly switch callout.",
      801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
