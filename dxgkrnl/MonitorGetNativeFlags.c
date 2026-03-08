/*
 * XREFs of MonitorGetNativeFlags @ 0x1C01D7E10
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C01B25E0 (DxgkGetMonitorInternalInfo.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0213B3C (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C000935C (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     ?_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z @ 0x1C01B03D0 (-_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z.c)
 */

__int64 __fastcall MonitorGetNativeFlags(__int64 a1, unsigned __int8 *a2, bool *a3, bool *a4)
{
  DXGMONITOR *v7; // rbx
  unsigned int MonitorNativeFlags; // edi
  DXGMONITOR *v10; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 || !a3 || !a4 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(&v10, a1);
  v7 = v10;
  if ( v10 )
  {
    MonitorNativeFlags = DXGMONITOR::_GetMonitorNativeFlags(v10, a2, a3, a4);
  }
  else
  {
    MonitorNativeFlags = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
  }
  if ( v7 )
  {
    ExReleaseResourceLite((PERESOURCE)((char *)v7 + 24));
    KeLeaveCriticalRegion();
  }
  return MonitorNativeFlags;
}
