__int64 __fastcall MONITOR_MGR::_HandleCreatePhysicalMonitor(
        MONITOR_MGR *this,
        unsigned int a2,
        struct _DEVICE_OBJECT *a3,
        unsigned __int8 a4,
        char a5,
        struct _DXGK_CONNECTION_USB4_INFO *a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  __int64 v7; // r15
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v9; // r13
  int EmergencySimulatedMonitor; // eax
  struct DXGMONITOR *v11; // rsi
  struct DXGMONITOR *v12; // r12
  int MonitorInstance; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  DXGMONITOR *v17; // rbx
  int v18; // r14d
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // r14d
  DXGMONITOR *v22; // r14
  DXGMONITOR *v24; // r14
  __int64 v25; // rax
  DXGADAPTER *v26; // rcx
  int SourceConnectedToTargetInClientVidPn; // eax
  struct DXGMONITOR *v28; // rdx
  DxgMonitor::MonitorUsb4State *v29; // rcx
  char v30; // cl
  char v31; // al
  DXGMONITOR *v32; // [rsp+90h] [rbp+48h] BYREF
  unsigned int v33; // [rsp+98h] [rbp+50h] BYREF
  struct _DEVICE_OBJECT *v34; // [rsp+A0h] [rbp+58h]
  unsigned __int8 v35; // [rsp+A8h] [rbp+60h]

  v35 = a4;
  v34 = a3;
  v7 = a2;
  if ( a2 == -1 )
    WdLogSingleEntry0(1LL);
  if ( *((_BYTE *)this + 21) && (Microsoft_Windows_DxgKrnlEnableBits & 4) != 0 )
    McTemplateK0q_EtwWriteTransfer(
      (__int64)this,
      &Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Start,
      (__int64)a3,
      v7);
  v9 = a7;
  MONITOR_MGR::_IssueMonitorEvent((_QWORD *)this + 1, v7, 0, 0LL, 1, (__int64)a7);
  v32 = 0LL;
  EmergencySimulatedMonitor = MONITOR_MGR::_GetEmergencySimulatedMonitor(this, &v32);
  if ( EmergencySimulatedMonitor >= 0 )
  {
    v11 = v32;
    if ( !v32 )
      WdLogSingleEntry0(1LL);
    MONITOR_MGR::_RemoveMonitorFromList(this, v11);
  }
  else
  {
    if ( EmergencySimulatedMonitor != -1073741275 )
      WdLogSingleEntry0(1LL);
    v11 = v32;
    if ( v32 )
      WdLogSingleEntry0(1LL);
  }
  v32 = 0LL;
  v12 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v7, 0, &v32);
  v17 = v32;
  v18 = MonitorInstance;
  if ( MonitorInstance >= 0 )
  {
    if ( !v32 )
      WdLogSingleEntry0(1LL);
    if ( v11 )
      WdLogSingleEntry0(1LL);
    if ( *((_DWORD *)v17 + 78) == 1 )
    {
      if ( *(struct _DEVICE_OBJECT **)(*((_QWORD *)v17 + 25) + 8LL) == v34 )
      {
        if ( *(_BYTE *)(*((_QWORD *)v17 + 33) + 8LL) )
        {
          v25 = WdLogNewEntry5_WdTrace(v34, v14, v15, v16);
          *(_QWORD *)(v25 + 24) = v17;
          *(_QWORD *)(v25 + 32) = v7;
          return 0LL;
        }
        if ( v35 )
        {
          DXGMONITOR::_ChangeLIDStatus(v17, 1);
          v26 = *(DXGADAPTER **)(*((_QWORD *)this + 3) + 16LL);
          if ( *((_DWORD *)v26 + 103) == 32902 )
          {
            if ( DXGADAPTER::UsingSetTimingsFromVidPn(v26) )
            {
              SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(
                                                       *(_QWORD **)(*((_QWORD *)this + 3) + 16LL),
                                                       v7,
                                                       &v33);
              if ( SourceConnectedToTargetInClientVidPn == -1071774884
                || SourceConnectedToTargetInClientVidPn == -1071774912 )
              {
                ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(*((ADAPTER_DISPLAY **)this + 3), 0LL, v9);
              }
            }
          }
          return 0LL;
        }
      }
      v24 = v17;
      v28 = v17;
      v17 = 0LL;
      MONITOR_MGR::_RemoveMonitorFromList(this, v28);
    }
    else
    {
      v24 = (DXGMONITOR *)*((_QWORD *)v17 + 40);
      DXGMONITOR::_SetAttachedPhysicalMonitor(v17, 0LL);
    }
    v12 = v24;
    if ( v24 )
    {
      if ( ((*((unsigned __int8 *)v24 + 176) >> 1) & 1) != (v35 != 0) )
        WdLogSingleEntry0(1LL);
      DxgMonitor::MonitorPnpState::UnregisterPnPTargetDeviceNotification(*((DxgMonitor::MonitorPnpState **)v24 + 25));
      v29 = (DxgMonitor::MonitorUsb4State *)*((_QWORD *)v24 + 33);
      if ( *((_BYTE *)v29 + 8) )
        DxgMonitor::MonitorUsb4State::DestroyPowerConnectionWithUsb4Stack(v29, 0);
    }
  }
  else
  {
    if ( v32 )
      WdLogSingleEntry0(1LL);
    if ( v18 != -1073741275 )
      WdLogSingleEntry0(1LL);
  }
  v32 = 0LL;
  v21 = MONITOR_MGR::_CreatePhysicalMonitor(this, v7, v34, v35, a5, &v32, a6, v9);
  if ( v21 >= 0 )
  {
    v22 = v32;
    if ( !v32 )
      WdLogSingleEntry0(1LL);
    if ( v17 )
    {
      v30 = *((_BYTE *)v17 + 176) ^ (*((_BYTE *)v22 + 176) ^ *((_BYTE *)v17 + 176)) & 2;
      *((_BYTE *)v17 + 176) = v30;
      v31 = v30 ^ (*((_BYTE *)v22 + 176) ^ v30) & 4;
      *((_BYTE *)v17 + 176) = v31;
      *((_BYTE *)v22 + 176) ^= (*((_BYTE *)v22 + 176) ^ v31) & 0x20;
      DXGMONITOR::_SetAttachedPhysicalMonitor(v17, v22);
    }
    else
    {
      MONITOR_MGR::_InsertMonitorToList(this, v22);
    }
    if ( !MONITOR_MGR::_DelayNotifyClient )
    {
      if ( v12 )
        v11 = v12;
      return MONITOR_MGR::_HandleCreateMonitorStep2(this, v7, v11, v22, v9);
    }
    if ( *((_QWORD *)v22 + 47) )
      WdLogSingleEntry0(1LL);
    *((_BYTE *)v22 + 368) = 1;
    if ( v12 )
      v11 = v12;
    *((_QWORD *)v22 + 47) = v11;
    MONITOR_MGR::_EnterMonitorPendingState(this);
    return 0LL;
  }
  if ( v32 )
    WdLogSingleEntry0(1LL);
  if ( v12 )
    MONITOR_MGR::_HandleCreateMonitorStep2(this, v7, v12, 0LL, v9);
  if ( v11 )
    MONITOR_MGR::_InsertMonitorToList(this, v11);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 4) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, &Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Cancel, v20, v7);
  return (unsigned int)v21;
}
