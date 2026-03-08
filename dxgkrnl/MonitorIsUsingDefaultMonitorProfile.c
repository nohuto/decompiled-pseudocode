/*
 * XREFs of MonitorIsUsingDefaultMonitorProfile @ 0x1C03BFC50
 * Callers:
 *     ?IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C03B1030 (-IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C000935C (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 */

__int64 __fastcall MonitorIsUsingDefaultMonitorProfile(__int64 a1, _BYTE *a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(&v6, a1);
  v3 = v6;
  if ( v6 )
  {
    *a2 = *(_BYTE *)(*(_QWORD *)(v6 + 232) + 116LL);
    v4 = 0;
  }
  else
  {
    v4 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
  }
  if ( v3 )
  {
    ExReleaseResourceLite((PERESOURCE)(v3 + 24));
    KeLeaveCriticalRegion();
  }
  return v4;
}
