__int64 __fastcall FxRequest::Vf_VerifyRequestIsNotCompleted(FxRequest *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  unsigned int v2; // ebx
  const void *_a1; // rax

  v2 = 0;
  if ( this->m_Completed )
  {
    v2 = -1073741595;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x10u, 0x39u, WPP_FxRequest_cpp_Traceguids, _a1, -1073741595);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  return v2;
}
