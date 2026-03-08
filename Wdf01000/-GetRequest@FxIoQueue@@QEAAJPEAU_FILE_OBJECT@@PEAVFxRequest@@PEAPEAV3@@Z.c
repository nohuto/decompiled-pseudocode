/*
 * XREFs of ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C00036D0
 * Callers:
 *     imp_WdfIoQueueRetrieveNextRequest @ 0x1C0003630 (imp_WdfIoQueueRetrieveNextRequest.c)
 *     imp_WdfIoQueueRetrieveFoundRequest @ 0x1C0061B70 (imp_WdfIoQueueRetrieveFoundRequest.c)
 *     imp_WdfIoQueueRetrieveRequestByFileObject @ 0x1C0061C20 (imp_WdfIoQueueRetrieveRequestByFileObject.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0085BCC (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0001FE4 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C0008D10 (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     ?RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C004262C (-RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0046CA0 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0046FB8 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C0047A7C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BAA98 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyGetRequestRestoreFlags@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00BB57C (-Vf_VerifyGetRequestRestoreFlags@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00BB5CC (-Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

int __fastcall FxIoQueue::GetRequest(
        FxIoQueue *this,
        _FILE_OBJECT *FileObject,
        FxRequest *TagRequest,
        FxRequest **pOutRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxIrpQueue *p_m_Queue; // r14
  FxIrpQueue *Flink; // rdx
  _IRP *i; // rax
  _LIST_ENTRY *p_ListEntry; // rcx
  _LIST_ENTRY *v13; // rdx
  _LIST_ENTRY *Blink; // r8
  $B4160BD2E650AF3CBE6CB685E9139346 *v15; // rbx
  _LIST_ENTRY *v16; // rax
  $B4160BD2E650AF3CBE6CB685E9139346 *v17; // rbx
  _LIST_ENTRY *v18; // rax
  unsigned __int8 v19; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _LIST_ENTRY *v21; // rax
  _LIST_ENTRY *v22; // rdx
  _FX_DRIVER_GLOBALS *v23; // rdx
  FxTagTracker *v24; // rcx
  char v25; // al
  _LIST_ENTRY *v26; // rax
  int result; // eax
  int v28; // ebx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rdi
  FxVerifierLock *v31; // rcx
  const void *v32; // rcx
  unsigned __int16 v33; // r9
  _FX_DRIVER_GLOBALS *Csq; // rdx
  const void *_a2; // rdx
  const void *v36; // rcx
  __int64 v37; // r8
  const void *v38; // rdx
  const void *v39; // rcx
  FxVerifierLock *v40; // rcx
  const void *v41; // rcx
  unsigned __int8 PreviousIrql[56]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  if ( m_Globals->FxVerifierOn )
  {
    result = FxIoQueue::Vf_VerifyGetRequestUpdateFlags(this, m_Globals, TagRequest);
    if ( result < 0 )
      return result;
  }
  if ( ((this->m_Type - 1) & 0xFFFFFFFD) != 0 )
  {
    m_ObjectSize = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x1Au, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741436);
    return -1073741436;
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v31 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v31, &irql, (unsigned __int8)TagRequest);
  }
  else
  {
    irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  if ( this->m_PowerState == FxIoQueuePowerOff )
  {
    v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v33 = 27;
    if ( !this->m_ObjectSize )
      v32 = 0LL;
    goto LABEL_50;
  }
  if ( (this->m_QueueState & 2) == 0 )
  {
    v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v33 = 28;
    if ( !this->m_ObjectSize )
      v32 = 0LL;
LABEL_50:
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, v33, WPP_FxIoQueue_cpp_Traceguids, v32, -1071644157);
    FxNonPagedObject::Unlock(this, irql);
    return -1071644157;
  }
  p_m_Queue = &this->m_Queue;
  while ( 1 )
  {
    if ( !TagRequest || (v15 = &TagRequest->120, TagRequest == (FxRequest *)-120LL) )
    {
      Flink = (FxIrpQueue *)p_m_Queue->m_Queue.Flink;
      for ( i = 0LL; Flink != p_m_Queue; i = 0LL )
      {
        i = (_IRP *)&Flink[-5].m_RequestCount;
        if ( !FileObject )
          break;
        if ( i->Tail.Overlay.CurrentStackLocation->FileObject == FileObject )
          break;
        Flink = (FxIrpQueue *)Flink->m_Queue.Flink;
      }
      if ( !i )
      {
LABEL_32:
        v28 = -2147483622;
        goto LABEL_33;
      }
      while ( !_InterlockedExchange64((volatile __int64 *)&i->CancelRoutine, 0LL) )
      {
        i = FxIrpQueue::PeekNextIrpFromQueue(&this->m_Queue, i, FileObject);
        if ( !i )
          goto LABEL_32;
      }
      p_ListEntry = &i->Tail.Overlay.ListEntry;
      v13 = i->Tail.Overlay.ListEntry.Flink;
      if ( (void **)v13->Blink != &i->Tail.CompletionKey + 6 )
        goto LABEL_86;
      Blink = i->Tail.Overlay.ListEntry.Blink;
      if ( Blink->Flink != p_ListEntry )
        goto LABEL_86;
      Blink->Flink = v13;
      v13->Blink = Blink;
      i->Tail.Overlay.ListEntry.Blink = &i->Tail.Overlay.ListEntry;
      p_ListEntry->Flink = p_ListEntry;
      --this->m_Queue.m_RequestCount;
      v15 = ($B4160BD2E650AF3CBE6CB685E9139346 *)i->Tail.Overlay.DriverContext[3];
      if ( v15->m_CsqContext.Type == 1 )
        v15->m_CsqContext.Irp = 0LL;
      i->Tail.Overlay.DriverContext[3] = 0LL;
    }
    else if ( !FxIrpQueue::RemoveIrpFromQueueByContext(&this->m_Queue, &TagRequest->m_CsqContext) )
    {
      v28 = -1073741275;
LABEL_33:
      if ( v28 == -2147483622 && !FileObject && !TagRequest && this->m_Queue.m_RequestCount > 0 )
        this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 1;
      FxNonPagedObject::Unlock(this, irql);
      return v28;
    }
    v16 = v15[-5].m_ListEntry.Flink;
    v17 = v15 - 5;
    v18 = v16[1].Flink;
    v17[9].m_CsqContext.Irp = 0LL;
    ((void (__fastcall *)($B4160BD2E650AF3CBE6CB685E9139346 *, __int64, __int64, const char *))v18)(
      v17,
      1969583441LL,
      2102LL,
      "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    if ( this->m_AllowZeroLengthRequests )
      goto LABEL_22;
    if ( BYTE1(v17->m_CsqContext.Csq[5].CsqInsertIrp) )
    {
      PreviousIrql[0] = 0;
      FxNonPagedObject::Lock((FxNonPagedObject *)v17, PreviousIrql);
      Csq = (_FX_DRIVER_GLOBALS *)v17->m_CsqContext.Csq;
      if ( Csq->FxVerifierOn )
        FxRequest::Vf_VerifyRequestIsNotCompleted((FxRequest *)v17, Csq);
      FxNonPagedObject::Unlock((FxNonPagedObject *)v17, PreviousIrql[0]);
    }
    CurrentStackLocation = v17[6].m_CsqContext.Irp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MajorFunction != 3 )
      break;
    if ( CurrentStackLocation->Parameters.Read.Length )
      goto LABEL_22;
    FxNonPagedObject::Unlock(this, irql);
    if ( m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      v36 = (const void *)((unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !WORD1(v17->m_ListEntry.Blink) )
        v36 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x1Du, WPP_FxIoQueue_cpp_Traceguids, v36, _a2);
    }
    v17[6].m_CsqContext.Irp->IoStatus.Information = 0LL;
    FxRequest::Complete((FxRequest *)v17, 0);
    v37 = 1123LL;
LABEL_75:
    ((void (__fastcall *)($B4160BD2E650AF3CBE6CB685E9139346 *, __int64, __int64, const char *))v17->m_ListEntry.Flink[1].Flink)(
      v17,
      1886220099LL,
      v37,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, &irql);
  }
  if ( CurrentStackLocation->MajorFunction == 4 && !CurrentStackLocation->Parameters.Read.Length )
  {
    FxNonPagedObject::Unlock(this, irql);
    if ( m_Globals->FxVerboseOn )
    {
      v38 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v38 = 0LL;
      v39 = (const void *)((unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !WORD1(v17->m_ListEntry.Blink) )
        v39 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x1Eu, WPP_FxIoQueue_cpp_Traceguids, v39, v38);
    }
    v17[6].m_CsqContext.Irp->IoStatus.Information = 0LL;
    FxRequest::Complete((FxRequest *)v17, 0);
    v37 = 1139LL;
    goto LABEL_75;
  }
LABEL_22:
  ++this->m_DriverIoCount;
  v21 = &v17[12].m_ListEntry + 1;
  v22 = this->m_DriverOwned.Blink;
  if ( v22->Flink != &this->m_DriverOwned )
LABEL_86:
    __fastfail(3u);
  v21->Flink = &this->m_DriverOwned;
  v17[13].m_ListEntry.Flink = v22;
  v22->Flink = v21;
  this->m_DriverOwned.Blink = v21;
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v40 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Unlock(v40, irql, v19);
  }
  else
  {
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  }
  if ( *((_BYTE *)&v17[8].m_ListEntry + 22) )
  {
    v41 = (const void *)((unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !WORD1(v17->m_ListEntry.Blink) )
      v41 = 0LL;
    WPP_IFR_SF_q((_FX_DRIVER_GLOBALS *)v17->m_CsqContext.Csq, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v41);
    FxVerifierDbgBreakPoint((_FX_DRIVER_GLOBALS *)v17->m_CsqContext.Csq);
  }
  else
  {
    v25 = *((_BYTE *)&v17[9].m_ListEntry + 21);
    *((_BYTE *)&v17[9].m_ListEntry + 21) = 1;
    if ( !v25 )
    {
      v23 = (_FX_DRIVER_GLOBALS *)(unsigned int)_InterlockedIncrement((volatile signed __int32 *)&v17->m_ListEntry.Blink + 1);
      if ( SLOBYTE(v17[1].m_CsqContext.Type) < 0 )
      {
        v24 = (FxTagTracker *)v17[-2].m_ListEntry.Flink;
        if ( v24 )
          FxTagTracker::UpdateTagHistory(
            v24,
            (void *)0x74617453,
            1820,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            (unsigned int)v23);
      }
    }
  }
  if ( m_Globals->FxVerifierOn )
    FxIoQueue::Vf_VerifyGetRequestRestoreFlags((FxIoQueue *)v24, v23, (FxRequest *)v17);
  v26 = v17->m_ListEntry.Flink;
  *((_BYTE *)&v17[14].m_ListEntry + 16) = 1;
  ((void (__fastcall *)($B4160BD2E650AF3CBE6CB685E9139346 *, __int64, __int64, const char *))v26[1].Flink)(
    v17,
    1952543827LL,
    1193LL,
    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  result = 0;
  *pOutRequest = (FxRequest *)v17;
  return result;
}
