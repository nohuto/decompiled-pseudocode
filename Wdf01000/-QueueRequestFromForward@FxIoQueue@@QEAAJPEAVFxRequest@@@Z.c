/*
 * XREFs of ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0004AC0
 * Callers:
 *     imp_WdfRequestForwardToIoQueue @ 0x1C0003FF0 (imp_WdfRequestForwardToIoQueue.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C00062F4 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1C000FB4E (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C006400C (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004CF0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?IoIncrementWithFlags@FxPowerIdleMachine@@QEAAJW4FxPowerReferenceFlags@@PEAK@Z @ 0x1C0008A08 (-IoIncrementWithFlags@FxPowerIdleMachine@@QEAAJW4FxPowerReferenceFlags@@PEAK@Z.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C0008D44 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0046CA0 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C0047A7C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C00636B4 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C0066F04 (WPP_IFR_SF_qLsqd.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00BA490 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 */

__int64 __fastcall FxIoQueue::QueueRequestFromForward(FxIoQueue *this, FxRequest *pRequest, unsigned __int8 a3)
{
  char m_ObjectFlags; // al
  unsigned __int8 v6; // bp
  _FX_IO_QUEUE_STATE _a4; // r8d
  bool v8; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxIrpQueue *p_m_Queue; // rsi
  unsigned int v11; // edx
  _IRP *m_Irp; // r9
  $B4160BD2E650AF3CBE6CB685E9139346 *v13; // r10
  _LIST_ENTRY *v14; // rcx
  _LIST_ENTRY *p_ListEntry; // rax
  int v16; // esi
  __int64 v18; // rdx
  FxDeviceBase *m_DeviceBase; // rax
  FxPowerIdleMachine *v20; // rdi
  int v21; // eax
  FxTagTracker *m_TagTracker; // rcx
  int v23; // esi
  FxVerifierLock *v24; // rcx
  unsigned __int16 m_ObjectSize; // cx
  const void *globals; // rdi
  const char *_a5; // rdx
  const void *_a3; // rcx
  _LIST_ENTRY *Blink; // rcx
  __int64 v30; // r9
  __int64 v31; // r10
  FxRequest_vtbl *v32; // rax
  const _GUID *RefType; // [rsp+20h] [rbp-58h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF
  unsigned int Count; // [rsp+90h] [rbp+18h] BYREF
  FxIrp Irp; // [rsp+98h] [rbp+20h] BYREF

  m_ObjectFlags = this->m_ObjectFlags;
  irql = 0;
  if ( m_ObjectFlags < 0 && (v24 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v24, &irql, a3);
    v6 = irql;
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v6;
  }
  _a4 = this->m_QueueState;
  if ( (_a4 & 1) != 0 )
  {
    v8 = pRequest->m_IrpAllocation == 0;
    m_Globals = pRequest->m_Globals;
    p_m_Queue = &this->m_Queue;
    if ( m_Globals->FxVerifierOn && FxRequest::Vf_VerifyInsertIrpQueue(pRequest, m_Globals, &this->m_Queue) < 0 )
    {
      pRequest->m_IoQueue = this;
    }
    else
    {
      v11 = _InterlockedIncrement(&pRequest->m_Refcnt);
      if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
      {
        Blink = pRequest[-1].m_OwnerListEntry2.Blink;
        if ( Blink )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)Blink,
            (void *)0x75657551,
            1900,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            v11);
      }
      m_Irp = pRequest->m_Irp.m_Irp;
      v13 = &pRequest->120;
      pRequest->m_IrpQueue = p_m_Queue;
      Irp.m_Irp = m_Irp;
      if ( pRequest == (FxRequest *)-120LL )
      {
        m_Irp->Tail.Overlay.DriverContext[3] = p_m_Queue;
      }
      else
      {
        m_Irp->Tail.Overlay.DriverContext[3] = v13;
        pRequest->m_CsqContext.Irp = m_Irp;
        pRequest->m_CsqContext.Csq = (_IO_CSQ *)p_m_Queue;
        v13->m_CsqContext.Type = 1;
      }
      v14 = this->m_Queue.m_Queue.Blink;
      p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
      if ( (FxIrpQueue *)v14->Flink != p_m_Queue )
        __fastfail(3u);
      p_ListEntry->Flink = &p_m_Queue->m_Queue;
      m_Irp->Tail.Overlay.ListEntry.Blink = v14;
      v14->Flink = p_ListEntry;
      this->m_Queue.m_Queue.Blink = p_ListEntry;
      ++this->m_Queue.m_RequestCount;
      m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
      if ( m_Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
      {
        FxIrpQueue::RemoveIrpFromListEntry(&this->m_Queue, &Irp);
        if ( v31 )
          *(_QWORD *)(v31 + 8) = 0LL;
        *(_QWORD *)(v30 + 144) = 0LL;
        v32 = pRequest->__vftable;
        pRequest->m_IrpQueue = 0LL;
        v16 = -1073741536;
        v32->Release(pRequest, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
      }
      else
      {
        v16 = 0;
      }
      pRequest->m_IoQueue = this;
      if ( v16 >= 0 )
      {
        if ( this->m_Queue.m_RequestCount == 1 || this->m_ForceTransitionFromEmptyWhenAddingNewRequest )
        {
          this->m_TransitionFromEmpty = 1;
          this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
          if ( this->m_IsDevicePowerPolicyOwner )
          {
            if ( this->m_PowerManaged && !this->m_PowerReferenced )
            {
              v18 = *(_QWORD *)(*(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 888LL);
              if ( v18 )
                _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 748), 11, 5);
              m_DeviceBase = this->m_DeviceBase;
              Count = 0;
              v20 = *(FxPowerIdleMachine **)(*(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 888LL);
              v21 = FxPowerIdleMachine::IoIncrementWithFlags(v20, FxPowerReferenceDefault, &Count);
              m_TagTracker = v20->m_TagTracker;
              v23 = v21;
              if ( m_TagTracker && (!v21 || v21 == 259) )
                FxTagTracker::UpdateTagHistory(m_TagTracker, 0LL, 0, 0LL, TagAddRef, Count);
              if ( v23 >= 0 )
                this->m_PowerReferenced = 1;
            }
          }
        }
        goto LABEL_14;
      }
      v6 = irql;
    }
    FxObject::AddRef(
      pRequest,
      (void *)0x75657551,
      2459,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxIoQueue::CancelForQueue(this, pRequest, v6);
    FxNonPagedObject::Lock(this, &irql);
LABEL_14:
    if ( v8 || !this->m_Dispatching )
      FxIoQueue::DispatchEvents(this, irql, 0LL);
    else
      FxNonPagedObject::Unlock(this, irql);
    return 0LL;
  }
  m_ObjectSize = pRequest->m_ObjectSize;
  globals = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
  _a5 = "power stopping (Drain) in progress,";
  if ( !m_ObjectSize )
    globals = 0LL;
  if ( (_a4 & 0x10000) == 0 )
    _a5 = a5;
  _a3 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    _a3 = 0LL;
  WPP_IFR_SF_qLsqd(this->m_Globals, 3u, _a4, 0x2Bu, RefType, _a3, _a4, _a5, globals, -1071644156);
  FxNonPagedObject::Unlock(this, v6);
  return 3223323140LL;
}
