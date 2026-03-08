/*
 * XREFs of ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C01FC13C
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FBF54 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@.c)
 * Callees:
 *     ?OpenMonitorDataStore@DXGMONITOR@@UEBAJ_NPEAPEAX@Z @ 0x1C01CE410 (-OpenMonitorDataStore@DXGMONITOR@@UEBAJ_NPEAPEAX@Z.c)
 *     ?_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z @ 0x1C01FDA1C (-_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorConfigurationFromMonitorStore(DXGMONITOR *this)
{
  void *v2; // rcx
  int MonitorConfigurationFromRegistry; // ebx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v5 = 0LL;
  if ( *(_QWORD *)(*((_QWORD *)this + 25) + 8LL) )
  {
    MonitorConfigurationFromRegistry = DXGMONITOR::OpenMonitorDataStore((DXGMONITOR *)((char *)this + 8), 1, &v5);
    if ( MonitorConfigurationFromRegistry >= 0 )
      MonitorConfigurationFromRegistry = DXGMONITOR::_RetrieveMonitorConfigurationFromRegistry(this, v5, 0);
    v2 = v5;
  }
  else
  {
    MonitorConfigurationFromRegistry = -1073741275;
  }
  if ( v2 )
    ZwClose(v2);
  return (unsigned int)MonitorConfigurationFromRegistry;
}
