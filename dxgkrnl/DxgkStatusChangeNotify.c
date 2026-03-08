/*
 * XREFs of DxgkStatusChangeNotify @ 0x1C0172E00
 * Callers:
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$05$07@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C0002ADC (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$05$07@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C0002B10 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0171F9C (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173EE4 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     DxgkSetDisplayMode @ 0x1C0175A20 (DxgkSetDisplayMode.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1C0176944 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178EFC (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BB60C (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E3544 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 *     ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C01E37E4 (-SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FC328 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E58D0 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     McTemplateK0qp_EtwWriteTransfer @ 0x1C0002B44 (McTemplateK0qp_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DxgkStatusChangeNotify(int *a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 CurrentServerSilo; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r8d
  unsigned int updated; // esi
  __int64 v11; // rcx
  __int64 v12; // r8
  void *v14; // rcx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rax
  const wchar_t *v19; // r9
  int v20; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h]
  char v22; // [rsp+60h] [rbp-10h]
  unsigned int ProcessSessionId; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int ActiveConsoleId; // [rsp+A8h] [rbp+38h] BYREF
  unsigned int ServerSiloServiceSessionId; // [rsp+B0h] [rbp+40h] BYREF

  v20 = -1;
  v21 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2195;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2195);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 2195);
  CurrentProcess = PsGetCurrentProcess();
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  CurrentServerSilo = PsGetCurrentServerSilo();
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
  ActiveConsoleId = RtlGetActiveConsoleId();
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10) != 0 )
    McTemplateK0qp_EtwWriteTransfer(v7, v6, v8, *a1);
  v9 = *a1;
  if ( *a1 > 7 )
  {
    if ( v9 == 8 || v9 == 9 || v9 == 10 )
    {
LABEL_9:
      updated = 0;
      goto LABEL_10;
    }
    if ( v9 != 11 )
    {
      if ( v9 == 12 )
      {
        WdLogSingleEntry1(4LL, ProcessSessionId);
        updated = ZwUpdateWnfStateData(&WNF_DX_MONITOR_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ProcessSessionId, 0, 0);
        if ( ProcessSessionId != ActiveConsoleId && ActiveConsoleId != -1 )
        {
          WdLogSingleEntry1(4LL, ActiveConsoleId);
          v14 = &WNF_DX_MONITOR_CHANGE_NOTIFICATION;
          goto LABEL_17;
        }
        goto LABEL_10;
      }
LABEL_34:
      WdLogSingleEntry1(1LL, *a1);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Unsupported state change notification type. (pNotification->Type = 0x%I64x)",
        *a1,
        0LL,
        0LL,
        0LL,
        0LL);
      updated = -1073741637;
      goto LABEL_10;
    }
LABEL_24:
    WdLogSingleEntry1(4LL, ProcessSessionId);
    updated = ZwUpdateWnfStateData(&WNF_DX_MODE_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ProcessSessionId, 0, 0);
    if ( ServerSiloServiceSessionId == -1 )
    {
      WdLogSingleEntry1(2LL, ProcessSessionId);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get service session ID from server silo of current session %u.",
        ProcessSessionId,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_10;
    }
    if ( ServerSiloServiceSessionId != ProcessSessionId )
    {
      v16 = ZwUpdateWnfStateData(&WNF_DX_MODE_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ServerSiloServiceSessionId, 0, 0);
      if ( v16 < 0 )
      {
        v17 = v16;
        WdLogSingleEntry2(2LL, ServerSiloServiceSessionId, v16);
        v18 = ServerSiloServiceSessionId;
        v19 = L"Failed to send MODE_CHANGE WNF notification to service session %u, status = 0x%I64x.";
        goto LABEL_38;
      }
    }
    goto LABEL_10;
  }
  if ( v9 == 7 )
    goto LABEL_24;
  if ( v9 != 1 )
  {
    if ( v9 == 2 || v9 == 3 || v9 == 4 || (unsigned int)(v9 - 5) < 2 )
      goto LABEL_9;
    goto LABEL_34;
  }
  WdLogSingleEntry1(4LL, ProcessSessionId);
  updated = ZwUpdateWnfStateData(&WNF_DX_OCCLUSION_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &ProcessSessionId, 0, 0);
  if ( ProcessSessionId == ServerSiloServiceSessionId && ActiveConsoleId != -1 )
  {
    WdLogSingleEntry1(4LL, ActiveConsoleId);
    v14 = &WNF_DX_OCCLUSION_CHANGE_NOTIFICATION;
LABEL_17:
    v15 = ZwUpdateWnfStateData(v14, 0LL, 0LL, 0LL, &ActiveConsoleId, 0, 0);
    if ( v15 >= 0 )
      goto LABEL_10;
    v17 = v15;
    WdLogSingleEntry2(2LL, ActiveConsoleId, v15);
    v18 = ActiveConsoleId;
    v19 = L"Failed to send OCCLUSION WNF notification to active session %u, status = 0x%I64x.";
LABEL_38:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v19, v18, v17, 0LL, 0LL, 0LL);
  }
LABEL_10:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v20);
  return updated;
}
