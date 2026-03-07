__int64 __fastcall FxIoQueue::Vf_VerifyForwardRequestToParent(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxIoQueue *DestQueue,
        FxRequest *Request)
{
  FxDeviceBase *m_DeviceBase; // rax
  int IsDriverOwned; // edi
  const void *ObjectHandleUnchecked; // rax
  int v11; // r10d
  unsigned __int16 v12; // r9
  unsigned __int8 v13; // r8
  FxDeviceBase *v14; // rcx
  const void *_a1; // rax
  __int64 _a2; // rdx
  int _a3; // r10d
  __int64 v18; // rax
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_DeviceBase = this->m_DeviceBase;
  irql = 0;
  if ( !*(_QWORD *)&m_DeviceBase[1].m_ObjectFlags )
  {
    IsDriverOwned = -1073741808;
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(DestQueue->m_DeviceBase);
    v12 = 32;
LABEL_18:
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xDu, v12, WPP_FxIoQueue_cpp_Traceguids, ObjectHandleUnchecked, v11);
    goto LABEL_19;
  }
  FxNonPagedObject::Lock(Request, &irql, (unsigned __int8)DestQueue);
  if ( !FxDriverGlobals->FxVerifierOn )
    goto LABEL_7;
  IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(Request, FxDriverGlobals);
  if ( IsDriverOwned < 0 )
    goto LABEL_8;
  if ( FxDriverGlobals->FxVerifierOn )
    IsDriverOwned = FxRequest::Vf_VerifyRequestIsNotCancelable(Request, FxDriverGlobals);
  else
LABEL_7:
    IsDriverOwned = 0;
LABEL_8:
  FxNonPagedObject::Unlock(Request, irql, v13);
  if ( IsDriverOwned >= 0 )
  {
    if ( DestQueue == this )
    {
      IsDriverOwned = -1073741808;
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      v12 = 33;
      goto LABEL_18;
    }
    v14 = this->m_DeviceBase;
    if ( *(FxDeviceBase **)&v14[1].m_ObjectFlags != DestQueue->m_DeviceBase )
    {
      IsDriverOwned = -1073741808;
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(DestQueue->m_DeviceBase);
      v12 = 34;
      goto LABEL_18;
    }
    if ( Request->m_Reserved )
    {
      IsDriverOwned = -1073741808;
      FxObject::GetObjectHandleUnchecked(DestQueue->m_DeviceBase);
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(Request);
      WPP_IFR_SF_qid(FxDriverGlobals, 2u, 0xDu, 0x23u, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2, _a3);
LABEL_19:
      FxVerifierDbgBreakPoint(FxDriverGlobals);
      return (unsigned int)IsDriverOwned;
    }
    v18 = *(_QWORD *)&v14[3].m_SpinLock.m_DbgFlagIsInitialized;
    if ( v18 && !*(_BYTE *)(v18 + 1779) )
    {
      IsDriverOwned = -1073741808;
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(v14);
      v12 = 36;
      goto LABEL_18;
    }
  }
  return (unsigned int)IsDriverOwned;
}
