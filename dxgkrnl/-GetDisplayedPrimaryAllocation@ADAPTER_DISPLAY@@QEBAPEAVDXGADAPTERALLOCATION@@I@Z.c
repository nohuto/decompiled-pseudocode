/*
 * XREFs of ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C01C6178
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173EE4 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1C0176944 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C40F4 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?PresentQualcommPanelRefreshWorkaround@@YAXPEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z @ 0x1C02DBBC8 (-PresentQualcommPanelRefreshWorkaround@@YAXPEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03ABFB8 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C001B7C4 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C0176278 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 */

struct DXGADAPTERALLOCATION *__fastcall ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
        DXGADAPTER **this,
        unsigned int a2)
{
  __int64 v3; // rsi
  struct DXGADAPTERALLOCATION *result; // rax
  __int64 v5; // rdi
  const struct DXGALLOCATION *DisplayedPrimary; // rax

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 1710LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 1710LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (unsigned int)v3 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 1711LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      1711LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  result = ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)this, v3, 0);
  if ( !result )
  {
    v5 = *((_QWORD *)this[16] + 500 * v3 + 91);
    if ( v5 )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v5 + 16) + 16LL)) )
      {
        WdLogSingleEntry1(1LL, 1736LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
          1736LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DisplayedPrimary = DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)v5, v3);
      if ( DisplayedPrimary )
        return (struct DXGADAPTERALLOCATION *)*((_QWORD *)DisplayedPrimary + 6);
      WdLogSingleEntry3(3LL, v5, v3, this[2]);
    }
    else
    {
      WdLogSingleEntry2(3LL, v3, this[2]);
    }
    return 0LL;
  }
  return result;
}
