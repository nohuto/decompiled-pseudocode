__int64 __fastcall imp_WdfRequestForwardToIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int64 DestinationQueue)
{
  __int16 updated; // bp
  __int64 Offset; // rcx
  FxIoQueue *v6; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  FxTagTracker *v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 v10; // rdi
  _FX_DRIVER_GLOBALS *v11; // rdx
  __int64 v12; // r15
  _FX_DRIVER_GLOBALS *RefCount; // rdx
  FxRequestCompletionState v14; // r14d
  unsigned __int8 v15; // r8
  _QWORD *v16; // r14
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  FxVerifierLock **v19; // r13
  unsigned __int64 *v20; // r15
  unsigned __int8 v21; // r8
  int v22; // r12d
  unsigned __int8 v23; // r8
  const void *v25; // rcx
  FxVerifierLock *v26; // rcx
  _QWORD *v27; // rcx
  unsigned __int8 v28; // dl
  void *PPObject; // [rsp+30h] [rbp-48h] BYREF
  __int64 v30; // [rsp+38h] [rbp-40h]
  unsigned __int8 PreviousIrql; // [rsp+80h] [rbp+8h] BYREF
  FxRequestCompletionState NewState; // [rsp+90h] [rbp+18h]
  FxIoQueue *queue; // [rsp+98h] [rbp+20h] BYREF

  updated = 0;
  PPObject = 0LL;
  queue = 0LL;
  if ( !DestinationQueue )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
  LOWORD(Offset) = 0;
  v6 = (FxIoQueue *)(~DestinationQueue & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (DestinationQueue & 1) != 0 )
  {
    Offset = LOWORD(v6->FxNonPagedObject::FxObject::__vftable);
    v6 = (FxIoQueue *)((char *)v6 - Offset);
  }
  if ( v6->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    queue = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, (void **)&queue, (void *)DestinationQueue, 0x1003u, Offset);
    v6 = queue;
  }
  m_Globals = v6->m_Globals;
  if ( !Request )
    FxVerifierBugCheckWorker(v6->m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v8 = 0LL;
  v9 = ~Request & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (Request & 1) != 0 )
  {
    v8 = (FxTagTracker *)*(unsigned __int16 *)v9;
    v9 -= (unsigned __int64)v8;
  }
  if ( *(_WORD *)(v9 + 8) == 4104 )
  {
    PPObject = (void *)v9;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v9, &PPObject, (void *)Request, 0x1008u, (unsigned __int16)v8);
    v9 = (unsigned __int64)PPObject;
    v6 = queue;
  }
  if ( *(_BYTE *)(v9 + 214) || (v10 = *(_QWORD *)(v9 + 248)) == 0 )
  {
    if ( m_Globals->FxVerifierOn )
    {
      v22 = Vf_VerifyWdfRequestForwardToIoQueue(m_Globals, (FxRequest *)v9);
      if ( v22 < 0 )
        return (unsigned int)v22;
      v9 = (unsigned __int64)PPObject;
      v6 = queue;
    }
    return (unsigned int)FxIoQueue::QueueDriverCreatedRequest(v6, (FxRequest *)v9, 0);
  }
  v11 = *(_FX_DRIVER_GLOBALS **)(v10 + 16);
  if ( !v11->FxVerifierOn
    || (v22 = FxIoQueue::Vf_VerifyForwardRequest(*(FxIoQueue **)(v9 + 248), v11, v6, (FxRequest *)v9), v22 >= 0) )
  {
    v12 = *(_QWORD *)(v10 + 16);
    v30 = v12;
    PreviousIrql = 0;
    RefCount = (_FX_DRIVER_GLOBALS *)(unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v9 + 12));
    if ( *(char *)(v9 + 24) < 0 )
    {
      v8 = *(FxTagTracker **)(v9 - 48);
      if ( v8 )
        FxTagTracker::UpdateTagHistory(
          v8,
          (void *)0x74617453,
          1399,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
          TagAddRef,
          (unsigned int)RefCount);
    }
    if ( *(_BYTE *)(v9 + 214) )
    {
      NewState = FxRequestCompletionStateNone;
      v25 = (const void *)(v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !*(_WORD *)(v9 + 10) )
        v25 = 0LL;
      WPP_IFR_SF_q(*(_FX_DRIVER_GLOBALS **)(v9 + 16), 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v25);
      FxVerifierDbgBreakPoint(*(_FX_DRIVER_GLOBALS **)(v9 + 16));
    }
    else
    {
      v14 = *(unsigned __int8 *)(v9 + 237);
      NewState = v14;
      *(_BYTE *)(v9 + 237) = 0;
      if ( v14 )
        (*(void (__fastcall **)(unsigned __int64, __int64, __int64, const char *))(*(_QWORD *)v9 + 16LL))(
          v9,
          1952543827LL,
          1813LL,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
    if ( *(_BYTE *)(v12 + 324) )
      updated = FxIoQueue::Vf_VerifyForwardRequestUpdateFlags((FxIoQueue *)v8, RefCount, (FxRequest *)v9);
    if ( *(char *)(v10 + 24) < 0 && (v26 = *(FxVerifierLock **)(v10 - 40)) != 0LL )
    {
      FxVerifierLock::Lock(v26, &PreviousIrql, DestinationQueue);
      v15 = PreviousIrql;
    }
    else
    {
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 112));
      PreviousIrql = v15;
    }
    v16 = (_QWORD *)(v9 + 304);
    v17 = *(_QWORD *)(v9 + 304);
    if ( *(_QWORD *)(v17 + 8) == v9 + 304 )
    {
      v18 = *(_QWORD **)(v9 + 312);
      if ( (_QWORD *)*v18 == v16 )
      {
        *v18 = v17;
        v19 = (FxVerifierLock **)(v10 - 40);
        *(_QWORD *)(v17 + 8) = v18;
        *(_QWORD *)(v9 + 312) = v9 + 304;
        *v16 = v16;
        if ( *(char *)(v10 + 24) < 0 && *v19 )
        {
          FxVerifierLock::Unlock(*v19, v15, v15);
          v20 = (unsigned __int64 *)(v10 + 112);
        }
        else
        {
          v20 = (unsigned __int64 *)(v10 + 112);
          KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 112), v15);
        }
        v22 = FxIoQueue::QueueRequestFromForward(v6, (FxRequest *)v9);
        if ( v22 >= 0 )
        {
          if ( *(char *)(v10 + 24) < 0 && *v19 )
            FxVerifierLock::Lock(*v19, &PreviousIrql, v21);
          else
            PreviousIrql = KeAcquireSpinLockRaiseToDpc(v20);
          --*(_DWORD *)(v10 + 376);
          if ( *(_DWORD *)(v10 + 368) )
          {
            if ( *(char *)(v10 + 24) < 0 && *v19 )
              FxVerifierLock::Unlock(*v19, PreviousIrql, v23);
            else
              KeReleaseSpinLock(v20, PreviousIrql);
          }
          else
          {
            FxIoQueue::DispatchEvents((FxIoQueue *)v10, PreviousIrql, 0LL);
          }
          return (unsigned int)v22;
        }
        FxRequest::SetCompletionState((FxRequest *)v9, NewState);
        if ( *(_BYTE *)(v30 + 324) )
          FxRequestBase::SetVerifierFlags((FxRequestBase *)v9, updated);
        (*(void (__fastcall **)(unsigned __int64, __int64, __int64, const char *))(*(_QWORD *)v9 + 16LL))(
          v9,
          1952543827LL,
          1461LL,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
        FxNonPagedObject::Lock((FxNonPagedObject *)v10, &PreviousIrql);
        v27 = *(_QWORD **)(v10 + 312);
        if ( *v27 == v10 + 304 )
        {
          v28 = PreviousIrql;
          *(_QWORD *)(v9 + 312) = v27;
          *v16 = v10 + 304;
          *v27 = v16;
          *(_QWORD *)(v10 + 312) = v16;
          FxNonPagedObject::Unlock((FxNonPagedObject *)v10, v28);
          return (unsigned int)v22;
        }
      }
    }
    __fastfail(3u);
  }
  return (unsigned int)v22;
}
