void __fastcall FxInterrupt::~FxInterrupt(FxInterrupt *this, unsigned int a2)
{
  bool v2; // zf
  _FX_DRIVER_GLOBALS **p_m_Globals; // rdi

  v2 = this->m_Interrupt == 0LL;
  this->__vftable = (FxInterrupt_vtbl *)FxInterrupt::`vftable';
  p_m_Globals = &this->m_Globals;
  if ( !v2 )
  {
    WPP_IFR_SF_(*p_m_Globals, 2u, 0xCu, 0xAu, (const _GUID *)&WPP_InterruptObject_cpp_Traceguids);
    FxVerifierDbgBreakPoint(*p_m_Globals);
  }
  if ( this->m_DeviceBase )
  {
    WPP_IFR_SF_(*p_m_Globals, 2u, 0xCu, 0xBu, (const _GUID *)&WPP_InterruptObject_cpp_Traceguids);
    FxVerifierDbgBreakPoint(*p_m_Globals);
  }
  this->m_BuiltInSpinLock.m_DbgFlagIsInitialized = 0;
  FxNonPagedObject::~FxNonPagedObject(this, a2);
}
