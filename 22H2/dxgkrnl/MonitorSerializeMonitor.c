/*
 * XREFs of MonitorSerializeMonitor @ 0x1C02F49A0
 * Callers:
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E69D8 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009DB4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_SerializeMonitor@DXGMONITOR@@QEAAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x1C02F9918 (-_SerializeMonitor@DXGMONITOR@@QEAAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 */

__int64 __fastcall MonitorSerializeMonitor(
        struct HDXGMONITOR__ *a1,
        unsigned __int64 *a2,
        struct _DMM_MONITOR_SERIALIZATION *a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  DXGMONITOR *v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // eax
  struct _ERESOURCE *v11; // rcx
  unsigned int v12; // ebx
  DXGMONITOR *v13; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v13 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v13);
  if ( (int)result >= 0 )
  {
    v8 = v13;
    if ( !v13 )
    {
      v9 = WdLogNewEntry5_WdAssertion(v7, v6);
      WdLogEvent5_WdAssertion(v9);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v8 + 296), 1u);
    v10 = DXGMONITOR::_SerializeMonitor(v8, a2, a3);
    v11 = (struct _ERESOURCE *)((char *)v8 + 296);
    v12 = v10;
    ExReleaseResourceLite(v11);
    KeLeaveCriticalRegion();
    return v12;
  }
  return result;
}
