void __fastcall FxTimer::~FxTimer(FxTimer *this, __int64 a2)
{
  bool v2; // zf
  const void *_a1; // rax
  unsigned int v5; // edx

  v2 = this->m_Object == 0LL;
  this->__vftable = (FxTimer_vtbl *)FxTimer::`vftable';
  if ( !v2 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(this->m_Globals, 2u, 0x12u, 0xAu, WPP_FxTimer_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  MxTimer::~MxTimer(&this->m_Timer, a2);
  FxNonPagedObject::~FxNonPagedObject(this, v5);
}
