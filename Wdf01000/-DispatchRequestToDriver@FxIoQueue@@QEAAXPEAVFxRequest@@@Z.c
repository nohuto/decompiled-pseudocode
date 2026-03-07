void __fastcall FxIoQueue::DispatchRequestToDriver(FxIoQueue *this, FxRequest *pRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  WDFQUEUE__ *v5; // r14
  unsigned __int8 m_CompletionState; // al
  unsigned int v7; // edx
  unsigned int v8; // r8d
  unsigned __int16 m_ObjectSize; // dx
  WDFREQUEST__ *v10; // r15
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int MajorFunction; // ebp
  _IO_STACK_LOCATION *v13; // rcx
  unsigned int LowPart; // ebp
  unsigned __int64 Options; // r12
  unsigned __int64 Length; // r13
  FxCallbackLock *m_CallbackLock; // rcx
  FxCallbackLock *v18; // rcx
  FxIoQueueIoDefault *p_m_IoDefault; // rcx
  WDFQUEUE__ *v20; // rdi
  _FX_DRIVER_GLOBALS *v21; // rdx
  const void *v22; // rcx
  _LIST_ENTRY *Blink; // rcx
  unsigned int v24; // ebp
  unsigned __int16 v25; // ax
  const void *_a2; // rdi
  __int64 v27; // r8
  FxIoQueueIoWrite *p_m_IoWrite; // rcx
  WDFQUEUE__ *v29; // rdx
  unsigned int v30; // r9d
  WDFREQUEST__ *v31; // r8
  unsigned int v32; // ebp
  unsigned __int16 v33; // ax
  const void *v34; // rdi
  const void *v35; // rax
  unsigned __int16 v36; // ax
  const void *v37; // rdi
  unsigned __int16 v38; // ax
  const void *v39; // rdi
  __int16 m_VerifierFlags; // di
  unsigned __int8 PreviousIrql; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( pRequest->m_Globals->FxVerifierIO )
  {
    PreviousIrql = 0;
    FxNonPagedObject::Lock(pRequest, &PreviousIrql);
    v21 = pRequest->m_Globals;
    if ( v21->FxVerifierOn )
      FxRequest::Vf_VerifyRequestIsNotCompleted(pRequest, v21);
    FxNonPagedObject::Unlock(pRequest, PreviousIrql);
  }
  v5 = 0LL;
  if ( pRequest->m_Completed )
  {
    v22 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !pRequest->m_ObjectSize )
      v22 = 0LL;
    WPP_IFR_SF_q(pRequest->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v22);
    FxVerifierDbgBreakPoint(pRequest->m_Globals);
  }
  else
  {
    m_CompletionState = pRequest->m_CompletionState;
    pRequest->m_CompletionState = 1;
    if ( !m_CompletionState )
    {
      v7 = _InterlockedIncrement(&pRequest->m_Refcnt);
      if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
      {
        Blink = pRequest[-1].m_OwnerListEntry2.Blink;
        if ( Blink )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)Blink,
            (void *)0x74617453,
            1820,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            v7);
      }
    }
  }
  if ( m_Globals->FxVerifierOn )
    FxRequestBase::SetVerifierFlags(pRequest, 9);
  else
    pRequest->Release(
      pRequest,
      (void *)1952543827,
      3219,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  m_ObjectSize = pRequest->m_ObjectSize;
  v10 = 0LL;
  if ( m_ObjectSize )
    v10 = (WDFREQUEST__ *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
  CurrentStackLocation = pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( (_BYTE)MajorFunction != 3 )
  {
    if ( (_BYTE)MajorFunction != 4 )
    {
      if ( (_BYTE)MajorFunction == 14 )
      {
        if ( this->m_IoDeviceControl.Method )
        {
          pRequest->m_Presented = 1;
          if ( m_Globals->FxVerboseOn )
            WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x36u, WPP_FxIoQueue_cpp_Traceguids, v10);
          v13 = pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
          LowPart = v13->Parameters.Read.ByteOffset.LowPart;
          if ( this->m_ObjectSize )
            v5 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          Options = v13->Parameters.Create.Options;
          Length = v13->Parameters.Read.Length;
          if ( this->m_IoDeviceControl.Method )
          {
            m_CallbackLock = this->m_IoDeviceControl.m_CallbackLock;
            PreviousIrql = 0;
            if ( m_CallbackLock )
              m_CallbackLock->Lock(m_CallbackLock, &PreviousIrql);
            this->m_IoDeviceControl.Method(v5, v10, Length, Options, LowPart);
            v18 = this->m_IoDeviceControl.m_CallbackLock;
            if ( v18 )
              v18->Unlock(v18, PreviousIrql);
          }
          goto LABEL_22;
        }
      }
      else if ( (_BYTE)MajorFunction == 15 && this->m_IoInternalDeviceControl.Method )
      {
        pRequest->m_Presented = 1;
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x37u, WPP_FxIoQueue_cpp_Traceguids, v10);
        if ( this->m_ObjectSize )
          v5 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        FxIoQueueIoInternalDeviceControl::Invoke(
          &this->m_IoInternalDeviceControl,
          v5,
          v10,
          pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length,
          pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options,
          pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart);
        goto LABEL_22;
      }
LABEL_31:
      if ( !this->m_IoDefault.Method )
      {
        WPP_IFR_SF_Lqd(
          m_Globals,
          m_ObjectSize,
          v8,
          0x3Bu,
          WPP_FxIoQueue_cpp_Traceguids,
          MajorFunction,
          pRequest,
          -1073741808);
        FxRequest::Complete(pRequest, -1073741808);
        if ( m_Globals->FxVerifierOn )
        {
          v27 = 3436LL;
          goto LABEL_99;
        }
        return;
      }
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x38u, WPP_FxIoQueue_cpp_Traceguids, v10);
      if ( this->m_AllowZeroLengthRequests )
        goto LABEL_35;
      if ( (_BYTE)MajorFunction == 3 )
      {
        if ( !pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length )
        {
          if ( m_Globals->FxVerboseOn )
          {
            v36 = this->m_ObjectSize;
            v37 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v36 )
              v37 = 0LL;
            WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x39u, WPP_FxIoQueue_cpp_Traceguids, v10, v37);
          }
          FxRequest::Complete(pRequest, 0);
          if ( m_Globals->FxVerifierOn )
          {
            v27 = 3384LL;
            goto LABEL_99;
          }
          return;
        }
      }
      else if ( (_BYTE)MajorFunction == 4
             && !pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length )
      {
        FxRequest::Complete(pRequest, 0);
        if ( m_Globals->FxVerboseOn )
        {
          v38 = this->m_ObjectSize;
          v39 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v38 )
            v39 = 0LL;
          WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x3Au, WPP_FxIoQueue_cpp_Traceguids, v10, v39);
        }
        if ( m_Globals->FxVerifierOn )
        {
          v27 = 3405LL;
          goto LABEL_99;
        }
        return;
      }
LABEL_35:
      pRequest->m_Presented = 1;
      p_m_IoDefault = &this->m_IoDefault;
      if ( this->m_ObjectSize )
        v20 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v20 = 0LL;
      FxIoQueueIoDefault::Invoke(p_m_IoDefault, v20, v10);
      goto LABEL_22;
    }
    if ( !this->m_IoWrite.Method )
      goto LABEL_31;
    v32 = CurrentStackLocation->Parameters.Read.Length;
    if ( !v32 && !this->m_AllowZeroLengthRequests )
    {
      if ( m_Globals->FxVerboseOn )
      {
        v33 = this->m_ObjectSize;
        v34 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v33 )
          v34 = 0LL;
        WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x34u, WPP_FxIoQueue_cpp_Traceguids, v10, v34);
      }
      FxRequest::Complete(pRequest, 0);
      if ( m_Globals->FxVerifierOn )
      {
        v27 = 3300LL;
        goto LABEL_99;
      }
      return;
    }
    pRequest->m_Presented = 1;
    if ( m_Globals->FxVerboseOn )
    {
      v35 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        v35 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x35u, WPP_FxIoQueue_cpp_Traceguids, v35);
    }
    p_m_IoWrite = &this->m_IoWrite;
    v29 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v30 = v32;
    v31 = v10;
    if ( !this->m_ObjectSize )
      v29 = 0LL;
LABEL_61:
    FxIoQueueIoWrite::Invoke(p_m_IoWrite, v29, v31, v30);
LABEL_22:
    if ( !m_Globals->FxVerifierOn )
      return;
    PreviousIrql = 0;
    FxNonPagedObject::Lock(pRequest, &PreviousIrql);
    m_VerifierFlags = pRequest->m_VerifierFlags;
    FxNonPagedObject::Unlock(pRequest, PreviousIrql);
    if ( (m_VerifierFlags & 4) == 0 )
      FxRequestBase::ClearVerifierFlags(pRequest, 8);
    v27 = 3465LL;
LABEL_99:
    pRequest->Release(
      pRequest,
      (void *)1952543827,
      v27,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    return;
  }
  if ( !this->m_IoRead.Method )
    goto LABEL_31;
  v24 = CurrentStackLocation->Parameters.Read.Length;
  if ( v24 || this->m_AllowZeroLengthRequests )
  {
    pRequest->m_Presented = 1;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x33u, WPP_FxIoQueue_cpp_Traceguids, v10);
    p_m_IoWrite = (FxIoQueueIoWrite *)&this->m_IoRead;
    v29 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v30 = v24;
    v31 = v10;
    if ( !this->m_ObjectSize )
      v29 = 0LL;
    goto LABEL_61;
  }
  if ( m_Globals->FxVerboseOn )
  {
    v25 = this->m_ObjectSize;
    _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v25 )
      _a2 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x32u, WPP_FxIoQueue_cpp_Traceguids, v10, _a2);
  }
  FxRequest::Complete(pRequest, 0);
  if ( m_Globals->FxVerifierOn )
  {
    v27 = 3261LL;
    goto LABEL_99;
  }
}
