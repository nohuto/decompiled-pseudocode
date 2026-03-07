void __fastcall FxIoQueue::ProcessAcknowledgedRequests(
        FxIoQueue *this,
        FxRequest *Request,
        unsigned __int8 *PreviousIrql)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned __int8 m_PowerStopState; // r14
  const void *level; // rax
  const void *flags; // rdx
  unsigned __int16 v10; // r9
  const char *id; // rcx
  _LIST_ENTRY *p_m_OwnerListEntry2; // rax
  _LIST_ENTRY *Blink; // rdx
  unsigned __int8 v14; // r8
  unsigned __int8 v15; // r8
  unsigned int *v16; // r8
  const _GUID *v17; // [rsp+20h] [rbp-28h]

  m_Globals = this->m_Globals;
  m_PowerStopState = Request->m_PowerStopState;
  if ( m_Globals->FxVerboseOn )
  {
    FxObject::GetObjectHandleUnchecked(this);
    level = (const void *)FxObject::GetObjectHandleUnchecked(Request);
    id = "with";
    if ( m_PowerStopState != 2 )
      id = "without";
    WPP_IFR_SF_qqs(m_Globals, (unsigned __int8)flags, (unsigned int)"without", v10, v17, level, flags, id);
  }
  Request->m_PowerStopState = 0;
  p_m_OwnerListEntry2 = &Request->m_OwnerListEntry2;
  Request->m_OwnerListEntry2.Blink = &Request->m_OwnerListEntry2;
  Request->m_OwnerListEntry2.Flink = &Request->m_OwnerListEntry2;
  Blink = this->m_DriverOwned.Blink;
  if ( Blink->Flink != &this->m_DriverOwned )
    __fastfail(3u);
  p_m_OwnerListEntry2->Flink = &this->m_DriverOwned;
  Request->m_OwnerListEntry2.Blink = Blink;
  Blink->Flink = p_m_OwnerListEntry2;
  this->m_DriverOwned.Blink = p_m_OwnerListEntry2;
  if ( m_Globals->FxVerifierOn )
    FxObject::AddRef(
      Request,
      (void *)0x646C6F48,
      5702,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  FxNonPagedObject::Unlock(this, *PreviousIrql, (unsigned __int8)PreviousIrql);
  if ( m_Globals->FxVerifierOn )
  {
    FxRequestBase::ClearVerifierFlags(Request, 512, v14);
    Request->Release(
      Request,
      (void *)1684827976,
      5709,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  }
  if ( m_PowerStopState == 2 )
  {
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::ClearVerifierFlags(Request, 9, v14);
    FxObject::AddRef(
      Request,
      (void *)0x74617453,
      5733,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxRequest::SetCompletionState(Request, FxRequestCompletionStateNone);
    FxNonPagedObject::Lock(this, PreviousIrql, v15);
    FxIoQueue::RemoveFromDriverOwnedList(this, Request);
    if ( !this->m_CancelDispatchedRequests && FxRequest::InsertHeadIrpQueue(Request, &this->m_Queue, v16) >= 0 )
    {
      FxIoQueue::CheckTransitionFromEmpty(this);
      return;
    }
    FxObject::AddRef(
      Request,
      (void *)0x75657551,
      5777,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxIoQueue::CancelForQueue(this, Request, *PreviousIrql);
  }
  FxNonPagedObject::Lock(this, PreviousIrql, v14);
}
