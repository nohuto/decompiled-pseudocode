__int64 __fastcall FxIoQueue::QueueIdle(
        FxIoQueue *this,
        unsigned __int8 CancelRequests,
        void (__fastcall *IdleComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  const void *_a1; // rax
  unsigned int v10; // r14d
  unsigned __int8 v11; // r8
  const void *ObjectHandleUnchecked; // rax
  __int64 _a2; // rdx
  unsigned __int8 v15; // r8
  FxRequest *v16; // rdi
  FxRequest *v17; // rcx
  unsigned __int8 v18; // r8
  _IRP *NextRequest; // rax
  unsigned __int8 v20; // r8
  FxRequest *v21; // r14
  FxRequest *v22; // rcx
  unsigned int *v23; // r8
  const void *v24; // rax
  const void *v25; // rdx
  const void *v26; // rax
  unsigned __int8 v27; // r8
  _IRP *v28; // rax
  unsigned __int8 v29; // r8
  FxRequest *v30; // r14
  unsigned __int8 v31; // dl
  unsigned __int8 v32; // r8
  const void *v33; // rax
  FxIoQueue *v34; // rcx
  unsigned __int16 v35; // r9
  FxRequest *request; // [rsp+40h] [rbp-20h] BYREF
  _LIST_ENTRY fwrIrpList; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int8 irql; // [rsp+80h] [rbp+20h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  fwrIrpList = 0LL;
  FxNonPagedObject::Lock(this, &irql, (unsigned __int8)IdleComplete);
  if ( this->m_Deleted )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v10 = -1073741738;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x40u, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741738);
LABEL_6:
    FxNonPagedObject::Unlock(this, irql, v11);
    return v10;
  }
  if ( IdleComplete )
  {
    if ( this->m_IdleComplete.Method )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v10 = -1073741808;
      WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0x41u, WPP_FxIoQueue_cpp_Traceguids, ObjectHandleUnchecked, _a2, -1073741808);
      goto LABEL_6;
    }
    this->m_IdleComplete.Method = IdleComplete;
    this->m_IdleCompleteContext = Context;
  }
  FxIoQueue::SetState(this, FxIoQueueClearDispatchRequests|0x1);
  if ( CancelRequests )
  {
    v16 = 0LL;
    this->m_CancelDispatchedRequests = 1;
    request = 0LL;
    while ( !(unsigned int)FxRequest::PeekRequest(&this->m_Queue, v16, 0LL, 0LL, &request) )
    {
      v16 = request;
      v17 = request;
      request->m_Canceled = 1;
      v17->Release(v17, 0LL, 3723, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    }
    if ( this->m_SupportForwardProgress )
    {
      fwrIrpList.Blink = &fwrIrpList;
      fwrIrpList.Flink = &fwrIrpList;
      FxIoQueue::GetForwardProgressIrps(this, &fwrIrpList, 0LL);
    }
  }
  FxNonPagedObject::Unlock(this, irql, v15);
  if ( CancelRequests )
  {
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v18);
      NextRequest = FxRequest::GetNextRequest(&this->m_Queue);
      v21 = (FxRequest *)NextRequest;
      if ( !NextRequest )
        break;
      if ( !FxRequest::IsCancelled((FxRequest *)NextRequest)
        && FxRequest::InsertHeadIrpQueue(v22, &this->m_Queue, v23) >= 0 )
      {
        goto LABEL_21;
      }
      FxObject::GetObjectHandleUnchecked(this);
      v24 = (const void *)FxObject::GetObjectHandleUnchecked(v21);
      WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x43u, WPP_FxIoQueue_cpp_Traceguids, v24, v25);
      FxObject::AddRef(
        v21,
        (void *)0x75657551,
        3782,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForQueue(this, v21, irql);
    }
    if ( m_Globals->FxVerboseOn )
    {
      v26 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x42u, WPP_FxIoQueue_cpp_Traceguids, v26);
    }
LABEL_21:
    FxNonPagedObject::Unlock(this, irql, v20);
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v27);
      v28 = FxRequest::GetNextRequest(&this->m_DriverCancelable);
      v30 = (FxRequest *)v28;
      if ( !v28 )
        break;
      v31 = irql;
      *((_BYTE *)&v28[1].Size + 5) = 1;
      FxNonPagedObject::Unlock(this, v31, v29);
      FxObject::AddRef(
        v30,
        (void *)0x75657551,
        3823,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForDriver(this, v30, v32);
    }
    if ( m_Globals->FxVerboseOn )
    {
      v33 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x44u, WPP_FxIoQueue_cpp_Traceguids, v33);
    }
    FxNonPagedObject::Unlock(this, irql, v29);
    if ( this->m_SupportForwardProgress )
      FxIoQueue::CancelIrps(v34, &fwrIrpList);
  }
  FxNonPagedObject::Lock(this, &irql, v18);
  FxIoQueue::DispatchEvents(this, irql, 0LL, v35);
  return 0LL;
}
