__int64 __fastcall FxIoQueue::QueueRequest(FxIoQueue *this, FxRequest *pRequest, unsigned __int8 a3)
{
  FxRequest *v3; // rbx
  unsigned __int8 v5; // r8
  unsigned __int8 FxVerboseOn; // al
  const void *globals; // rdx
  const void *_a3; // r8
  _FX_DRIVER_GLOBALS *v9; // r10
  unsigned int _a4; // r11d
  const char *_a5; // rax
  const void *ObjectHandleUnchecked; // rax
  const void *v14; // rdx
  _FX_DRIVER_GLOBALS *v15; // r10
  unsigned int *v16; // r8
  unsigned __int16 v17; // r9
  unsigned __int8 v18; // r8
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF
  FxRequest *Request; // [rsp+68h] [rbp+10h] BYREF
  _IRP *pIrp; // [rsp+70h] [rbp+18h] BYREF

  Request = pRequest;
  pIrp = 0LL;
  v3 = pRequest;
  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( v3->m_Reserved )
    FxObject::AddRef(v3, (void *)0x50647746, 2311, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  FxVerboseOn = this->m_Globals->FxVerboseOn;
  if ( (this->m_QueueState & 1) != 0 )
  {
    if ( FxVerboseOn )
    {
      FxObject::GetObjectHandleUnchecked(this);
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(v3);
      WPP_IFR_SF_qq(v15, 5u, 0xDu, 0x2Au, WPP_FxIoQueue_cpp_Traceguids, ObjectHandleUnchecked, v14);
    }
    FxRequest::GetIrp(v3, &pIrp, v5);
    v3->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    if ( v3->m_Reserved )
    {
      if ( this->m_Dispatching )
      {
        LOBYTE(v16) = irql;
        FxIoQueue::InsertNewRequestLocked(this, &Request, v16);
        FxNonPagedObject::Unlock(this, irql, v18);
        return 259LL;
      }
      v3 = Request;
    }
    FxIoQueue::DispatchEvents(this, irql, v3, v17);
    return 259LL;
  }
  if ( FxVerboseOn )
  {
    FxObject::GetObjectHandleUnchecked(v3);
    _a3 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    _a5 = "power stopping (Drain) in progress,";
    if ( (_a4 & 0x10000) == 0 )
      _a5 = a5;
    WPP_IFR_SF_qLsqd(v9, 5u, (unsigned int)_a3, 0x29u, traceGuid, _a3, _a4, _a5, globals, -1073741436);
  }
  FxNonPagedObject::Unlock(this, irql, v5);
  v3->m_Irp.m_Irp->IoStatus.Information = 0LL;
  FxRequest::Complete(v3, -1073741436);
  v3->Release(v3, (void *)1886220099, 2338, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  return 3221225860LL;
}
