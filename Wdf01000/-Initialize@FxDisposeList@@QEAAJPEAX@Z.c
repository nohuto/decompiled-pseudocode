__int64 __fastcall FxDisposeList::Initialize(FxDisposeList *this, void *WdmObject)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  signed int _a1; // eax
  unsigned int v6; // edi

  m_Globals = this->m_Globals;
  this->m_ObjectFlags |= 0x800u;
  _a1 = FxSystemWorkItem::_Create(m_Globals, WdmObject, &this->m_SystemWorkItem);
  v6 = _a1;
  if ( _a1 >= 0 )
  {
    this->m_WdmObject = WdmObject;
    return 0LL;
  }
  else
  {
    WPP_IFR_SF_D(m_Globals, 2u, 0xDu, 0xAu, WPP_FxDisposeList_cpp_Traceguids, _a1);
    return v6;
  }
}
