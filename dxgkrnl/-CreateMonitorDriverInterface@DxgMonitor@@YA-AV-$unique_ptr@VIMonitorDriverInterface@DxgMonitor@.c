/*
 * XREFs of ?CreateMonitorDriverInterface@DxgMonitor@@YA?AV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@PEAUHDXGMONITOR__@@PEAVADAPTER_DISPLAY@@IPEAU_DEVICE_OBJECT@@@Z @ 0x1C01FB934
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FB6A0 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CO.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03C2D18 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 *__fastcall DxgMonitor::CreateMonitorDriverInterface(__int64 *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v9; // rax

  v9 = operator new[](0x28uLL, 0x4D677844u, 256LL);
  if ( v9 )
  {
    *(_QWORD *)v9 = &KernelDriver::`vftable';
    *(_QWORD *)(v9 + 16) = a5;
    *(_QWORD *)(v9 + 8) = a2;
    *(_QWORD *)(v9 + 24) = a3;
    *(_DWORD *)(v9 + 32) = a4;
  }
  *a1 = v9;
  return a1;
}
