/*
 * XREFs of ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004CF0
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003A80 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x1C0003FF0 (imp_WdfRequestForwardToIoQueue.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00042E0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0004AC0 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x1C00080F8 (-DispatchInternalEvents@FxIoQueue@@QEAAXE@Z.c)
 *     imp_WdfIoQueueStart @ 0x1C0061CE0 (imp_WdfIoQueueStart.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C0062B40 (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?DeferredDispatchRequestsFromDpc@FxIoQueue@@QEAAXXZ @ 0x1C0063B28 (-DeferredDispatchRequestsFromDpc@FxIoQueue@@QEAAXXZ.c)
 *     ?DeferredDispatchRequestsFromWorkerThread@FxIoQueue@@QEAAXXZ @ 0x1C0063BB8 (-DeferredDispatchRequestsFromWorkerThread@FxIoQueue@@QEAAXXZ.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x1C0063C50 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     ?FlushByFileObject@FxIoQueue@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C0063DF0 (-FlushByFileObject@FxIoQueue@@QEAAXPEAU_FILE_OBJECT@@@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C00658E8 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0065D48 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C006612C (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0066300 (-ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0066618 (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x1C0066984 (-StartPowerTransitionOff@FxIoQueue@@QEAAXXZ.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0066A68 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 * Callees:
 *     ?GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z @ 0x1C00035CC (-GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C00050F0 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C0007508 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x1C00088EC (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 *     ?IoIncrementWithFlags@FxPowerIdleMachine@@QEAAJW4FxPowerReferenceFlags@@PEAK@Z @ 0x1C0008A08 (-IoIncrementWithFlags@FxPowerIdleMachine@@QEAAJW4FxPowerReferenceFlags@@PEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_ql @ 0x1C00190DC (WPP_IFR_SF_ql.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0046CA0 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0046FB8 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C0047A7C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C0064574 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z @ 0x1C0064950 (-ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x1C0064AEC (-ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C0064C6C (-ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C0064D34 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C00655B4 (-ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z @ 0x1C006567C (-ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qcq @ 0x1C00670C0 (WPP_IFR_SF_qcq.c)
 */

unsigned __int8 __fastcall FxIoQueue::DispatchEvents(
        FxIoQueue *this,
        unsigned __int8 PreviousIrql,
        FxRequest *NewRequest,
        unsigned __int16 a4)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  FxCallbackLock *m_CallbackLockPtr; // rcx
  const _GUID *v7; // r8
  int v8; // edi
  FxIoQueuePowerState m_PowerState; // edx
  _FX_IO_QUEUE_STATE m_QueueState; // edx
  _WDF_IO_QUEUE_DISPATCH_TYPE m_Type; // eax
  FxRequest *NextRequest; // rsi
  _LIST_ENTRY *p_m_OwnerListEntry2; // rcx
  _LIST_ENTRY *Blink; // rdx
  FxVerifierLock **p_m_DbgFlagIsInitialized; // rdi
  unsigned __int64 *p_m_Lock; // r14
  unsigned __int8 v17; // r8
  __int64 v19; // rdx
  FxDeviceBase *m_DeviceBase; // rax
  FxPowerIdleMachine *v21; // rdi
  int v22; // eax
  FxTagTracker *m_TagTracker; // rcx
  int v24; // r14d
  const void *id; // rdx
  bool v26; // zf
  struct _KTHREAD *level; // rcx
  FxSystemWorkItem *m_SystemWorkItem; // rcx
  const void *v29; // rcx
  FxSystemWorkItem *v30; // rcx
  struct _KTHREAD *CurrentThread; // rax
  const void *v32; // rcx
  int inserted; // eax
  unsigned __int8 v34; // al
  int v35; // eax
  unsigned __int8 v36; // al
  const void *v37; // rcx
  int v38; // eax
  unsigned __int8 v39; // dl
  int v40; // eax
  int v41; // eax
  const void *v42; // rcx
  FxVerifierLock *v43; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-40h]
  unsigned int Count; // [rsp+80h] [rbp+20h] BYREF
  unsigned __int8 flags; // [rsp+88h] [rbp+28h] BYREF
  FxRequest *pRequest; // [rsp+90h] [rbp+30h] BYREF

  pRequest = NewRequest;
  flags = PreviousIrql;
  m_Globals = this->m_Globals;
  if ( this->m_Deleted )
  {
    FxNonPagedObject::Unlock(this, flags);
    return 0;
  }
  if ( flags && this->m_PassiveLevel )
  {
    id = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v26 = this->m_ObjectSize == 0;
    level = KeGetCurrentThread();
    if ( v26 )
      id = 0LL;
    WPP_IFR_SF_qcq(this->m_Globals, (unsigned __int8)id, (unsigned int)NewRequest, a4, traceGuid, level, flags, id);
    if ( !this->m_WorkItemQueued )
    {
      m_SystemWorkItem = this->m_SystemWorkItem;
      this->m_WorkItemQueued = 1;
      if ( !FxSystemWorkItem::EnqueueWorker(m_SystemWorkItem, FxIoQueue::_DeferredDispatchThreadThunk, this, 1u) )
        this->m_WorkItemQueued = 0;
    }
    goto LABEL_68;
  }
  m_CallbackLockPtr = this->m_CallbackLockPtr;
  if ( !m_CallbackLockPtr || !m_CallbackLockPtr->IsOwner(m_CallbackLockPtr) )
  {
    ++this->m_Dispatching;
    v7 = WPP_FxIoQueue_cpp_Traceguids;
    if ( m_Globals->FxVerboseOn )
    {
      CurrentThread = KeGetCurrentThread();
      v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v32 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x2Fu, WPP_FxIoQueue_cpp_Traceguids, CurrentThread, v32);
      v7 = WPP_FxIoQueue_cpp_Traceguids;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v8 = (pRequest != 0LL) + this->m_Queue.m_RequestCount + this->m_DriverIoCount;
            if ( this->m_Cancelled.Flink == &this->m_Cancelled )
              break;
            if ( pRequest )
            {
              inserted = FxIoQueue::InsertNewRequestLocked(this, &pRequest, flags);
              v7 = WPP_FxIoQueue_cpp_Traceguids;
              if ( inserted < 0 )
                continue;
            }
            v34 = FxIoQueue::ProcessCancelledRequests(this, &flags);
            v7 = WPP_FxIoQueue_cpp_Traceguids;
            if ( !v34 )
              break;
          }
          if ( this->m_CanceledOnQueueList.Flink == &this->m_CanceledOnQueueList )
            break;
          if ( pRequest )
          {
            v35 = FxIoQueue::InsertNewRequestLocked(this, &pRequest, flags);
            v7 = WPP_FxIoQueue_cpp_Traceguids;
            if ( v35 < 0 )
              continue;
          }
          v36 = FxIoQueue::ProcessCancelledRequestsOnQueue(this, &flags);
          v7 = WPP_FxIoQueue_cpp_Traceguids;
          if ( !v36 )
            break;
        }
        if ( this->m_IdleComplete.Method && this->m_Dispatching == 1 && !this->m_DriverIoCount )
        {
          if ( pRequest )
            FxIoQueue::InsertNewRequestLocked(this, &pRequest, flags);
          this->m_CancelDispatchedRequests = 0;
          FxIoQueue::ProcessIdleComplete(this, &flags);
          goto LABEL_38;
        }
        if ( this->m_PurgeComplete.Method && !v8 && this->m_Dispatching == 1 )
        {
          if ( pRequest )
            FxIoQueue::InsertNewRequestLocked(this, &pRequest, flags);
          this->m_CancelDispatchedRequests = 0;
          FxIoQueue::ProcessPurgeComplete(this, &flags);
          goto LABEL_38;
        }
        if ( this->m_IsDevicePowerPolicyOwner
          && this->m_PowerManaged
          && this->m_PowerReferenced
          && !v8
          && this->m_Dispatching == 1 )
        {
          FxPowerIdleMachine::IoDecrement(
            *(FxPowerIdleMachine **)(*(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 888LL),
            0LL,
            0,
            0LL);
          this->m_PowerReferenced = 0;
          goto LABEL_38;
        }
        m_PowerState = this->m_PowerState;
        if ( (unsigned int)(m_PowerState - 1) <= 1 )
          break;
        if ( m_Globals->FxVerboseOn )
        {
          v37 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v37 = 0LL;
          WPP_IFR_SF_ql(m_Globals, 5u, 0xDu, 0x30u, WPP_FxIoQueue_cpp_Traceguids, v37, m_PowerState);
        }
        if ( pRequest )
        {
          v38 = FxIoQueue::InsertNewRequestLocked(this, &pRequest, flags);
          v7 = WPP_FxIoQueue_cpp_Traceguids;
          if ( v38 < 0 )
            continue;
        }
        if ( !FxIoQueue::ProcessPowerEvents(this, &flags) )
          goto $Done_0;
        goto LABEL_38;
      }
      if ( this->m_Disposing && !v8 && this->m_Dispatching == 1 )
      {
        v39 = flags;
        this->m_Deleted = 1;
        FxNonPagedObject::Unlock(this, v39);
        KeSetEvent(&this->m_FinishDisposing.m_Event, 0, 0);
        return 1;
      }
      if ( this->m_PowerState == FxIoQueuePowerOff )
        goto LABEL_40;
      m_QueueState = this->m_QueueState;
      if ( (m_QueueState & 2) == 0 )
        break;
      m_Type = this->m_Type;
      if ( m_Type == WdfIoQueueDispatchManual )
      {
        if ( !pRequest
          || (v40 = FxIoQueue::InsertNewRequestLocked(this, &pRequest, flags),
              v7 = WPP_FxIoQueue_cpp_Traceguids,
              v40 >= 0) )
        {
          if ( !this->m_ReadyNotify.Method || !this->m_TransitionFromEmpty )
          {
$Done_0:
            --this->m_Dispatching;
            if ( SLOBYTE(this->m_ObjectFlags) < 0
              && (v43 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
            {
              FxVerifierLock::Unlock(v43, flags, (unsigned __int8)v7);
            }
            else
            {
              KeReleaseSpinLock(&this->m_NPLock.m_Lock, flags);
            }
            return 1;
          }
          FxIoQueue::ProcessReadyNotify(this, &flags);
LABEL_38:
          v7 = WPP_FxIoQueue_cpp_Traceguids;
        }
      }
      else
      {
        if ( m_Type == WdfIoQueueDispatchSequential && this->m_DriverIoCount > 0
          || this->m_Type == WdfIoQueueDispatchParallel
          && this->m_DriverIoCount >= this->m_MaxParallelQueuePresentedRequests )
        {
          goto LABEL_40;
        }
        if ( this->m_Queue.m_RequestCount > 0
          && (NextRequest = (FxRequest *)FxRequest::GetNextRequest(&this->m_Queue)) != 0LL )
        {
          if ( pRequest )
            FxIoQueue::InsertNewRequestLocked(this, &pRequest, flags);
        }
        else
        {
          NextRequest = pRequest;
          if ( !pRequest )
            goto $Done_0;
          pRequest->m_IoQueue = this;
          this->m_TransitionFromEmpty = 1;
          this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
          if ( this->m_IsDevicePowerPolicyOwner && this->m_PowerManaged && !this->m_PowerReferenced )
          {
            v19 = *(_QWORD *)(*(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 888LL);
            if ( v19 )
              _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 748), 11, 5);
            m_DeviceBase = this->m_DeviceBase;
            Count = 0;
            v21 = *(FxPowerIdleMachine **)(*(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 888LL);
            v22 = FxPowerIdleMachine::IoIncrementWithFlags(v21, FxPowerReferenceDefault, &Count);
            m_TagTracker = v21->m_TagTracker;
            v24 = v22;
            if ( m_TagTracker && (!v22 || v22 == 259) )
              FxTagTracker::UpdateTagHistory(m_TagTracker, 0LL, 0, 0LL, TagAddRef, Count);
            if ( v24 >= 0 )
              this->m_PowerReferenced = 1;
          }
          pRequest = 0LL;
        }
        p_m_OwnerListEntry2 = &NextRequest->m_OwnerListEntry2;
        ++this->m_DriverIoCount;
        Blink = this->m_DriverOwned.Blink;
        if ( Blink->Flink != &this->m_DriverOwned )
          __fastfail(3u);
        p_m_OwnerListEntry2->Flink = &this->m_DriverOwned;
        p_m_DbgFlagIsInitialized = (FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized;
        NextRequest->m_OwnerListEntry2.Blink = Blink;
        Blink->Flink = p_m_OwnerListEntry2;
        this->m_DriverOwned.Blink = p_m_OwnerListEntry2;
        if ( SLOBYTE(this->m_ObjectFlags) < 0 && *p_m_DbgFlagIsInitialized )
        {
          FxVerifierLock::Unlock(*p_m_DbgFlagIsInitialized, flags, (unsigned __int8)v7);
          p_m_Lock = &this->m_NPLock.m_Lock;
        }
        else
        {
          p_m_Lock = &this->m_NPLock.m_Lock;
          KeReleaseSpinLock(&this->m_NPLock.m_Lock, flags);
        }
        FxIoQueue::DispatchRequestToDriver(this, NextRequest);
        if ( SLOBYTE(this->m_ObjectFlags) < 0 && *p_m_DbgFlagIsInitialized )
        {
          FxVerifierLock::Lock(*p_m_DbgFlagIsInitialized, &flags, v17);
          goto LABEL_38;
        }
        flags = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
        v7 = WPP_FxIoQueue_cpp_Traceguids;
      }
    }
    v42 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v42 = 0LL;
    WPP_IFR_SF_ql(m_Globals, 3u, 0xDu, 0x31u, WPP_FxIoQueue_cpp_Traceguids, v42, m_QueueState);
LABEL_40:
    if ( !pRequest )
      goto $Done_0;
    v41 = FxIoQueue::InsertNewRequestLocked(this, &pRequest, flags);
    if ( v41 >= 0 )
      goto $Done_0;
    goto LABEL_38;
  }
  v29 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    v29 = 0LL;
  WPP_IFR_SF_q(this->m_Globals, 3u, 0xDu, 0x2Eu, WPP_FxIoQueue_cpp_Traceguids, v29);
  if ( this->m_PassiveLevel )
  {
    if ( !this->m_WorkItemQueued )
    {
      v30 = this->m_SystemWorkItem;
      this->m_WorkItemQueued = 1;
      if ( !FxSystemWorkItem::EnqueueWorker(v30, FxIoQueue::_DeferredDispatchThreadThunk, this, 1u) )
        this->m_WorkItemQueued = 0;
    }
  }
  else if ( !this->m_DpcQueued )
  {
    this->m_DpcQueued = 1;
    KeInsertQueueDpc(&this->m_Dpc, 0LL, 0LL);
  }
LABEL_68:
  v26 = pRequest == 0LL;
  this->m_RequeueDeferredDispatcher = 1;
  if ( !v26 )
    FxIoQueue::InsertNewRequestLocked(this, &pRequest, flags);
  FxNonPagedObject::Unlock(this, flags);
  return 1;
}
