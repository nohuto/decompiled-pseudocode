/*
 * XREFs of MonitorCancelSkippedDepartures @ 0x1C0200D8C
 * Callers:
 *     DpiPdoHandleChildConnectionChange @ 0x1C02009DC (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_CancelSkippedDepartures@MONITOR_MGR@@QEAAJI@Z @ 0x1C0200E08 (-_CancelSkippedDepartures@MONITOR_MGR@@QEAAJI@Z.c)
 */

__int64 __fastcall MonitorCancelSkippedDepartures(PERESOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  PERESOURCE v7; // rax
  MONITOR_MGR *Blink; // rcx

  v4 = (unsigned int)a2;
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = v4;
  *(_QWORD *)(v6 + 32) = this;
  if ( this && (_DWORD)v4 != -1 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
      WdLogSingleEntry0(1LL);
    v7 = this[365];
    if ( v7 )
    {
      Blink = (MONITOR_MGR *)v7[1].SystemResourcesList.Blink;
      if ( Blink )
        return MONITOR_MGR::_CancelSkippedDepartures(Blink, v4);
    }
    WdLogSingleEntry1(2LL, this);
  }
  return 3221225485LL;
}
