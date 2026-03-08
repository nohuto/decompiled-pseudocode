/*
 * XREFs of MonitorIsMonitorEdidless @ 0x1C01D7EB0
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C01B25E0 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C000935C (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 */

__int64 __fastcall MonitorIsMonitorEdidless(__int64 a1, bool *a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorShared(&v6, a1);
    v3 = v6;
    if ( v6 )
    {
      *a2 = *(_QWORD *)(*(_QWORD *)(v6 + 216) + 128LL) == 0LL;
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
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    return 3221225485LL;
  }
}
