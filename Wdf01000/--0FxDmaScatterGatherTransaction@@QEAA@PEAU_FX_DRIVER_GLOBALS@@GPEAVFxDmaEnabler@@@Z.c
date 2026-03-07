void __fastcall FxDmaScatterGatherTransaction::FxDmaScatterGatherTransaction(
        FxDmaScatterGatherTransaction *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 ExtraSize,
        FxDmaEnabler *DmaEnabler)
{
  FxDmaTransactionBase::FxDmaTransactionBase(this, FxDriverGlobals, 0x118u, ExtraSize, DmaEnabler);
  this->__vftable = (FxDmaScatterGatherTransaction_vtbl *)FxDmaScatterGatherTransaction::`vftable';
  this->m_SGList = 0LL;
  this->m_SGListBuffer = 0LL;
  this->m_SgListBufferSize = 0;
  this->m_IsBufferFromLookaside = 0;
}
