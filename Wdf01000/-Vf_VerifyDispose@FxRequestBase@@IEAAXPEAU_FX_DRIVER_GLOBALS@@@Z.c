void __fastcall FxRequestBase::Vf_VerifyDispose(
        FxRequestBase *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int8 a3)
{
  unsigned __int8 v5; // r8
  unsigned __int64 ObjectHandleUnchecked; // rax
  const void *_a2; // rdx
  FxRequestBase *_a1; // rcx
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( _bittest16(&this->m_VerifierFlags, 8u) )
  {
    FxObject::GetObjectHandleUnchecked(this->m_Target);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    _a1 = this;
    if ( ObjectHandleUnchecked )
      _a1 = (FxRequestBase *)ObjectHandleUnchecked;
    WPP_IFR_SF_qq(FxDriverGlobals, 2u, 0x10u, 0xAu, WPP_FxRequestBase_cpp_Traceguids, _a1, _a2);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  FxNonPagedObject::Unlock(this, irql, v5);
}
