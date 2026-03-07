void __fastcall FxDmaPacketTransaction::FxDmaPacketTransaction(
        FxDmaPacketTransaction *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 ObjectSize,
        unsigned __int16 ExtraSize,
        FxDmaEnabler *DmaEnabler)
{
  FxDmaTransactionBase::FxDmaTransactionBase(this, FxDriverGlobals, ObjectSize, ExtraSize, DmaEnabler);
  this->__vftable = (FxDmaPacketTransaction_vtbl *)FxDmaPacketTransaction::`vftable';
  this->m_TransferState.CompletionStatus = -1;
  this->m_MapRegistersNeeded = 0;
  this->m_MapRegisterBase = 0LL;
  this->m_MapRegisterBaseSet = 0;
  *(_QWORD *)&this->m_DeviceAddressOffset = 0LL;
  this->m_IsCancelled = 0;
  this->m_TransferState.CurrentStagingThread = 0LL;
  *(_WORD *)&this->m_TransferState.RerunStaging = 0;
}
