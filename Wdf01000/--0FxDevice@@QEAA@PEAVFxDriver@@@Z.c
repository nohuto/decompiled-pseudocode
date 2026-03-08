/*
 * XREFs of ??0FxDevice@@QEAA@PEAVFxDriver@@@Z @ 0x1C003D444
 * Callers:
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C003EF34 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 * Callees:
 *     ??0FxDeviceBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDriver@@GG@Z @ 0x1C0038AF0 (--0FxDeviceBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDriver@@GG@Z.c)
 *     ?SetInitialState@FxDevice@@AEAAXXZ @ 0x1C003EA2C (-SetInitialState@FxDevice@@AEAAXXZ.c)
 */

void __fastcall FxDevice::FxDevice(FxDevice *this, FxDriver *ArgDriver)
{
  FxDeviceBase::FxDeviceBase(this, ArgDriver->m_Globals, ArgDriver, 0x1002u, 0x2C0u);
  this->FxDeviceBase::FxNonPagedObject::FxObject::__vftable = (FxDevice_vtbl *)FxDevice::`vftable'{for `FxNonPagedObject'};
  this->FxDeviceBase::IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)FxDevice::`vftable'{for `IFxHasCallbacks'};
  this->m_ParentDevice = 0LL;
  this->m_IoTargetsList.m_ListHead.Blink = &this->m_IoTargetsList.m_ListHead;
  this->m_IoTargetsList.m_ListHead.Flink = &this->m_IoTargetsList.m_ListHead;
  this->m_IoTargetsList.m_TransactionHead.Blink = &this->m_IoTargetsList.m_TransactionHead;
  this->m_IoTargetsList.m_TransactionHead.Flink = &this->m_IoTargetsList.m_TransactionHead;
  this->m_IoTargetsList.m_ListLockedRecursionCount = 0;
  *(_WORD *)&this->m_IoTargetsList.m_DeleteOnRemove = 0;
  this->m_IoTargetsList.m_Retries = 0;
  this->m_IoTargetsList.m_DeletingDoneEvent = 0LL;
  this->m_IoTargetsList.m_ListLock.m_Lock = 0LL;
  this->m_IoTargetsList.__vftable = (FxSpinLockTransactionedList_vtbl *)FxSpinLockTransactionedList::`vftable';
  this->m_IoTargetsList.m_ListLock.m_DbgFlagIsInitialized = 1;
  FxDevice::SetInitialState(this);
}
