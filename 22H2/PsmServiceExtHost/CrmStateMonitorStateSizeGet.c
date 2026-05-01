/*
 * XREFs of CrmStateMonitorStateSizeGet @ 0x18002BE6C
 * Callers:
 *     CrmStateMonitorStart @ 0x18002B290 (CrmStateMonitorStart.c)
 *     CrmLogStateMonitorStateSet @ 0x18002BBD4 (CrmLogStateMonitorStateSet.c)
 *     CrmStateMonitorLogDataGet @ 0x18002BDB0 (CrmStateMonitorLogDataGet.c)
 *     CrmLogStateMonitorStop @ 0x18003659C (CrmLogStateMonitorStop.c)
 *     CrmStateMonitorGPUUsageStart @ 0x1800383EC (CrmStateMonitorGPUUsageStart.c)
 *     CrmLogStateMonitorRundown @ 0x18003B0F0 (CrmLogStateMonitorRundown.c)
 *     CrmStateMonitorWNFStart @ 0x180042420 (CrmStateMonitorWNFStart.c)
 *     CrmStateMonitorPowerSettingsStart @ 0x180042848 (CrmStateMonitorPowerSettingsStart.c)
 *     CrmStateMonitorSystemDiskUsageStart @ 0x180043108 (CrmStateMonitorSystemDiskUsageStart.c)
 *     CrmStateMonitorWNFCallback @ 0x180043570 (CrmStateMonitorWNFCallback.c)
 *     CrmStateMonitorTimeSinceBootStart @ 0x1800435F4 (CrmStateMonitorTimeSinceBootStart.c)
 *     CrmStateMonitorNetworkStart @ 0x180043778 (CrmStateMonitorNetworkStart.c)
 *     CrmStateMonitorCPUUsageStart @ 0x1800438FC (CrmStateMonitorCPUUsageStart.c)
 *     CrmStateMonitorTimeSinceLogonStart @ 0x180043A4C (CrmStateMonitorTimeSinceLogonStart.c)
 *     CrmStateMonitorDelayedCsStart @ 0x180043C7C (CrmStateMonitorDelayedCsStart.c)
 *     CrmStateMonitorDelayedAcStart @ 0x180043CF0 (CrmStateMonitorDelayedAcStart.c)
 *     CrmStateMonitorCsAcDcStart @ 0x180043D64 (CrmStateMonitorCsAcDcStart.c)
 *     CrmStateMonitorPowerConstrainedStart @ 0x180043DC8 (CrmStateMonitorPowerConstrainedStart.c)
 *     CrmStateMonitorPostResumeStart @ 0x180043E70 (CrmStateMonitorPostResumeStart.c)
 *     CrmStateMonitorPostShellReadyStart @ 0x180043EDC (CrmStateMonitorPostShellReadyStart.c)
 *     CrmStateMonitorDisconnectedStandbyStart @ 0x180043F48 (CrmStateMonitorDisconnectedStandbyStart.c)
 *     CrmStateMonitorCompositeTestStart @ 0x180085400 (CrmStateMonitorCompositeTestStart.c)
 *     CrmStateMonitorTestStart @ 0x18008585C (CrmStateMonitorTestStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmStateMonitorStateSizeGet(int a1)
{
  int v1; // ecx
  int v2; // ecx
  __int64 result; // rax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  if ( a1 > 23 )
  {
    if ( a1 == 29 )
      return 4LL;
    if ( a1 <= 29 )
    {
      v1 = a1 - 24;
      if ( !v1 )
        return 4LL;
      v2 = v1 - 1;
      if ( !v2 )
        return 4LL;
      v8 = v2 - 1;
      if ( v8 )
      {
        if ( (unsigned int)(v8 - 1) >= 2 )
          return 0LL;
        return 4LL;
      }
      return 8LL;
    }
    v4 = a1 - 30;
    if ( !v4 )
      return 12LL;
    v5 = v4 - 1;
    if ( !v5 )
      return 4LL;
    v6 = v5 - 1;
    if ( !v6 )
      return 12LL;
    v7 = v6 - 1;
    if ( !v7 )
      return 4LL;
    if ( v7 == 1 )
      return 12LL;
    return 0LL;
  }
  if ( a1 >= 22 )
    return 12LL;
  if ( a1 <= 12 )
  {
    if ( a1 == 12 )
      return 8LL;
    if ( a1 < 0 )
      return 0LL;
    if ( a1 <= 2 )
      return 4LL;
    result = 8LL;
    if ( a1 <= 8 || a1 == 10 )
      return 4LL;
    if ( a1 == 9 )
      return 12LL;
  }
  else
  {
    if ( a1 <= 17 )
      return 12LL;
    if ( a1 == 19 || a1 == 18 || a1 == 20 )
      return 4LL;
    return 16LL;
  }
  return result;
}
