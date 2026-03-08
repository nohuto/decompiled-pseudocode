/*
 * XREFs of ?FreeAllReservedRequests@FxIoQueue@@AEAAXE@Z @ 0x1C0067528
 * Callers:
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x1C0063C50 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     ?AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z @ 0x1C0067300 (-AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z.c)
 * Callees:
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C003A900 (-FreeRequest@FxRequest@@QEAAXXZ.c)
 */

void __fastcall FxIoQueue::FreeAllReservedRequests(FxIoQueue *this, unsigned __int8 Verify)
{
  KIRQL v3; // di
  _FXIO_FORWARD_PROGRESS_CONTEXT *m_FwdProgContext; // r8
  _LIST_ENTRY *p_m_ReservedRequestList; // rdx
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v7; // rax

  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock);
  while ( 1 )
  {
    m_FwdProgContext = this->m_FwdProgContext;
    p_m_ReservedRequestList = &m_FwdProgContext->m_ReservedRequestList;
    Flink = m_FwdProgContext->m_ReservedRequestList.Flink;
    if ( Flink == &m_FwdProgContext->m_ReservedRequestList )
      break;
    if ( Flink->Blink != p_m_ReservedRequestList || (v7 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    p_m_ReservedRequestList->Flink = v7;
    v7->Blink = p_m_ReservedRequestList;
    FxRequest::FreeRequest((FxRequest *)&Flink[-20]);
  }
  KeReleaseSpinLock(&m_FwdProgContext->m_PendedReserveLock.m_Lock, v3);
}
