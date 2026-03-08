/*
 * XREFs of ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003A80
 * Callers:
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0001FE4 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     imp_WdfRequestCompleteWithInformation @ 0x1C00039B0 (imp_WdfRequestCompleteWithInformation.c)
 *     ?CompleteWithPriority@FxRequest@@QEAAJJD@Z @ 0x1C000D2FA (-CompleteWithPriority@FxRequest@@QEAAJJD@Z.c)
 * Callees:
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C0003350 (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C00034D0 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C0003E1C (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C0003ED0 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004CF0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C000536C (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?PreProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C000DA52 (-PreProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqdd @ 0x1C0019480 (WPP_IFR_SF_qqdd.c)
 *     ?PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C003AC98 (-PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     WPP_IFR_SF_qqDqq @ 0x1C003B568 (WPP_IFR_SF_qqDqq.c)
 *     WPP_IFR_SF_qqqi @ 0x1C003B698 (WPP_IFR_SF_qqqi.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0045B6C (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C0046564 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0046CA0 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C0047758 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?CreateCompleted@FxPkgGeneral@@QEAAXPEAVFxIrp@@@Z @ 0x1C00853F8 (-CreateCompleted@FxPkgGeneral@@QEAAXPEAVFxIrp@@@Z.c)
 *     ?Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BA298 (-Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyCompleteInternal@FxRequest@@AEAAXPEAU_FX_DRIVER_GLOBALS@@J@Z @ 0x1C00BA30C (-Vf_VerifyCompleteInternal@FxRequest@@AEAAXPEAU_FX_DRIVER_GLOBALS@@J@Z.c)
 *     ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00BB924 (-Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxRequest::CompleteInternal(
        FxRequest *this,
        _FX_DRIVER_GLOBALS *Status,
        __int64 a3,
        unsigned __int16 a4)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  unsigned int v5; // r12d
  _IRP *_a2; // r15
  _IRP *m_Irp; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  FxDeviceBase *m_DeviceBase; // rsi
  FxRequestCompletionState m_CompletionState; // ebp
  FxIoQueue *m_IoQueue; // rdi
  FxRequestContext *m_RequestContext; // rcx
  KIRQL v14; // bp
  FxObject *m_ParentObject; // rcx
  unsigned __int16 v16; // ax
  unsigned __int16 m_ObjectFlags; // ax
  unsigned __int16 v18; // cx
  char v19; // al
  _LIST_ENTRY *p_m_ChildListHead; // rsi
  _LIST_ENTRY *Flink; // rax
  _IRP *v22; // rcx
  unsigned __int8 v23; // r8
  _FX_DRIVER_GLOBALS *v24; // rdx
  _LIST_ENTRY *p_m_OwnerListEntry2; // rax
  _LIST_ENTRY *v26; // rcx
  _LIST_ENTRY *Blink; // rdx
  const void *_a1; // rcx
  _FX_DRIVER_GLOBALS *v30; // rcx
  const void *v31; // rdx
  _FX_DRIVER_GLOBALS *v32; // rdx
  _FX_DRIVER_GLOBALS *v33; // rcx
  const void *v34; // rdx
  _FX_DRIVER_GLOBALS *v35; // rcx
  const void *v36; // rdx
  _LIST_ENTRY *v37; // rcx
  FxObject *p_Blink; // r13
  KIRQL v39; // bp
  $871A957E8C7E2BF7D1FA212D6C40F63F *v40; // r14
  WDFMEMORY__ *id; // rdi
  WDFMEMORY__ *v42; // rax
  FxRequestSystemBuffer *p_m_SystemBuffer; // r12
  unsigned __int64 v44; // r15
  const void *v45; // rcx
  __int64 v46; // rbp
  _MDL *v47; // rsi
  const void *v48; // rdi
  WDFMEMORY__ *v49; // rax
  unsigned __int8 v50; // dl
  unsigned int v51; // r8d
  __int64 v52; // rbp
  _MDL *v53; // rsi
  const void *v54; // rdi
  WDFMEMORY__ *v55; // rax
  unsigned __int8 v56; // dl
  unsigned int v57; // r8d
  FxVerifierLock *v58; // rcx
  KIRQL v59; // al
  FxObject *v60; // rcx
  KIRQL v61; // bp
  _FX_DRIVER_GLOBALS *v62; // rcx
  const void *v63; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]
  const _GUID *traceGuida; // [rsp+20h] [rbp-68h]
  FxIrp irp; // [rsp+90h] [rbp+8h] BYREF
  FxRequestCompletionState PreviousIrql; // [rsp+98h] [rbp+10h] BYREF
  _FX_DRIVER_GLOBALS *v68; // [rsp+A0h] [rbp+18h]

  m_Globals = this->m_Globals;
  v5 = (unsigned int)Status;
  _a2 = this->m_Irp.m_Irp;
  v68 = m_Globals;
  m_Irp = _a2;
  if ( !m_Globals->FxVerifierOn
    || (FxRequest::Vf_VerifyCompleteInternal(this, Status, (int)Status),
        m_Irp = this->m_Irp.m_Irp,
        !m_Globals->FxVerifierOn) )
  {
    this->m_Completed = 1;
  }
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  m_DeviceBase = 0LL;
  if ( CurrentStackLocation->MajorFunction == 14
    && (CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3) == 0
    && m_Irp->RequestorMode == 1
    && !CurrentStackLocation->Parameters.Read.Length
    && (m_Irp->Flags & 0x40) != 0 )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 2u, 0x10u, 0x10u, WPP_FxRequest_cpp_Traceguids, _a1, _a2);
    if ( this->m_Irp.m_Irp->IoStatus.Information )
      FxVerifierDbgBreakPoint(m_Globals);
    this->m_Irp.m_Irp->Flags &= ~0x40u;
  }
  if ( (v5 & 0xFFF0000) == 0x200000 )
  {
    WPP_IFR_SF_D(m_Globals, 2u, 0x10u, 0x11u, WPP_FxRequest_cpp_Traceguids, v5);
    switch ( v5 )
    {
      case 0xC0200201:
        v5 = -1073741595;
        break;
      case 0xC0200203:
      case 0xC0200204:
        v5 = -2147483631;
        break;
      case 0xC020020A:
      case 0xC0200213:
        goto LABEL_69;
      case 0xC0200214:
        v5 = -1073741670;
        break;
      default:
        WPP_IFR_SF_D(m_Globals, 2u, 0x10u, 0x12u, WPP_FxRequest_cpp_Traceguids, v5);
LABEL_69:
        v5 = -1073741808;
        break;
    }
    WPP_IFR_SF_D(m_Globals, 2u, 0x10u, 0x13u, WPP_FxRequest_cpp_Traceguids, v5);
  }
  if ( this->m_IrpAllocation && !this->m_CanComplete )
    FxVerifierDbgBreakPoint(m_Globals);
  m_CompletionState = this->m_CompletionState;
  m_IoQueue = this->m_IoQueue;
  PreviousIrql = m_CompletionState;
  if ( !this->m_IrpAllocation )
  {
    this->m_CompletionState = 0;
    if ( !this->m_Reserved )
      this->m_IoQueue = 0LL;
  }
  m_RequestContext = this->m_RequestContext;
  if ( m_RequestContext )
    m_RequestContext->ReleaseAndRestore(m_RequestContext, this);
  if ( !this->m_Presented )
    FxObject::ClearEvtCallbacks(this);
  if ( this->m_Reserved || this->m_IrpAllocation )
    goto LABEL_31;
  v14 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  if ( this->m_ObjectState != 1 )
    goto LABEL_84;
  m_ParentObject = this->m_ParentObject;
  if ( m_ParentObject )
  {
    if ( (unsigned int)FxObject::RemoveChildObjectInternal(m_ParentObject, this) == -1073741738 )
    {
      FxObject::SetObjectStateLocked(this, FxObjectStateWaitingForEarlyDispose);
LABEL_84:
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v14);
LABEL_85:
      v32 = this->m_Globals;
      if ( v32->FxVerifierOn )
        FxRequest::Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred(this, v32);
      goto LABEL_28;
    }
    this->m_ParentObject = 0LL;
  }
  v16 = this->m_ObjectFlags | 0x100;
  this->m_ObjectFlags = v16;
  if ( (v16 & 0x200) != 0 )
  {
    v30 = this->m_Globals;
    if ( v30->FxVerboseOn )
    {
      v31 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v31 = 0LL;
      WPP_IFR_SF_qqdd(v30, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v31, this->m_ObjectState, 3u);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ForwardProgressQueue) - 32) = 3;
  }
  m_ObjectFlags = this->m_ObjectFlags;
  this->m_ObjectState = 3;
  if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && v14 )
  {
    FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDisposing);
    goto LABEL_84;
  }
  if ( (m_ObjectFlags & 0x200) != 0 )
  {
    v33 = this->m_Globals;
    if ( v33->FxVerboseOn )
    {
      v34 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v34 = 0LL;
      WPP_IFR_SF_qqdd(v33, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v34, 3u, 4u);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ForwardProgressQueue) - 32) = 4;
  }
  this->m_ObjectState = 4;
  if ( FxObject::DisposeChildrenWorker(this, FxObjectStateDeferedDisposing, v14, 1u) )
  {
    v18 = this->m_ObjectFlags;
    if ( (v18 & 0x104) == 0x104 )
    {
      FxObject::DeletedAndDisposedWorkerLocked(this, v14, 0);
    }
    else
    {
      if ( (v18 & 0x200) != 0 )
      {
        v35 = this->m_Globals;
        if ( v35->FxVerboseOn )
        {
          v36 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v36 = 0LL;
          WPP_IFR_SF_qqdd(v35, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v36, this->m_ObjectState, 2u);
        }
        if ( SLOBYTE(this->m_ObjectFlags) < 0 )
          *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ForwardProgressQueue) - 32) = 2;
      }
      this->m_ObjectState = 2;
    }
    v19 = 1;
  }
  else
  {
    v19 = 0;
  }
  if ( !v19 )
    goto LABEL_85;
LABEL_28:
  p_m_ChildListHead = &this->m_ChildListHead;
  while ( 1 )
  {
    Flink = p_m_ChildListHead->Flink;
    if ( p_m_ChildListHead->Flink == p_m_ChildListHead )
      break;
    if ( Flink->Blink != p_m_ChildListHead )
      goto LABEL_129;
    v37 = Flink->Flink;
    if ( Flink->Flink->Blink != Flink )
      goto LABEL_129;
    p_m_ChildListHead->Flink = v37;
    p_Blink = (FxObject *)&Flink[-5].Blink;
    v37->Blink = p_m_ChildListHead;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Flink[-1]);
    p_Blink->m_ParentObject = 0LL;
    if ( p_Blink->m_ObjectState == 2 )
    {
LABEL_107:
      FxObject::DeletedAndDisposedWorkerLocked(p_Blink, v39, 1u);
    }
    else
    {
      switch ( p_Blink->m_ObjectState )
      {
        case 8u:
          goto LABEL_107;
        case 9u:
          FxObject::TraceDroppedEvent(p_Blink, FxObjectDroppedEventParentDeleteEvent);
          break;
        default:
          break;
      }
      KeReleaseSpinLock(&p_Blink->m_SpinLock.m_Lock, v39);
    }
  }
  m_Globals = v68;
  m_DeviceBase = 0LL;
  m_CompletionState = PreviousIrql;
LABEL_31:
  if ( this->m_IrpReferenceCount )
  {
    v40 = &this->235;
    if ( (this->m_RequestBaseFlags & 2) != 0 || (v40->m_RequestBaseStaticFlags & 2) != 0 )
      id = this->m_OutputBuffer.GetHandle(&this->m_OutputBuffer);
    else
      id = 0LL;
    if ( (this->m_RequestBaseFlags & 1) != 0 || (v40->m_RequestBaseStaticFlags & 1) != 0 )
    {
      p_m_SystemBuffer = &this->m_SystemBuffer;
      v42 = this->m_SystemBuffer.GetHandle(&this->m_SystemBuffer);
    }
    else
    {
      v42 = 0LL;
      p_m_SystemBuffer = &this->m_SystemBuffer;
    }
    v44 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    v45 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v45 = 0LL;
    WPP_IFR_SF_qqDqq(
      m_Globals,
      this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
      (unsigned int)this->m_Irp.m_Irp,
      a4,
      traceGuid,
      v45,
      this->m_Irp.m_Irp,
      this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
      v42,
      id);
    if ( (this->m_RequestBaseFlags & 1) != 0 || (v40->m_RequestBaseStaticFlags & 1) != 0 )
    {
      v46 = p_m_SystemBuffer->GetBufferSize(p_m_SystemBuffer);
      v47 = p_m_SystemBuffer->GetMdl(p_m_SystemBuffer);
      v48 = (const void *)p_m_SystemBuffer->GetBuffer(p_m_SystemBuffer);
      v49 = p_m_SystemBuffer->GetHandle(p_m_SystemBuffer);
      WPP_IFR_SF_qqqi(m_Globals, v50, v51, 0x15u, traceGuida, v49, v48, v47, v46);
    }
    if ( (this->m_RequestBaseFlags & 2) != 0 || (v40->m_RequestBaseStaticFlags & 2) != 0 )
    {
      v52 = this->m_OutputBuffer.GetBufferSize(&this->m_OutputBuffer);
      v53 = this->m_OutputBuffer.GetMdl(&this->m_OutputBuffer);
      v54 = (const void *)this->m_OutputBuffer.GetBuffer(&this->m_OutputBuffer);
      v55 = this->m_OutputBuffer.GetHandle(&this->m_OutputBuffer);
      WPP_IFR_SF_qqqi(m_Globals, v56, v57, 0x16u, traceGuida, v55, v54, v53, v52);
    }
    if ( !this->m_ObjectSize )
      v44 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_VERIFIER_FATAL_ERROR, v44, this->m_IrpReferenceCount);
  }
  irp.m_Irp = _a2;
  _a2->IoStatus.Status = v5;
  if ( this->m_IrpAllocation )
  {
    FxRequest::PreProcessCompletionForDriverRequest(this, m_CompletionState, m_IoQueue);
    return v5;
  }
  v22 = irp.m_Irp;
  this->m_Irp.m_Irp = 0LL;
  if ( !v22->Tail.Overlay.CurrentStackLocation->MajorFunction )
  {
    m_DeviceBase = this->m_DeviceBase;
    FxObject::AddRef(m_DeviceBase, &irp, 858, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    FxPkgGeneral::CreateCompleted((FxPkgGeneral *)m_DeviceBase[3].m_SpinLock.m_Lock, &irp);
    v22 = irp.m_Irp;
  }
  IofCompleteRequest(v22, this->m_PriorityBoost);
  irp.m_Irp = 0LL;
  if ( this->m_Reserved )
  {
    FxRequest::PostProcessCompletionForReserved(this, m_CompletionState, m_IoQueue);
  }
  else
  {
    if ( m_CompletionState )
    {
      if ( (m_CompletionState & 0x80u) == 0 )
      {
        v24 = m_IoQueue->m_Globals;
        LOBYTE(PreviousIrql) = 0;
        if ( v24->FxVerifierOn )
          FxIoQueue::Vf_VerifyValidateCompletedRequest(m_IoQueue, v24, this);
        if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
          && (v58 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Lock(v58, (unsigned __int8 *)&PreviousIrql, v23);
        }
        else
        {
          LOBYTE(PreviousIrql) = KeAcquireSpinLockRaiseToDpc(&m_IoQueue->m_NPLock.m_Lock);
        }
        p_m_OwnerListEntry2 = &this->m_OwnerListEntry2;
        v26 = this->m_OwnerListEntry2.Flink;
        if ( v26->Blink != &this->m_OwnerListEntry2
          || (Blink = this->m_OwnerListEntry2.Blink, Blink->Flink != p_m_OwnerListEntry2) )
        {
LABEL_129:
          __fastfail(3u);
        }
        Blink->Flink = v26;
        v26->Blink = Blink;
        this->m_OwnerListEntry2.Blink = &this->m_OwnerListEntry2;
        p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
        --m_IoQueue->m_DriverIoCount;
        if ( m_IoQueue->m_Dispatching )
          FxNonPagedObject::Unlock(m_IoQueue, PreviousIrql);
        else
          FxIoQueue::DispatchEvents(m_IoQueue, PreviousIrql, 0LL);
      }
      this->m_ObjectFlags |= 4u;
      if ( !this->m_ParentObject )
        goto LABEL_47;
      v59 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
      v60 = this->m_ParentObject;
      v61 = v59;
      if ( v60 )
      {
        if ( (unsigned int)FxObject::RemoveChildObjectInternal(v60, this) == -1073741738 )
        {
          FxObject::SetObjectStateLocked(this, FxObjectStateWaitingForParentDeleteAndDisposed);
          KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v61);
          goto LABEL_49;
        }
        this->m_ParentObject = 0LL;
      }
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v61);
LABEL_47:
      if ( _bittest16((const signed __int16 *)&this->24, 9u) )
      {
        v62 = this->m_Globals;
        if ( v62->FxVerboseOn )
        {
          v63 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v63 = 0LL;
          WPP_IFR_SF_qqdd(v62, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v63, this->m_ObjectState, 0xAu);
        }
        if ( SLOBYTE(this->m_ObjectFlags) < 0 )
          *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ForwardProgressQueue) - 32) = 10;
      }
      this->m_ObjectState = 10;
      FxObject::DestroyChildren(this);
      this->Release(this, 0LL, 1246, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
      goto LABEL_49;
    }
    FxObject::AddRef(this, (void *)0x706D6F43, 925, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    this->DeleteObject(this);
  }
LABEL_49:
  if ( m_DeviceBase )
    m_DeviceBase->Release(m_DeviceBase, &irp, 879, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
  return v5;
}
