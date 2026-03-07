__int64 __fastcall FxRequest::Vf_VerifyInsertIrpQueue(
        FxRequest *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxIrpQueue *IrpQueue)
{
  unsigned int v3; // ebx
  unsigned __int64 _a2; // rax
  const void *_a1; // r8

  v3 = 0;
  if ( this->m_IrpQueue )
  {
    v3 = -1073741595;
    _a2 = FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qid(FxDriverGlobals, 2u, 0x10u, 0x28u, WPP_FxRequest_cpp_Traceguids, _a1, _a2, -1073741595);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  else if ( FxDriverGlobals->FxVerifierOn )
  {
    return (unsigned int)FxRequest::Vf_VerifyRequestIsNotCompleted(this, FxDriverGlobals);
  }
  return v3;
}
