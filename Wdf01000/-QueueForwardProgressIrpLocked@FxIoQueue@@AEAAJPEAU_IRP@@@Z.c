/*
 * XREFs of ?QueueForwardProgressIrpLocked@FxIoQueue@@AEAAJPEAU_IRP@@@Z @ 0x1C0067990
 * Callers:
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C00676D4 (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxIoQueue::QueueForwardProgressIrpLocked(FxIoQueue *this, _IRP *Irp)
{
  _LIST_ENTRY *p_ListEntry; // r8
  _LIST_ENTRY *p_m_PendedIrpList; // rax
  _LIST_ENTRY *Blink; // r9
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v6; // rax
  __int64 result; // rax

  p_ListEntry = &Irp->Tail.Overlay.ListEntry;
  p_m_PendedIrpList = &this->m_FwdProgContext->m_PendedIrpList;
  Blink = this->m_FwdProgContext->m_PendedIrpList.Blink;
  if ( Blink->Flink != p_m_PendedIrpList )
    goto LABEL_8;
  p_ListEntry->Flink = p_m_PendedIrpList;
  Irp->Tail.Overlay.ListEntry.Blink = Blink;
  Blink->Flink = p_ListEntry;
  p_m_PendedIrpList->Blink = p_ListEntry;
  Irp->Tail.Overlay.DriverContext[3] = this->m_FwdProgContext;
  _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, (__int64)FxIoQueue::_WdmCancelRoutineForReservedIrp);
  if ( Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
  {
    Irp->Tail.Overlay.DriverContext[3] = 0LL;
    Flink = p_ListEntry->Flink;
    if ( p_ListEntry->Flink->Blink == p_ListEntry )
    {
      v6 = Irp->Tail.Overlay.ListEntry.Blink;
      if ( v6->Flink == p_ListEntry )
      {
        v6->Flink = Flink;
        Flink->Blink = v6;
        result = 3221225760LL;
        Irp->Tail.Overlay.ListEntry.Blink = &Irp->Tail.Overlay.ListEntry;
        p_ListEntry->Flink = p_ListEntry;
        return result;
      }
    }
LABEL_8:
    __fastfail(3u);
  }
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  return 259LL;
}
