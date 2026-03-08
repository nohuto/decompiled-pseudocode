/*
 * XREFs of MonitorIsPhysicalMonitor @ 0x1C0213F8C
 * Callers:
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C00226AC (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C000935C (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 */

bool __fastcall MonitorIsPhysicalMonitor(__int64 a1)
{
  bool v1; // bl
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 0;
  MONITOR_MGR::AcquireMonitorShared(&v3, a1);
  if ( v3 )
    v1 = *(_DWORD *)(v3 + 312) == 1;
  else
    v1 = 0;
  if ( v3 )
  {
    ExReleaseResourceLite((PERESOURCE)(v3 + 24));
    KeLeaveCriticalRegion();
  }
  return v1;
}
