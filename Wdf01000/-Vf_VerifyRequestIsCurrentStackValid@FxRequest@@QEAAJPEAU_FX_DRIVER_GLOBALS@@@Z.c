__int64 __fastcall FxRequest::Vf_VerifyRequestIsCurrentStackValid(FxRequest *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  _IRP *m_Irp; // r8
  unsigned int v3; // ebx
  const void *_a1; // rax
  int v6; // r8d
  int _a2; // edx
  unsigned __int64 ObjectHandleUnchecked; // rax
  int _a3; // edx
  const void *v10; // r8

  m_Irp = this->m_Irp.m_Irp;
  v3 = 0;
  if ( !m_Irp )
  {
    v3 = -1073741808;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, v6 + 16, v6 + 60, WPP_FxRequest_cpp_Traceguids, _a1, _a2);
LABEL_5:
    FxVerifierDbgBreakPoint(FxDriverGlobals);
    return v3;
  }
  if ( m_Irp->CurrentLocation > m_Irp->StackCount )
  {
    v3 = -1073741808;
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qid(FxDriverGlobals, 2u, 0x10u, 0x3Du, WPP_FxRequest_cpp_Traceguids, v10, ObjectHandleUnchecked, _a3);
    goto LABEL_5;
  }
  return v3;
}
