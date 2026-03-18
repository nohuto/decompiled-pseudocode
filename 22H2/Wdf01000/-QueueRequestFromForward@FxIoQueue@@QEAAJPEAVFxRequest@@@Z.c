/*
 * XREFs of ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0005488
 * Callers:
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C000B944 (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1C0076BFC (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x1C000532C (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C00053B0 (-InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008440 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005A978 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0075AB4 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C00774B4 (WPP_IFR_SF_qLsqd.c)
 */

__int64 __fastcall FxIoQueue::QueueRequestFromForward(FxIoQueue *this, FxRequest *pRequest, unsigned __int8 a3)
{
  char m_ObjectFlags; // al
  _IRP *m_QueueState; // r8
  unsigned __int8 m_IrpAllocation; // si
  int inserted; // eax
  FxVerifierLock *v10; // rcx
  const void *_a3; // rax
  const void *globals; // rdx
  unsigned int _a4; // r8d
  const char *_a5; // rcx
  const _GUID *v15; // [rsp+20h] [rbp-38h]
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_ObjectFlags = this->m_ObjectFlags;
  irql = 0;
  if ( m_ObjectFlags < 0 && (v10 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    FxVerifierLock::Lock(v10, &irql, a3);
  else
    irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  m_QueueState = (_IRP *)(unsigned int)this->m_QueueState;
  if ( ((unsigned __int8)m_QueueState & 1) != 0 )
  {
    m_IrpAllocation = pRequest->m_IrpAllocation;
    inserted = FxRequest::InsertTailIrpQueue(pRequest, &this->m_Queue, m_QueueState);
    pRequest->m_IoQueue = this;
    if ( inserted < 0 )
    {
      FxObject::AddRef(
        pRequest,
        (void *)0x75657551,
        2459,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForQueue(this, pRequest, irql);
      FxNonPagedObject::Lock(this, &irql);
    }
    else if ( this->m_Queue.m_RequestCount == 1 || this->m_ForceTransitionFromEmptyWhenAddingNewRequest )
    {
      FxIoQueue::SetTransitionFromEmpty(this);
    }
    if ( m_IrpAllocation && this->m_Dispatching )
      FxNonPagedObject::Unlock(this, irql);
    else
      FxIoQueue::DispatchEvents(this, irql, 0LL);
    return 0LL;
  }
  else
  {
    FxObject::GetObjectHandleUnchecked(pRequest);
    _a3 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    _a5 = "power stopping (Drain) in progress,";
    if ( (_a4 & 0x10000) == 0 )
      _a5 = a5;
    WPP_IFR_SF_qLsqd(this->m_Globals, 3u, _a4, 0x2Bu, v15, _a3, _a4, _a5, globals, -1071644156);
    FxNonPagedObject::Unlock(this, irql);
    return 3223323140LL;
  }
}
