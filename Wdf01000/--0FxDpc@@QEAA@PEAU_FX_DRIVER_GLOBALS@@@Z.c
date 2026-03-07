void __fastcall FxDpc::FxDpc(FxDpc *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxNonPagedObject::FxNonPagedObject(this, 0x1015u, 0xE0u, FxDriverGlobals);
  this->__vftable = (FxDpc_vtbl *)FxDpc::`vftable';
  this->m_Object = 0LL;
  this->m_CallbackLock = 0LL;
  this->m_CallbackLockObject = 0LL;
  this->m_Callback = 0LL;
  this->m_RunningDown = 0;
  this->m_ObjectFlags |= 0x810u;
}
