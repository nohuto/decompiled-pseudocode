/*
 * XREFs of MonitorGetSDRWhiteLevel @ 0x1C03BFAC8
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AB2A0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C000935C (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 */

__int64 __fastcall MonitorGetSDRWhiteLevel(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorShared(&v6, a1);
    v4 = v6;
    if ( v6 )
    {
      *a2 = *(_DWORD *)(*(_QWORD *)(v6 + 224) + 392LL);
      v5 = 0;
    }
    else
    {
      v5 = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
    }
    if ( v4 )
    {
      ExReleaseResourceLite((PERESOURCE)(v4 + 24));
      KeLeaveCriticalRegion();
    }
    return v5;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    return 3221225485LL;
  }
}
