/*
 * XREFs of ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01676B0
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016A260 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0171F9C (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C40F4 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E3544 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x1C03C6550 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpIndicateConnectorChange @ 0x1C001C790 (DpIndicateConnectorChange.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C017779C (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02BA704 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 */

void __fastcall DmmHandleSetTimingsResult(
        ADAPTER_DISPLAY **a1,
        struct _DMM_SET_TIMING_RESULT *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  DXGSESSIONMGR *v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _DEVICE_OBJECT *v17; // rdi
  struct _DEVICE_OBJECT *v18; // rcx
  int CurrentProcessSessionId; // [rsp+50h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
    WdLogSingleEntry0(1LL);
  if ( *((_DWORD *)a1 + 50) == 1 && !*((_BYTE *)a1 + 2833) )
  {
    if ( (*(_BYTE *)a2 & 2) == 0 )
      goto LABEL_6;
    v8 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( v8
      && (v11 = PsGetCurrentProcessSessionId(v7, v6, v9, v10),
          (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v8, v11)) != 0LL)
      && *((_BYTE *)SessionDataForSpecifiedSession + 18499) )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14, v13, v15, v16);
      if ( (int)ZwUpdateWnfStateData(
                  &WNF_DXGK_PATH_FAILED_OR_INVALIDATED,
                  0LL,
                  0LL,
                  0LL,
                  &CurrentProcessSessionId,
                  0,
                  0) >= 0 )
        goto LABEL_6;
    }
    else if ( ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(a1[365], 0LL, a3) >= 0 )
    {
LABEL_6:
      if ( (*(_BYTE *)a2 & 1) != 0 )
      {
        v17 = (struct _DEVICE_OBJECT *)a1[27];
        if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn((DXGADAPTER *)a1) )
        {
          DpIndicateConnectorChange(v17);
        }
        else
        {
          v18 = (struct _DEVICE_OBJECT *)*((_QWORD *)v17->DeviceExtension + 19);
          if ( v18 )
            IoInvalidateDeviceRelations(v18, BusRelations);
        }
      }
      return;
    }
    WdLogSingleEntry1(2LL, a1);
    goto LABEL_6;
  }
}
