__int64 __fastcall FxSystemWorkItem::Initialize(FxSystemWorkItem *this, _DEVICE_OBJECT *WdmObject, void *a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int v4; // ebx

  m_Globals = this->m_Globals;
  this->m_ObjectFlags |= 0x811u;
  v4 = MxWorkItem::Allocate(&this->m_WorkItem, WdmObject, a3);
  if ( v4 >= 0 )
    return 0LL;
  WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xDu, WPP_FxSystemWorkitem_cpp_Traceguids);
  return (unsigned int)v4;
}
