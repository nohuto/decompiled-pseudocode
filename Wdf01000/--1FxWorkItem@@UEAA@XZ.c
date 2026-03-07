void __fastcall FxWorkItem::~FxWorkItem(FxWorkItem *this, unsigned int a2)
{
  bool v2; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  const void *_a1; // rax
  FxObject *m_Object; // rcx

  v2 = this->m_RunningDown == 0;
  this->__vftable = (FxWorkItem_vtbl *)FxWorkItem::`vftable';
  if ( v2 && this->m_Callback )
  {
    m_Globals = this->m_Globals;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xAu, WPP_FxWorkItem_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  m_Object = this->m_Object;
  if ( m_Object )
  {
    m_Object->Release(m_Object, this, 91, "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp");
    this->m_Object = 0LL;
  }
  if ( this->m_WorkItem.m_WorkItem )
    MxWorkItem::Free(&this->m_WorkItem);
  FxNonPagedObject::~FxNonPagedObject(this, a2);
}
