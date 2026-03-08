/*
 * XREFs of MonitorGetPreferredScaleFactor @ 0x1C01673EC
 * Callers:
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C0167338 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C0009184 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z.c)
 */

__int64 __fastcall MonitorGetPreferredScaleFactor(__int64 a1, unsigned int a2, _DWORD *a3)
{
  struct DXGMONITOR *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  struct DXGMONITOR *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || a2 == -1 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    return 3221225485LL;
  }
  else
  {
    MONITOR_MGR::AcquireMonitorShared(&v8, a1, a2);
    v4 = v8;
    if ( v8 )
    {
      v5 = *((_DWORD *)v8 + 117);
      if ( !v5 )
        v5 = *((_DWORD *)v8 + 116);
      *a3 = v5;
      v6 = v5 == 0 ? 0xC0000001 : 0;
    }
    else
    {
      v6 = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
    }
    if ( v4 )
    {
      ExReleaseResourceLite((PERESOURCE)((char *)v4 + 24));
      KeLeaveCriticalRegion();
    }
    return v6;
  }
}
