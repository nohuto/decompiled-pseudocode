/*
 * XREFs of ??0FxFileObjectInfo@@QEAA@XZ @ 0x1C0084CC4
 * Callers:
 *     ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0085608 (-Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxFileObjectInfo::FxFileObjectInfo(FxFileObjectInfo *this)
{
  this->AutoForwardCleanupClose = WdfUseDefault;
  this->EvtFileCreate.m_CallbackLock = 0LL;
  this->EvtFileCreate.Method = 0LL;
  this->EvtCxFileCreate.m_CallbackLock = 0LL;
  this->EvtCxFileCreate.Method = 0LL;
  this->EvtFileCleanup.m_CallbackLock = 0LL;
  this->EvtFileCleanup.Method = 0LL;
  this->EvtFileClose.m_CallbackLock = 0LL;
  this->EvtFileClose.Method = 0LL;
  this->FileObjectClass = WdfFileObjectInvalid;
  this->ClassExtension = 0;
  this->CxDeviceInfo = 0LL;
  this->ListEntry.Blink = (_LIST_ENTRY *)this;
  this->ListEntry.Flink = (_LIST_ENTRY *)this;
  *(_OWORD *)&this->Attributes.Size = 0LL;
  *(_OWORD *)&this->Attributes.EvtDestroyCallback = 0LL;
  *(_OWORD *)&this->Attributes.ParentObject = 0LL;
  this->Attributes.ContextTypeInfo = 0LL;
}
