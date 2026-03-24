/*
 * XREFs of LogMonitorHandleOnOffState @ 0x1C016B654
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E767C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009DB4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C016B70C (-LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 */

void __fastcall LogMonitorHandleOnOffState(struct HDXGMONITOR__ *a1, __int64 a2, unsigned int a3)
{
  int MonitorFromHandle; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  struct DXGMONITOR *v9; // rdi
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rax
  struct DXGMONITOR *v13; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v13 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle(a1, &v13);
    v8 = MonitorFromHandle;
    if ( MonitorFromHandle < 0 )
    {
      v12 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v12 + 24) = v8;
      WdLogEvent5_WdError(v12);
    }
    else
    {
      v9 = v13;
      if ( !v13 )
      {
        v11 = WdLogNewEntry5_WdAssertion(v7, v6);
        WdLogEvent5_WdAssertion(v11);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v9 + 296), 1u);
      LOBYTE(v10) = 1;
      DXGMONITOR::LogMonitorObjectOnOffState(v9, a2, a3, v10);
      ExReleaseResourceLite((PERESOURCE)((char *)v9 + 296));
      KeLeaveCriticalRegion();
    }
  }
}
