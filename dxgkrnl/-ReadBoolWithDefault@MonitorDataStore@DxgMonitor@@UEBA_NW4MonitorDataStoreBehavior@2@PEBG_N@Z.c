/*
 * XREFs of ?ReadBoolWithDefault@MonitorDataStore@DxgMonitor@@UEBA_NW4MonitorDataStoreBehavior@2@PEBG_N@Z @ 0x1C01D1B70
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FBF54 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@.c)
 * Callees:
 *     ??$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEAK@Z @ 0x1C01D1BA4 (--$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEAK@Z.c)
 */

bool __fastcall DxgMonitor::MonitorDataStore::ReadBoolWithDefault(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4)
{
  int v4; // ebx
  int v6; // [rsp+48h] [rbp+20h] BYREF

  v4 = a4;
  v6 = a4;
  if ( (unsigned __int8)DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(a1, a2, a3, &v6) )
    v4 = v6;
  return v4 != 0;
}
