/*
 * XREFs of ??0FxChildList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@_KPEAVFxDevice@@E@Z @ 0x1C0023554
 * Callers:
 *     ?_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KPEAVFxDevice@@PEAU_WDF_CHILD_LIST_CONFIG@@E@Z @ 0x1C00268E8 (-_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KP.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001AA5C (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxChildList::FxChildList(
        FxChildList *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 TotalDescriptionSize,
        FxDevice *Device,
        unsigned __int8 Static)
{
  FxNonPagedObject::FxNonPagedObject(this, 0x1029u, 0x168u, FxDriverGlobals);
  this->m_TotalDescriptionSize = TotalDescriptionSize;
  this->__vftable = (FxChildList_vtbl *)FxChildList::`vftable';
  this->m_EvtCreateDevice.m_Method = 0LL;
  this->m_TransactionLink.m_TransactionedObject = 0LL;
  this->m_TransactionLink.m_Transaction = FxTransactionActionNothing;
  this->m_TransactionLink.m_ListLink.Blink = &this->m_TransactionLink.m_ListLink;
  this->m_TransactionLink.m_ListLink.Flink = &this->m_TransactionLink.m_ListLink;
  this->m_EvtScanForChildren.m_Method = 0LL;
  this->m_ScanEvent.m_DbgFlagIsInitialized = 0;
  this->m_TransactionLink.m_TransactionedObject = this;
  this->m_TransactionLink.m_TransactionLink.Blink = &this->m_TransactionLink.m_TransactionLink;
  this->m_TransactionLink.m_TransactionLink.Flink = &this->m_TransactionLink.m_TransactionLink;
  *(_QWORD *)&this->m_IdentificationDescriptionSize = 0LL;
  this->m_EvtIdentificationDescriptionDuplicate = 0LL;
  this->m_EvtIdentificationDescriptionCopy = 0LL;
  this->m_EvtIdentificationDescriptionCleanup = 0LL;
  this->m_EvtIdentificationDescriptionCompare = 0LL;
  this->m_EvtAddressDescriptionDuplicate = 0LL;
  this->m_EvtAddressDescriptionCopy = 0LL;
  this->m_EvtAddressDescriptionCleanup = 0LL;
  this->m_ListLock = 0LL;
  this->m_DeviceBase = Device;
  this->m_DescriptionListHead.Blink = &this->m_DescriptionListHead;
  this->m_DescriptionListHead.Flink = &this->m_DescriptionListHead;
  this->m_ModificationListHead.Blink = &this->m_ModificationListHead;
  this->m_ModificationListHead.Flink = &this->m_ModificationListHead;
  this->m_InvalidationNeeded = 0;
  *(_WORD *)&this->m_IsAdded = 0;
  this->m_ScanTag = 0LL;
  this->m_ScanCount = 0;
  this->m_StaticList = Static;
  this->m_State = ListUnlocked;
  KeInitializeEvent(&this->m_ScanEvent.m_Event, NotificationEvent, 1u);
  this->m_ScanEvent.m_DbgFlagIsInitialized = 1;
  this->m_ObjectFlags |= 0x800u;
}
