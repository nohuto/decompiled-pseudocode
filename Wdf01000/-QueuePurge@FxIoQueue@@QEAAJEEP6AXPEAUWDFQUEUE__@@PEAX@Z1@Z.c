/*
 * XREFs of ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0065D48
 * Callers:
 *     imp_WdfIoQueueDrain @ 0x1C0061980 (imp_WdfIoQueueDrain.c)
 *     imp_WdfIoQueuePurge @ 0x1C0061A50 (imp_WdfIoQueuePurge.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x1C0063C50 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     ?QueueDrainSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C00657E8 (-QueueDrainSynchronously@FxIoQueue@@QEAAJXZ.c)
 *     ?QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C006602C (-QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0066A68 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0001F2C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z @ 0x1C00035CC (-GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004CF0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0063628 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C00636B4 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C006575C (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C00667A8 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 */

__int64 __fastcall FxIoQueue::QueuePurge(
        FxIoQueue *this,
        unsigned __int8 CancelQueueRequests,
        unsigned __int8 CancelDriverRequests,
        void (__fastcall *PurgeComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *_a1; // rax
  unsigned int v11; // r14d
  unsigned __int8 v12; // r8
  const void *ObjectHandleUnchecked; // rax
  __int64 _a2; // rdx
  unsigned int v16; // edx
  unsigned __int8 v17; // r8
  unsigned __int8 v18; // r8
  unsigned __int8 v19; // r8
  FxRequest *NextRequest; // r14
  const void *v21; // rax
  const void *v22; // rdx
  const void *v23; // rax
  _IRP *v24; // rax
  unsigned __int8 v25; // r8
  FxRequest *v26; // r14
  unsigned __int8 v27; // dl
  unsigned __int8 v28; // r8
  const void *v29; // rax
  unsigned __int16 v30; // r9
  unsigned __int8 irql; // [rsp+70h] [rbp+30h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  FxNonPagedObject::Lock(this, &irql, CancelDriverRequests);
  if ( this->m_Deleted )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v11 = -1073741738;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x46u, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741738);
LABEL_6:
    FxNonPagedObject::Unlock(this, irql, v12);
    return v11;
  }
  if ( PurgeComplete )
  {
    if ( this->m_PurgeComplete.Method )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v11 = -1073741808;
      WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0x47u, WPP_FxIoQueue_cpp_Traceguids, ObjectHandleUnchecked, _a2, -1073741808);
      goto LABEL_6;
    }
    this->m_PurgeCompleteContext = Context;
    this->m_PurgeComplete.Method = PurgeComplete;
  }
  FxIoQueue::SetState(this, FxIoQueueClearAcceptRequests);
  if ( CancelQueueRequests
    && CancelDriverRequests
    && _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v16, 0xBu) )
  {
    this->m_CancelDispatchedRequests = 1;
  }
  FxNonPagedObject::Unlock(this, irql, v17);
  if ( CancelQueueRequests )
  {
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v18);
      NextRequest = (FxRequest *)FxRequest::GetNextRequest(&this->m_Queue);
      if ( !NextRequest )
        break;
      FxObject::GetObjectHandleUnchecked(this);
      v21 = (const void *)FxObject::GetObjectHandleUnchecked(NextRequest);
      WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x49u, WPP_FxIoQueue_cpp_Traceguids, v21, v22);
      FxObject::AddRef(
        NextRequest,
        (void *)0x75657551,
        4048,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForQueue(this, NextRequest, irql);
    }
    if ( m_Globals->FxVerboseOn )
    {
      v23 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x48u, WPP_FxIoQueue_cpp_Traceguids, v23);
    }
    FxNonPagedObject::Unlock(this, irql, v19);
  }
  if ( CancelDriverRequests )
  {
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v18);
      v24 = FxRequest::GetNextRequest(&this->m_DriverCancelable);
      v26 = (FxRequest *)v24;
      if ( !v24 )
        break;
      v27 = irql;
      *((_BYTE *)&v24[1].Size + 5) = 1;
      FxNonPagedObject::Unlock(this, v27, v25);
      FxObject::AddRef(
        v26,
        (void *)0x75657551,
        4093,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForDriver(this, v26, v28);
    }
    if ( m_Globals->FxVerboseOn )
    {
      v29 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x4Au, WPP_FxIoQueue_cpp_Traceguids, v29);
    }
    FxNonPagedObject::Unlock(this, irql, v25);
  }
  if ( this->m_SupportForwardProgress )
    FxIoQueue::PurgeForwardProgressIrps(this, 0LL);
  FxNonPagedObject::Lock(this, &irql, v18);
  FxIoQueue::DispatchEvents(this, irql, 0LL, v30);
  return 0LL;
}
