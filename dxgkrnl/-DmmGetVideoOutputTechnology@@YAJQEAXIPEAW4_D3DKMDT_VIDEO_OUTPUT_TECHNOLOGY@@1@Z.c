/*
 * XREFs of ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C01B0684
 * Callers:
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01670E0 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C0168D80 (DpiPdoDispatchInternalIoctl.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0169828 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C01A6DD8 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C01A7070 (DpiGdoDispatchInternalIoctl.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C01D9870 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C01E8700 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1C01F90BC (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C02FA220 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C031CC94 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03C2D18 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00094F4 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DmmGetVideoOutputTechnology(
        _QWORD *a1,
        unsigned int a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a3,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a4)
{
  __int64 v4; // r14
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // edi

  v4 = a2;
  if ( a3 )
    *a3 = D3DKMDT_VOT_UNINITIALIZED;
  if ( a4 )
    *a4 = D3DKMDT_VOT_UNINITIALIZED;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  v8 = a1[365];
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v9 = *(_QWORD *)(v8 + 104);
  if ( v9 )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v9 + 40));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 120) + 72LL));
    v10 = *(_QWORD *)(v9 + 120);
    v11 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v10, v4);
    if ( v11 )
    {
      if ( a3 )
        *a3 = *(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v11 + 80);
      if ( a4 )
        *a4 = *(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v11 + 84);
      v12 = 0;
    }
    else
    {
      WdLogSingleEntry1(2LL, v4);
      v12 = -1071774971;
    }
    if ( v10 )
      ReferenceCounted::Release((ReferenceCounted *)(v10 + 64));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v9 + 40));
    return v12;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
