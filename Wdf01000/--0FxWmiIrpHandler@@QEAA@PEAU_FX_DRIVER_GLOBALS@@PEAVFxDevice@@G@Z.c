/*
 * XREFs of ??0FxWmiIrpHandler@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C0029AAC
 * Callers:
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C003E20C (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1C0029A78 (--0FxCREvent@@QEAA@E@Z.c)
 *     ??0FxPackage@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C0067CD0 (--0FxPackage@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 */

void __fastcall FxWmiIrpHandler::FxWmiIrpHandler(
        FxWmiIrpHandler *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDevice *Device,
        unsigned __int16 a4)
{
  unsigned __int8 v5; // dl

  FxPackage::FxPackage(this, FxDriverGlobals, Device, 0x1103u);
  this->m_NumProviders = 0;
  this->m_RegisteredState = WmiUnregistered;
  this->m_WorkItem = 0LL;
  this->__vftable = (FxWmiIrpHandler_vtbl *)FxWmiIrpHandler::`vftable';
  this->m_UpdateCount = 1;
  FxCREvent::FxCREvent(&this->m_UpdateEvent, v5);
  this->m_WorkItemEvent = 0LL;
  this->m_ProvidersListHead.Blink = &this->m_ProvidersListHead;
  this->m_ProvidersListHead.Flink = &this->m_ProvidersListHead;
  this->m_WorkItemQueued = 0;
}
