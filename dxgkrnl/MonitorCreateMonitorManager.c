/*
 * XREFs of MonitorCreateMonitorManager @ 0x1C02162DC
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01F05EC (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1C0022E70 (--0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     ??_EMONITOR_MGR@@UEAAPEAXI@Z @ 0x1C006AEB0 (--_EMONITOR_MGR@@UEAAPEAXI@Z.c)
 *     ?_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ @ 0x1C0216378 (-_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ.c)
 */

__int64 __fastcall MonitorCreateMonitorManager(struct ADAPTER_DISPLAY *a1, MONITOR_MGR **a2, __int64 a3, __int64 a4)
{
  MONITOR_MGR *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  MONITOR_MGR *v9; // rax
  MONITOR_MGR *v10; // rsi
  __int64 result; // rax
  unsigned int v12; // edi

  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a1;
  if ( !a1 || !a2 )
  {
    WdLogSingleEntry2(2LL, a1, a2);
    return 3221225485LL;
  }
  *a2 = 0LL;
  v6 = (MONITOR_MGR *)operator new[](0x2A0uLL, 0x4D677844u, 64LL);
  if ( !v6 || (v9 = MONITOR_MGR::MONITOR_MGR(v6, a1, v7, v8), (v10 = v9) == 0LL) )
  {
    WdLogSingleEntry1(2LL, *((_QWORD *)a1 + 2));
    return 3221225485LL;
  }
  result = MONITOR_MGR::_InitializeMonitorManager(v9);
  v12 = result;
  if ( (int)result < 0 )
  {
    MONITOR_MGR::`vector deleting destructor'(v10, 1);
    return v12;
  }
  else
  {
    *a2 = v10;
  }
  return result;
}
