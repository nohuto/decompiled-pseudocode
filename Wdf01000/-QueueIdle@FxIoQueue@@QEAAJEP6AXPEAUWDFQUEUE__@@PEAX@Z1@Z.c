/*
 * XREFs of ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C00658E8
 * Callers:
 *     imp_WdfIoQueueStop @ 0x1C0061D60 (imp_WdfIoQueueStop.c)
 *     imp_WdfIoQueueStopAndPurge @ 0x1C0061DD0 (imp_WdfIoQueueStopAndPurge.c)
 *     ?QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z @ 0x1C0065C54 (-QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z.c)
 * Callees:
 *     ?GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z @ 0x1C00035CC (-GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004CF0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV1@@Z @ 0x1C00074A0 (-PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     ?IsCancelled@FxRequest@@QEAAEXZ @ 0x1C0034C60 (-IsCancelled@FxRequest@@QEAAEXZ.c)
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C003AB50 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0063628 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C00636B4 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0063874 (-CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C00667A8 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     ?GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z @ 0x1C0067638 (-GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z.c)
 */

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
