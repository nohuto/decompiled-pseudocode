/*
 * XREFs of MonitorCreateMonitorManager @ 0x1C0185CA0
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C018850C (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1C0022850 (--0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     ??_GMONITOR_MGR@@QEAAPEAXI@Z @ 0x1C005DE10 (--_GMONITOR_MGR@@QEAAPEAXI@Z.c)
 *     ?_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ @ 0x1C0185D3C (-_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ.c)
 */

__int64 __fastcall MonitorCreateMonitorManager(struct ADAPTER_DISPLAY *a1, MONITOR_MGR **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  MONITOR_MGR *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  MONITOR_MGR *v9; // rbx
  __int64 result; // rax
  unsigned int v11; // esi
  __int64 v12; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2) + 24) = a1;
  if ( !a1 || !a2 )
  {
    v12 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v12 + 24) = a1;
    *(_QWORD *)(v12 + 32) = a2;
    goto LABEL_12;
  }
  *a2 = 0LL;
  v6 = (MONITOR_MGR *)operator new[](0x308uLL, 0x4D677844u, (POOL_TYPE)512);
  if ( v6 )
    v9 = MONITOR_MGR::MONITOR_MGR(v6, a1);
  else
    v9 = 0LL;
  if ( !v9 )
  {
    v12 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v12 + 24) = *((_QWORD *)a1 + 2);
LABEL_12:
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  result = MONITOR_MGR::_InitializeMonitorManager(v9);
  v11 = result;
  if ( (int)result < 0 )
  {
    MONITOR_MGR::`scalar deleting destructor'(v9);
    return v11;
  }
  else
  {
    *a2 = v9;
  }
  return result;
}
