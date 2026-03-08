/*
 * XREFs of MonitorGetUsageClass @ 0x1C0171C64
 * Callers:
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C017151C (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0213B3C (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     DxgkIsMonitorConnected @ 0x1C02CE070 (DxgkIsMonitorConnected.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C000935C (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 */

__int64 __fastcall MonitorGetUsageClass(__int64 a1, _DWORD *a2, _BYTE *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(&v9, a1);
  v5 = v9;
  if ( v9 )
  {
    if ( *(_DWORD *)(v9 + 312) != 1 && *(_DWORD *)(*(_QWORD *)(v9 + 240) + 16LL) )
      WdLogSingleEntry0(1LL);
    v6 = *(_QWORD *)(v5 + 240);
    *a2 = *(_DWORD *)(v6 + 16);
    *a3 = *(_BYTE *)(v6 + 20);
    v7 = 0;
  }
  else
  {
    v7 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
  }
  if ( v5 )
  {
    ExReleaseResourceLite((PERESOURCE)(v5 + 24));
    KeLeaveCriticalRegion();
  }
  return v7;
}
