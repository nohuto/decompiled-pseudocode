/*
 * XREFs of MonitorDRTTest @ 0x1C02F38DC
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025FCF4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z @ 0x1C02DCAA8 (-DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z.c)
 *     ?_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z @ 0x1C02F23AC (-_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C02F3754 (MonitorCreateSimulatedMonitor.c)
 *     MonitorDestroySimulatedMonitor @ 0x1C02F3ABC (MonitorDestroySimulatedMonitor.c)
 */

__int64 __fastcall MonitorDRTTest(
        DXGADAPTER *this,
        struct _D3DKMT_DRT_MONITOR *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int SimulatedMonitor; // eax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rax
  MONITOR_MGR *v31; // rcx
  __int64 v32; // rax
  int v33; // [rsp+20h] [rbp-28h]
  int v34; // [rsp+30h] [rbp-18h]

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( !this || !a2 )
    return 3221225485LL;
  if ( *((_DWORD *)a2 + 1) < 0x20u )
  {
    v9 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v9 + 24) = a2;
    *(_QWORD *)(v9 + 32) = *((unsigned int *)a2 + 1);
    WdLogEvent5_WdWarning(v9);
    return 3221225485LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = *((_QWORD *)this + 337);
  if ( !v16 )
  {
    v17 = WdLogNewEntry5_WdError(v12, 0LL);
    *(_QWORD *)(v17 + 24) = this;
    WdLogEvent5_WdError(v17);
    return 3221225659LL;
  }
  v18 = *((_DWORD *)a2 + 3);
  if ( !v18 )
  {
    v31 = *(MONITOR_MGR **)(v16 + 96);
    if ( !v31 )
    {
      v32 = WdLogNewEntry5_WdError(0LL, v16);
      *(_QWORD *)(v32 + 24) = this;
      WdLogEvent5_WdError(v32);
      return 3221225485LL;
    }
    return (unsigned int)MONITOR_MGR::_DRTGetTargetInformation(v31, a2, v13, v14);
  }
  v19 = (unsigned int)(v18 - 1);
  if ( !(_DWORD)v19 )
  {
    if ( (int)DmmEnableModeResetOnMonitorEvent((PERESOURCE *)this, 0LL) < 0 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v28, v27);
      WdLogEvent5_WdAssertion(v30);
    }
    SimulatedMonitor = MonitorCreateSimulatedMonitor(
                         (PERESOURCE *)this,
                         *((unsigned int *)a2 + 4),
                         *((_DWORD *)a2 + 5),
                         v29,
                         v33,
                         0,
                         v34,
                         a3);
    goto LABEL_20;
  }
  if ( (_DWORD)v19 == 1 )
  {
    if ( (int)DmmEnableModeResetOnMonitorEvent((PERESOURCE *)this, 0LL) < 0 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v23, v22);
      WdLogEvent5_WdAssertion(v24);
    }
    SimulatedMonitor = MonitorDestroySimulatedMonitor(this, *((_DWORD *)a2 + 4), a3);
LABEL_20:
    LOBYTE(v26) = 1;
    v21 = SimulatedMonitor;
    DmmEnableModeResetOnMonitorEvent((PERESOURCE *)this, v26);
    return v21;
  }
  v20 = WdLogNewEntry5_WdWarning(v19, v16, v13);
  *(_QWORD *)(v20 + 24) = *((unsigned int *)a2 + 3);
  *(_QWORD *)(v20 + 32) = a2;
  WdLogEvent5_WdWarning(v20);
  return (unsigned int)-1073741811;
}
