/*
 * XREFs of ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01AAC00
 * Callers:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z @ 0x1C0001E2C (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C0009184 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z.c)
 *     MonitorIsMonitorConnected @ 0x1C0167278 (MonitorIsMonitorConnected.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C0168D80 (DpiPdoDispatchInternalIoctl.c)
 *     MonitorGetMonitorHandle @ 0x1C0171B54 (MonitorGetMonitorHandle.c)
 *     MonitorNotifyDXGIGammaRampChange @ 0x1C0179CDC (MonitorNotifyDXGIGammaRampChange.c)
 *     DpiPdoDispatchIoctl @ 0x1C01804E0 (DpiPdoDispatchIoctl.c)
 *     MonitorGetMonitorOrientationsFromTarget @ 0x1C01AA154 (MonitorGetMonitorOrientationsFromTarget.c)
 *     _lambda_b5f01eb3f4b149c357ab2eab84592b3f_::operator() @ 0x1C01AA250 (_lambda_b5f01eb3f4b149c357ab2eab84592b3f_--operator().c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AB2A0 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01AE290 (DxgkGetAdapterDeviceDesc.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C01B25E0 (DxgkGetMonitorInternalInfo.c)
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C01CF0A0 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C01FA828 (MonitorCreatePhysicalMonitor.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FAA30 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FAC68 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C01FB0DC (MonitorNotifyDeviceNodeReady.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C01FB350 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FB6A0 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CO.c)
 *     ?_CancelSkippedDepartures@MONITOR_MGR@@QEAAJI@Z @ 0x1C0200E08 (-_CancelSkippedDepartures@MONITOR_MGR@@QEAAJI@Z.c)
 *     ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C03C22E0 (-ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIM.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03C343C (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03C37E4 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03C3A14 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C03C3C50 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 *     ?_QuerySkippedRemovalState@MONITOR_MGR@@QEAAJIPEAE@Z @ 0x1C03C3FC0 (-_QuerySkippedRemovalState@MONITOR_MGR@@QEAAJIPEAE@Z.c)
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C03C4E80 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall MONITOR_MGR::_GetMonitorInstance(
        MONITOR_MGR *this,
        unsigned int a2,
        char a3,
        struct DXGMONITOR **a4)
{
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  MONITOR_MGR *v11; // rcx
  MONITOR_MGR *v12; // rdx
  char *v13; // rax
  __int64 v14; // rax
  unsigned int v15; // edi
  int v18; // r9d

  v7 = a2;
  if ( !a4 )
    WdLogSingleEntry0(1LL);
  if ( (_DWORD)v7 == -1 )
    WdLogSingleEntry0(1LL);
  *a4 = 0LL;
  if ( this == (MONITOR_MGR *)-80LL )
    WdLogSingleEntry0(1LL);
  KeEnterCriticalRegion();
  if ( *((struct _KTHREAD **)this + 13) == KeGetCurrentThread() )
  {
    if ( *((int *)this + 28) <= 0 )
    {
      WdLogSingleEntry1(1LL, 491LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 491LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*((_DWORD *)this + 28);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 88, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v18 = *((_DWORD *)this + 29);
        if ( v18 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v10, (const EVENT_DESCRIPTOR *)"g", v8, v18);
      }
      _InterlockedIncrement64((volatile signed __int64 *)this + 12);
      ExAcquirePushLockExclusiveEx((char *)this + 88, 0LL);
    }
    if ( *((_QWORD *)this + 13) )
    {
      WdLogSingleEntry1(1LL, 515LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 515LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((_DWORD *)this + 28) )
    {
      WdLogSingleEntry1(1LL, 516LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 516LL, 0LL, 0LL, 0LL, 0LL);
    }
    *((_QWORD *)this + 13) = KeGetCurrentThread();
    *((_DWORD *)this + 28) = 1;
  }
  v11 = (MONITOR_MGR *)*((_QWORD *)this + 5);
  v12 = (MONITOR_MGR *)((char *)this + 40);
  if ( v11 == (MONITOR_MGR *)((char *)this + 40) )
    goto LABEL_20;
  v13 = (char *)v11 - 152;
  if ( !v11 )
    v13 = 0LL;
  if ( !v13 )
    goto LABEL_20;
  while ( *((_DWORD *)v13 + 45) != (_DWORD)v7 )
  {
    v11 = (MONITOR_MGR *)*((_QWORD *)v13 + 19);
    if ( v11 != v12 )
    {
      v13 = (char *)v11 - 152;
      if ( !v11 )
        v13 = 0LL;
      if ( v13 )
        continue;
    }
    goto LABEL_20;
  }
  if ( a3 && *((_DWORD *)v13 + 78) != 1 )
    v13 = (char *)*((_QWORD *)v13 + 40);
  if ( v13 )
  {
    *a4 = (struct DXGMONITOR *)v13;
    v15 = 0;
  }
  else
  {
LABEL_20:
    v14 = WdLogNewEntry5_WdTrace(v11, v12, v8, v9);
    v15 = -1073741275;
    *(_QWORD *)(v14 + 24) = v7;
    *(_QWORD *)(v14 + 32) = this;
  }
  if ( *((struct _KTHREAD **)this + 13) != KeGetCurrentThread() )
    WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)this + 80, 0LL, 0LL);
  if ( *((int *)this + 28) <= 0 )
  {
    WdLogSingleEntry1(1LL, 535LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 535LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (*((_DWORD *)this + 28))-- == 1 )
  {
    *((_QWORD *)this + 13) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 88, 0LL);
  }
  KeLeaveCriticalRegion();
  return v15;
}
