__int64 __fastcall FxRequest::Vf_VerifyRequestCanBeCompleted(FxRequest *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  _FX_DRIVER_GLOBALS *v3; // rsi
  char v4; // dl
  int IsCurrentStackValid; // ebx
  unsigned __int64 _a2; // rax

  v3 = FxDriverGlobals;
  LOBYTE(FxDriverGlobals) = FxDriverGlobals->FxVerifierOn;
  if ( !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, (unsigned int)FxDriverGlobals, 0xBu) )
  {
    if ( v4 )
      return (unsigned int)FxRequest::Vf_VerifyRequestIsAllocatedFromIo(this, v3);
    return 0;
  }
  if ( !v4 || (IsCurrentStackValid = FxRequest::Vf_VerifyRequestIsCurrentStackValid(this, v3), IsCurrentStackValid >= 0) )
  {
    if ( !this->m_CanComplete )
    {
      IsCurrentStackValid = -1073741808;
      _a2 = FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qid(v3, 2u, 0x10u, 0x3Eu, WPP_FxRequest_cpp_Traceguids, this->m_Irp.m_Irp, _a2, -1073741808);
      FxVerifierDbgBreakPoint(v3);
      return (unsigned int)IsCurrentStackValid;
    }
    return 0;
  }
  return (unsigned int)IsCurrentStackValid;
}
