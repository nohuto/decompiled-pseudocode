/*
 * XREFs of ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0167EEC
 * Callers:
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEA_N@Z @ 0x1C0167CF4 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017F340 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEA_N@Z @ 0x1C01E48A0 (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C01FA828 (MonitorCreatePhysicalMonitor.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C01FB0DC (MonitorNotifyDeviceNodeReady.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C01FB350 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0215610 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C03BF180 (MonitorCreateSimulatedMonitor.c)
 *     MonitorDestroySimulatedMonitor @ 0x1C03BF480 (MonitorDestroySimulatedMonitor.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C03BFFD0 (MonitorRemovePhysicalMonitor.c)
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C03C4E80 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0001D60 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01BA77C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_LogMonitorPresentEvent(__int64 a1, int a2, unsigned int a3, int a4, _OWORD *a5)
{
  unsigned int v9; // r8d
  __int64 v10; // rdi
  __int64 v11; // rbx
  struct _LUID *v12; // rdx
  __int128 v13; // xmm1
  unsigned __int64 v15; // [rsp+20h] [rbp-71h] BYREF
  _OWORD v16[6]; // [rsp+30h] [rbp-61h] BYREF

  if ( a2 > 1073741826 )
    WdLogSingleEntry0(1LL);
  v9 = *(_DWORD *)(a1 + 176);
  v10 = 3LL * (v9 % 0x14);
  *(_DWORD *)(a1 + 24LL * (v9 % 0x14) + 192) = v9;
  *(_DWORD *)(a1 + 8 * v10 + 184) = a2;
  *(_DWORD *)(a1 + 8 * v10 + 188) = a3;
  *(_DWORD *)(a1 + 8 * v10 + 196) = a4;
  v11 = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(a1 + 8 * v10 + 200) = v11 * KeQueryTimeIncrement();
  ++*(_DWORD *)(a1 + 176);
  memset(v16, 0, sizeof(v16));
  v16[0] = 0x6000000008uLL;
  DWORD2(v16[2]) = 0;
  *(_QWORD *)&v16[2] = 0LL;
  *((_QWORD *)&v16[1] + 1) = 0LL;
  *(_QWORD *)&v16[3] = __PAIR64__(a3, a2);
  DWORD2(v16[3]) = a4;
  if ( a5 )
  {
    v13 = a5[1];
    v16[4] = *a5;
    v16[5] = v13;
  }
  v15 = 0LL;
  DXGADAPTER::IsAdapterSessionized(*(DXGADAPTER **)(*(_QWORD *)(a1 + 24) + 16LL), v12, 0LL, &v15);
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v16, v15);
}
