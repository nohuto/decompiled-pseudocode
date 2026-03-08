/*
 * XREFs of MonitorGetDpiInfoFromDescriptor @ 0x1C0168844
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0169828 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C01B25E0 (DxgkGetMonitorInternalInfo.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C031CC94 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C0009184 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z.c)
 *     ?_GetDpiInfo@DXGMONITOR@@QEBAXAEAUDISPLAY_PREFERRED_MODE_INFO@@AEAI1AEA_N2@Z @ 0x1C016892C (-_GetDpiInfo@DXGMONITOR@@QEBAXAEAUDISPLAY_PREFERRED_MODE_INFO@@AEAI1AEA_N2@Z.c)
 */

__int64 __fastcall MonitorGetDpiInfoFromDescriptor(
        __int64 a1,
        __int64 a2,
        struct DISPLAY_PREFERRED_MODE_INFO *a3,
        unsigned int *a4,
        unsigned int *a5,
        bool *a6,
        bool *a7)
{
  __int64 v8; // rbx
  __int64 v11; // rax
  unsigned int *v12; // rdi
  DXGMONITOR *v13; // rbx
  unsigned int v14; // edi
  DXGMONITOR *v16; // [rsp+50h] [rbp+8h] BYREF

  v8 = (unsigned int)a2;
  v11 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v11 + 24) = v8;
  *(_QWORD *)(v11 + 32) = a1;
  if ( !a1 )
    return -1073741811LL;
  if ( (_DWORD)v8 == -1 )
    return -1073741811LL;
  if ( !a3 )
    return -1073741811LL;
  if ( !a4 )
    return -1073741811LL;
  v12 = a5;
  if ( !a5 )
    return -1073741811LL;
  MONITOR_MGR::AcquireMonitorShared(&v16, a1, v8);
  v13 = v16;
  if ( v16 )
  {
    DXGMONITOR::_GetDpiInfo(v16, a3, a4, v12, a6, a7);
    v14 = 0;
  }
  else
  {
    v14 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
  }
  if ( v13 )
  {
    ExReleaseResourceLite((PERESOURCE)((char *)v13 + 24));
    KeLeaveCriticalRegion();
  }
  return v14;
}
