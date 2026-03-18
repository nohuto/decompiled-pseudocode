/*
 * XREFs of ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0007B30
 * Callers:
 *     imp_WdfDeviceEnqueueRequest @ 0x1C0007A30 (imp_WdfDeviceEnqueueRequest.c)
 * Callees:
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C000598C (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008440 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0013820 (WPP_IFR_SF_q.c)
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C0015524 (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C0015834 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C0018624 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C0018900 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E65C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C002FD7C (WPP_IFR_SF_qid.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005A978 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005B788 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0075AB4 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C00767C8 (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C00774B4 (WPP_IFR_SF_qLsqd.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00C6400 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 *     ?Vf_VerifyEnqueueRequestRestoreFlags@FxPkgIo@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@F@Z @ 0x1C00C7044 (-Vf_VerifyEnqueueRequestRestoreFlags@FxPkgIo@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@F@Z.c)
 *     ?Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1C00C708C (-Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z.c)
 */

int __fastcall FxPkgIo::EnqueueRequest(FxPkgIo *this, unsigned __int64 Device, FxRequest *pRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  FxIoQueue *m_InternalContext; // rbx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned __int8 m_CompletionState; // al
  char m_ObjectFlags; // al
  unsigned int m_QueueState; // r10d
  bool v13; // r14
  _FX_DRIVER_GLOBALS *v14; // rdx
  FxIrpQueue *p_m_Queue; // rsi
  unsigned int v16; // edx
  _IRP *m_Irp; // r9
  $55631384234A24007A0779E5E472941C *v18; // r10
  _LIST_ENTRY *v19; // rcx
  _LIST_ENTRY *p_ListEntry; // rax
  int inserted; // ebp
  int v22; // esi
  int result; // eax
  const void *v24; // rcx
  unsigned __int16 v25; // ax
  unsigned __int64 _a2; // rcx
  const void *v27; // rbp
  unsigned __int16 v28; // ax
  unsigned __int64 v29; // rbp
  const void *v30; // rcx
  _FX_DRIVER_GLOBALS *v31; // rdx
  FxPkgIo *v32; // rcx
  FxRequestContext *m_RequestContext; // rax
  FxTagTracker *Blink; // rcx
  _LIST_ENTRY *v35; // rcx
  const void *v36; // rcx
  FxVerifierLock *v37; // rcx
  const void *globals; // r8
  const char *v39; // rdx
  const void *v40; // rcx
  _LIST_ENTRY *v41; // rcx
  __int64 v42; // r9
  __int64 v43; // r10
  FxRequest_vtbl *v44; // rax
  const _GUID *Line; // [rsp+20h] [rbp-68h]
  unsigned __int8 PreviousIrql; // [rsp+90h] [rbp+8h] BYREF
  __int16 origVerifierFlags; // [rsp+A0h] [rbp+18h] BYREF
  FxIrp Irp; // [rsp+A8h] [rbp+20h] BYREF

  m_Globals = this->m_Globals;
  origVerifierFlags = 0;
  if ( m_Globals->FxVerboseOn )
  {
    v24 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !pRequest->m_ObjectSize )
      v24 = 0LL;
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x12u, (const _GUID *)&WPP_FxPkgIo_cpp_Traceguids, v24);
  }
  if ( !m_Globals->FxVerifierOn
    || (result = FxPkgIo::Vf_VerifyEnqueueRequestUpdateFlags(this, m_Globals, pRequest, &origVerifierFlags), result >= 0) )
  {
    m_InternalContext = (FxIoQueue *)pRequest->m_InternalContext;
    pRequest->m_InternalContext = 0LL;
    if ( m_InternalContext
      || (m_InternalContext = this->m_DispatchTable[pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction]) != 0LL )
    {
      if ( !this->m_Filter
        || m_InternalContext != this->m_DefaultQueue
        || FxIoQueue::IsIoEventHandlerRegistered(
             m_InternalContext,
             (_WDF_REQUEST_TYPE)pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction) )
      {
        v8 = _InterlockedIncrement(&m_InternalContext->m_Refcnt);
        if ( SLOBYTE(m_InternalContext->m_ObjectFlags) < 0 )
        {
          Blink = (FxTagTracker *)m_InternalContext[-1].m_PowerIdle.m_Event.Header.WaitListHead.Blink;
          if ( Blink )
            FxTagTracker::UpdateTagHistory(Blink, 0LL, 0, 0LL, TagAddRef, v8);
        }
        v9 = _InterlockedIncrement(&pRequest->m_Refcnt);
        if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
        {
          v35 = pRequest[-1].m_OwnerListEntry2.Blink;
          if ( v35 )
            FxTagTracker::UpdateTagHistory(
              (FxTagTracker *)v35,
              (void *)0x74617453,
              690,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
              TagAddRef,
              v9);
        }
        if ( pRequest->m_Completed )
        {
          v36 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !pRequest->m_ObjectSize )
            v36 = 0LL;
          WPP_IFR_SF_q(pRequest->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v36);
          FxVerifierDbgBreakPoint(pRequest->m_Globals);
        }
        else
        {
          m_CompletionState = pRequest->m_CompletionState;
          pRequest->m_CompletionState = 0;
          if ( m_CompletionState )
            pRequest->Release(
              pRequest,
              (void *)1952543827,
              1813,
              "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
        }
        m_ObjectFlags = m_InternalContext->m_ObjectFlags;
        PreviousIrql = 0;
        if ( m_ObjectFlags < 0
          && (v37 = *(FxVerifierLock **)&m_InternalContext[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Lock(v37, &PreviousIrql, (unsigned __int8)pRequest);
        }
        else
        {
          PreviousIrql = KeAcquireSpinLockRaiseToDpc(&m_InternalContext->m_NPLock.m_Lock);
        }
        m_QueueState = m_InternalContext->m_QueueState;
        if ( (m_QueueState & 1) != 0 )
        {
          v13 = pRequest->m_IrpAllocation == 0;
          v14 = pRequest->m_Globals;
          p_m_Queue = &m_InternalContext->m_Queue;
          if ( !v14->FxVerifierOn
            || (inserted = FxRequest::Vf_VerifyInsertIrpQueue(pRequest, v14, &m_InternalContext->m_Queue), inserted >= 0) )
          {
            v16 = _InterlockedIncrement(&pRequest->m_Refcnt);
            if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
            {
              v41 = pRequest[-1].m_OwnerListEntry2.Blink;
              if ( v41 )
                FxTagTracker::UpdateTagHistory(
                  (FxTagTracker *)v41,
                  (void *)0x75657551,
                  1900,
                  "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
                  TagAddRef,
                  v16);
            }
            m_Irp = pRequest->m_Irp.m_Irp;
            v18 = &pRequest->120;
            pRequest->m_IrpQueue = p_m_Queue;
            Irp.m_Irp = m_Irp;
            if ( pRequest == (FxRequest *)-120LL )
            {
              m_Irp->Tail.Overlay.DriverContext[3] = p_m_Queue;
            }
            else
            {
              m_Irp->Tail.Overlay.DriverContext[3] = v18;
              pRequest->m_CsqContext.Irp = m_Irp;
              pRequest->m_CsqContext.Csq = (_IO_CSQ *)p_m_Queue;
              v18->m_CsqContext.Type = 1;
            }
            v19 = m_InternalContext->m_Queue.m_Queue.Blink;
            p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
            if ( (FxIrpQueue *)v19->Flink != p_m_Queue )
              __fastfail(3u);
            p_ListEntry->Flink = &p_m_Queue->m_Queue;
            m_Irp->Tail.Overlay.ListEntry.Blink = v19;
            v19->Flink = p_ListEntry;
            m_InternalContext->m_Queue.m_Queue.Blink = p_ListEntry;
            ++m_InternalContext->m_Queue.m_RequestCount;
            m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
            _InterlockedExchange64(
              (volatile __int64 *)&m_Irp->CancelRoutine,
              (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
            if ( m_Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
            {
              FxIrpQueue::RemoveIrpFromListEntry(&m_InternalContext->m_Queue, &Irp);
              if ( v43 )
                *(_QWORD *)(v43 + 8) = 0LL;
              *(_QWORD *)(v42 + 144) = 0LL;
              v44 = pRequest->__vftable;
              pRequest->m_IrpQueue = 0LL;
              inserted = -1073741536;
              v44->Release(pRequest, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
            }
            else
            {
              inserted = 0;
            }
          }
          pRequest->m_IoQueue = m_InternalContext;
          if ( inserted < 0 )
          {
            FxObject::AddRef(
              pRequest,
              (void *)0x75657551,
              2459,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
            FxIoQueue::CancelForQueue(m_InternalContext, pRequest, PreviousIrql);
            FxNonPagedObject::Lock(m_InternalContext, &PreviousIrql);
          }
          else if ( m_InternalContext->m_Queue.m_RequestCount == 1
                 || m_InternalContext->m_ForceTransitionFromEmptyWhenAddingNewRequest )
          {
            m_InternalContext->m_TransitionFromEmpty = 1;
            m_InternalContext->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
            if ( m_InternalContext->m_IsDevicePowerPolicyOwner )
            {
              if ( m_InternalContext->m_PowerManaged
                && !m_InternalContext->m_PowerReferenced
                && (int)FxPowerIdleMachine::PowerReferenceWorker(
                          *(FxPowerIdleMachine **)(*(_QWORD *)&m_InternalContext->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized
                                                 + 888LL),
                          0,
                          FxPowerReferenceDefault,
                          0LL,
                          0,
                          0LL) >= 0 )
              {
                m_InternalContext->m_PowerReferenced = 1;
              }
            }
          }
          if ( v13 || !m_InternalContext->m_Dispatching )
            FxIoQueue::DispatchEvents(m_InternalContext, PreviousIrql, 0LL);
          else
            FxNonPagedObject::Unlock(m_InternalContext, PreviousIrql);
          v22 = 0;
        }
        else
        {
          globals = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
          v39 = "power stopping (Drain) in progress,";
          v22 = -1071644156;
          if ( !pRequest->m_ObjectSize )
            globals = 0LL;
          if ( (m_QueueState & 0x10000) == 0 )
            v39 = a5;
          v40 = (const void *)((unsigned __int64)m_InternalContext ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !m_InternalContext->m_ObjectSize )
            v40 = 0LL;
          WPP_IFR_SF_qLsqd(
            m_InternalContext->m_Globals,
            3u,
            (unsigned int)globals,
            0x2Bu,
            Line,
            v40,
            m_QueueState,
            v39,
            globals,
            -1071644156);
          FxNonPagedObject::Unlock(m_InternalContext, PreviousIrql);
        }
        m_InternalContext->Release(m_InternalContext, 0LL, 0, 0LL);
        if ( v22 >= 0 )
          return v22;
        FxRequest::SetCompletionState(pRequest, FxRequestCompletionStateIoPkg);
        pRequest->Release(
          pRequest,
          (void *)1952543827,
          722,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
LABEL_88:
        if ( m_Globals->FxVerifierOn )
          FxPkgIo::Vf_VerifyEnqueueRequestRestoreFlags(v32, v31, pRequest, origVerifierFlags);
        return v22;
      }
    }
    else if ( !this->m_Filter )
    {
      v22 = -1073741808;
      v25 = *(_WORD *)(Device + 10);
      _a2 = (unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !pRequest->m_ObjectSize )
        _a2 = 0LL;
      v27 = (const void *)(Device ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v25 )
        v27 = 0LL;
      WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0x13u, (const _GUID *)&WPP_FxPkgIo_cpp_Traceguids, v27, _a2, -1073741808);
LABEL_52:
      FxVerifierDbgBreakPoint(m_Globals);
      goto LABEL_88;
    }
    m_RequestContext = pRequest->m_RequestContext;
    if ( !m_RequestContext || !m_RequestContext->m_RequestType )
    {
      FxRequest::PreProcessSendAndForget(pRequest);
      IofCallDriver(*(PDEVICE_OBJECT *)(Device + 152), pRequest->m_Irp.m_Irp);
      FxRequest::PostProcessSendAndForget(pRequest);
      return 0;
    }
    v22 = -1073741808;
    v28 = *(_WORD *)(Device + 10);
    v29 = Device ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v28 )
      v29 = 0LL;
    v30 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !pRequest->m_ObjectSize )
      v30 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0x14u, (const _GUID *)&WPP_FxPkgIo_cpp_Traceguids, v30, v29, -1073741808);
    goto LABEL_52;
  }
  return result;
}
