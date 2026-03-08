/*
 * XREFs of ??0FxIoTargetRemote@@IEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0054A08
 * Callers:
 *     ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x1C005563C (-_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBa.c)
 * Callees:
 *     memset @ 0x1C000AC00 (memset.c)
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1C0029A78 (--0FxCREvent@@QEAA@E@Z.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C00525C4 (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 */

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
