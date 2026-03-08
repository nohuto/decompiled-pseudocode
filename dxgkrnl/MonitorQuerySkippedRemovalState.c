/*
 * XREFs of MonitorQuerySkippedRemovalState @ 0x1C03BFE44
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C001BFA0 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_QuerySkippedRemovalState@MONITOR_MGR@@QEAAJIPEAE@Z @ 0x1C03C3FC0 (-_QuerySkippedRemovalState@MONITOR_MGR@@QEAAJIPEAE@Z.c)
 */

__int64 __fastcall MonitorQuerySkippedRemovalState(__int64 a1, unsigned int a2, unsigned __int8 *a3)
{
  __int64 v6; // rax
  MONITOR_MGR *v8; // rcx

  if ( !a1 || a2 == -1 || !a3 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
    WdLogSingleEntry0(1LL);
  v6 = *(_QWORD *)(a1 + 2920);
  if ( !v6 || (v8 = *(MONITOR_MGR **)(v6 + 112)) == 0LL )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3221225485LL;
  }
  return MONITOR_MGR::_QuerySkippedRemovalState(v8, a2, a3);
}
