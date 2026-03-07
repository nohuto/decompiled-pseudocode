void __fastcall FxDpc::~FxDpc(FxDpc *this, unsigned int a2)
{
  bool v2; // zf
  const void *_a1; // rax

  v2 = this->m_Object == 0LL;
  this->__vftable = (FxDpc_vtbl *)FxDpc::`vftable';
  if ( !v2 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(this->m_Globals, 2u, 0x12u, 0xAu, WPP_FxDpc_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  FxNonPagedObject::~FxNonPagedObject(this, a2);
}
