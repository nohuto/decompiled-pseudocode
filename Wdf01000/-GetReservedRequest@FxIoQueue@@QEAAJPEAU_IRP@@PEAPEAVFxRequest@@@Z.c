__int64 __fastcall FxIoQueue::GetReservedRequest(FxIoQueue *this, _IRP *Irp, FxRequest **ReservedRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned int v5; // esi
  _FXIO_FORWARD_PROGRESS_CONTEXT *m_FwdProgContext; // rdx
  int v9; // edx
  const void *_a1; // rax
  int v11; // edx
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 (__fastcall *v13)(unsigned __int64, _IRP *); // r8
  const void *v14; // rax
  int v15; // edx
  KIRQL v17; // r12
  _LIST_ENTRY *p_m_ReservedRequestList; // rcx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v20; // rdx
  FxRequest *v21; // rbp
  _LIST_ENTRY *p_m_ReservedRequestInUseList; // rcx
  _LIST_ENTRY *Blink; // rdx
  FxRequestBase *v24; // rcx
  unsigned __int8 v25; // r8

  m_Globals = this->m_Globals;
  v5 = 0;
  m_FwdProgContext = this->m_FwdProgContext;
  *ReservedRequest = 0LL;
  switch ( m_FwdProgContext->m_Policy )
  {
    case WdfIoForwardProgressReservedPolicyAlwaysUseReservedRequest:
      goto LABEL_14;
    case WdfIoForwardProgressReservedPolicyUseExamine:
      if ( !m_FwdProgContext->m_IoExamineIrp.Method )
        goto LABEL_14;
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
      v9 = v13(ObjectHandleUnchecked, Irp);
      if ( (unsigned int)(v9 - 1) > 1 )
      {
        v14 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qdd(m_Globals, 2u, 0xDu, 0xAu, WPP_FxIoQueueKm_cpp_Traceguids, v14, v15, 0xC0000001);
        FxVerifierDbgBreakPoint(m_Globals);
        return 3221225473LL;
      }
      break;
    case WdfIoForwardProgressReservedPolicyPagingIO:
      if ( (Irp->Flags & 2) == 0 || Irp->Tail.Overlay.CurrentStackLocation->MajorFunction == 13 )
        v9 = 1;
      else
        v9 = 2;
      break;
    default:
      goto LABEL_14;
  }
  if ( v9 == 1 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qid(m_Globals, 2u, v11 + 12, v11 + 10, WPP_FxIoQueueKm_cpp_Traceguids, _a1, (__int64)Irp, -1073741823);
    return 3221225473LL;
  }
LABEL_14:
  v17 = KeAcquireSpinLockRaiseToDpc(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock);
  p_m_ReservedRequestList = &this->m_FwdProgContext->m_ReservedRequestList;
  Flink = p_m_ReservedRequestList->Flink;
  if ( p_m_ReservedRequestList->Flink == p_m_ReservedRequestList )
  {
    v5 = FxIoQueue::QueueForwardProgressIrpLocked(this, Irp);
  }
  else
  {
    if ( Flink->Blink != p_m_ReservedRequestList
      || (v20 = Flink->Flink, Flink->Flink->Blink != Flink)
      || (p_m_ReservedRequestList->Flink = v20,
          v21 = (FxRequest *)&Flink[-20],
          v20->Blink = p_m_ReservedRequestList,
          p_m_ReservedRequestInUseList = &this->m_FwdProgContext->m_ReservedRequestInUseList,
          Blink = this->m_FwdProgContext->m_ReservedRequestInUseList.Blink,
          Blink->Flink != p_m_ReservedRequestInUseList) )
    {
      __fastfail(3u);
    }
    Flink->Flink = p_m_ReservedRequestInUseList;
    Flink->Blink = Blink;
    Blink->Flink = Flink;
    p_m_ReservedRequestInUseList->Blink = Flink;
    v21->m_Irp.m_Irp = Irp;
    FxRequest::AssignMemoryBuffers((FxRequest *)&Flink[-20], (_WDF_DEVICE_IO_TYPE)this->m_DeviceBase[1].m_Refcnt);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v24, 1024, v25);
    *ReservedRequest = v21;
  }
  KeReleaseSpinLock(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock, v17);
  return v5;
}
