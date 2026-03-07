void __fastcall FxIoTargetRemote::FxIoTargetRemote(FxIoTargetRemote *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  unsigned __int8 v3; // dl

  FxIoTarget::FxIoTarget(this, FxDriverGlobals, 0x1F8u);
  this->__vftable = (FxIoTargetRemote_vtbl *)FxIoTargetRemote::`vftable';
  this->m_EvtQueryRemove.m_Method = 0LL;
  this->m_EvtRemoveCanceled.m_Method = 0LL;
  this->m_EvtRemoveComplete.m_Method = 0LL;
  FxCREvent::FxCREvent(&this->m_OpenedEvent, v3);
  memset(&this->m_OpenParams, 0, sizeof(this->m_OpenParams));
  this->m_ClearedPointers = 0LL;
  this->m_TargetHandle = 0LL;
  this->m_EvtQueryRemove.m_Method = 0LL;
  this->m_EvtRemoveCanceled.m_Method = 0LL;
  this->m_EvtRemoveComplete.m_Method = 0LL;
  this->m_TargetNotifyHandle = 0LL;
  this->m_InStack = 0;
  this->m_OpenState = 1;
}
