/*
 * XREFs of MonitorIsPhysicalMonitor @ 0x1C019B878
 * Callers:
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C002426C (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009DB4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

bool __fastcall MonitorIsPhysicalMonitor(struct HDXGMONITOR__ *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  struct DXGMONITOR *v3; // rbx
  struct _ERESOURCE *v4; // rcx
  bool v5; // bl
  __int64 v7; // rax
  struct DXGMONITOR *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 0;
  v8 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorFromHandle(a1, &v8) < 0 )
    return 0;
  v3 = v8;
  if ( !v8 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v2, v1);
    WdLogEvent5_WdAssertion(v7);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v3 + 296), 1u);
  v4 = (struct _ERESOURCE *)((char *)v3 + 296);
  v5 = *((_DWORD *)v3 + 108) == 1;
  ExReleaseResourceLite(v4);
  KeLeaveCriticalRegion();
  return v5;
}
