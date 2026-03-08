/*
 * XREFs of ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C016ABF0
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0169828 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C01E8700 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C02FA220 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     MonitorGetPreferredMonitorSourceMode @ 0x1C016ACA0 (MonitorGetPreferredMonitorSourceMode.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C01716D8 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C0171AB4 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 */

__int64 __fastcall DmmGetPreferredMonitorSourceModeOnTarget(
        DXGADAPTER *a1,
        unsigned int a2,
        struct _D3DKMDT_MONITOR_SOURCE_MODE *a3)
{
  __int64 v4; // rdi
  char *v5; // rbx
  VIDPN_MGR *v6; // rsi
  int ConnectedMonitorHandle; // eax
  unsigned int PreferredMonitorSourceMode; // ebx
  struct HDXGMONITOR__ *v9; // rdi
  struct HDXGMONITOR__ *v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v4 = a2;
  v5 = (char *)a1 + 2920;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) || !*(_QWORD *)v5 )
    WdLogSingleEntry0(1LL);
  v6 = *(VIDPN_MGR **)(*(_QWORD *)v5 + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v12, (__int64)v6);
  v11 = 0LL;
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(v6, v4, &v11);
  PreferredMonitorSourceMode = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle < 0 )
  {
    WdLogSingleEntry2(2LL, v4, ConnectedMonitorHandle);
  }
  else
  {
    v9 = v11;
    if ( !v11 )
      WdLogSingleEntry0(1LL);
    PreferredMonitorSourceMode = MonitorGetPreferredMonitorSourceMode(v9, a3);
    VIDPN_MGR::ReleaseMonitorHandle(v6, v9);
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 40));
  return PreferredMonitorSourceMode;
}
