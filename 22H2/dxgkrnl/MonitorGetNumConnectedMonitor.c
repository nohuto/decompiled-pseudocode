/*
 * XREFs of MonitorGetNumConnectedMonitor @ 0x1C01DAE4C
 * Callers:
 *     ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x1C001FB24 (-GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C01DAD7C (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C03ABF4C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorGetNumConnectedMonitor(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx

  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a1;
  if ( a1 && a2 )
  {
    v6 = *(_QWORD *)(a1 + 2920);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 112);
      if ( v7 )
      {
        *a2 = *(_DWORD *)(v7 + 32);
        return 0LL;
      }
    }
    WdLogSingleEntry1(2LL, a1);
  }
  return 3221225485LL;
}
