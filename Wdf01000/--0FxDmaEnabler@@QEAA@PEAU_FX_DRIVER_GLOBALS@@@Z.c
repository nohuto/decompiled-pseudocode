void __fastcall FxDmaEnabler::FxDmaEnabler(FxDmaEnabler *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxNonPagedObject::FxNonPagedObject(this, 0x1400u, 0x2C0u, FxDriverGlobals);
  this->__vftable = (FxDmaEnabler_vtbl *)FxDmaEnabler::`vftable';
  this->m_EvtDmaEnablerFill.m_Status = 0;
  this->m_TransactionLink.m_Transaction = FxTransactionActionNothing;
  this->m_TransactionLink.m_TransactionedObject = 0LL;
  this->m_TransactionLink.m_ListLink.Blink = &this->m_TransactionLink.m_ListLink;
  this->m_TransactionLink.m_ListLink.Flink = &this->m_TransactionLink.m_ListLink;
  this->m_EvtDmaEnablerFlush.m_Status = 0;
  this->m_EvtDmaEnablerEnable.m_Status = 0;
  this->m_EvtDmaEnablerDisable.m_Status = 0;
  this->m_TransactionLink.m_TransactionLink.Blink = &this->m_TransactionLink.m_TransactionLink;
  this->m_TransactionLink.m_TransactionLink.Flink = &this->m_TransactionLink.m_TransactionLink;
  this->m_EvtDmaEnablerSelfManagedIoStart.m_Status = 0;
  this->m_EvtDmaEnablerSelfManagedIoStop.m_Status = 0;
  memset(&this->184, 0, sizeof(this->184));
  this->m_TransactionLink.m_TransactionedObject = this;
  this->m_MaxSGElements = -1;
  *((_BYTE *)this + 380) &= 0x86u;
  this->m_FDO = 0LL;
  this->m_PDO = 0LL;
  this->m_CommonBufferAlignment = 0;
  this->m_SGListSize = 0LL;
  this->m_EvtDmaEnablerFill.m_Method = 0LL;
  this->m_EvtDmaEnablerFlush.m_Method = 0LL;
  this->m_EvtDmaEnablerEnable.m_Method = 0LL;
  this->m_EvtDmaEnablerDisable.m_Method = 0LL;
  this->m_EvtDmaEnablerSelfManagedIoStart.m_Method = 0LL;
  this->m_EvtDmaEnablerSelfManagedIoStop.m_Method = 0LL;
  *(_WORD *)&this->m_DmaEnablerFillFailed = 0;
  this->m_DmaEnablerSelfManagedIoStartFailed = 0;
  memset(&this->m_SGList, 0, sizeof(this->m_SGList));
  this->m_ObjectFlags |= 0x800u;
}
