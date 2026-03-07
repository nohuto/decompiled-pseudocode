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
