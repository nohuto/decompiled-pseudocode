__int64 __fastcall FxIoTarget::Vf_VerifySubmitLocked(
        FxIoTarget *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequestBase *Request)
{
  unsigned int v5; // edi
  unsigned __int8 v7; // r8
  __int16 m_VerifierFlags; // ax
  unsigned __int64 v9; // rax
  int _a2; // r8d
  FxRequestBase *_a1; // rcx
  unsigned __int64 ObjectHandleUnchecked; // rax
  FxRequestBase *v13; // rcx
  ULONG_PTR v14; // rax
  _IRP *m_Irp; // rbp
  unsigned __int64 v16; // rax
  const void *_a5; // rdx
  int v18; // r8d
  int _a6; // r10d
  int _a4; // r11d
  FxRequestBase *v21; // rcx
  unsigned __int8 irql; // [rsp+90h] [rbp+18h] BYREF

  v5 = 0;
  irql = 0;
  FxNonPagedObject::Lock(Request, &irql, (unsigned __int8)Request);
  m_VerifierFlags = Request->m_VerifierFlags;
  if ( (m_VerifierFlags & 0x80u) != 0 )
  {
    if ( (m_VerifierFlags & 0x100) != 0 )
    {
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(Request);
      v13 = Request;
      if ( ObjectHandleUnchecked )
        v13 = (FxRequestBase *)ObjectHandleUnchecked;
      WPP_IFR_SF_q(FxDriverGlobals, 2u, 0xEu, 0x1Bu, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v13);
      v14 = FxObject::GetObjectHandleUnchecked(Request);
      FxVerifierBugCheckWorker(FxDriverGlobals, WDF_REQUEST_FATAL_ERROR, 3uLL, v14);
    }
    m_Irp = Request->m_Irp.m_Irp;
    if ( m_Irp->CurrentLocation - 1 < this->m_TargetStackSize )
    {
      v5 = -1073741616;
      FxObject::GetObjectHandleUnchecked(this);
      v16 = FxObject::GetObjectHandleUnchecked(Request);
      v21 = Request;
      if ( v16 )
        v21 = (FxRequestBase *)v16;
      WPP_IFR_SF_qqdqdd(
        FxDriverGlobals,
        (unsigned __int8)_a5,
        0xEu,
        0x1Cu,
        (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids,
        v21,
        m_Irp,
        _a4,
        _a5,
        _a6,
        v18);
    }
  }
  else
  {
    v5 = -1073741616;
    v9 = FxObject::GetObjectHandleUnchecked(Request);
    _a1 = Request;
    if ( v9 )
      _a1 = (FxRequestBase *)v9;
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xEu, 0x1Au, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
  }
  FxNonPagedObject::Unlock(Request, irql, v7);
  return v5;
}
