void __fastcall FxDmaScatterGatherTransaction::PutScatterGatherList(
        FxDmaScatterGatherTransaction *this,
        _SCATTER_GATHER_LIST *ScatterGather)
{
  KIRQL v4; // di
  _DMA_ADAPTER *AdapterObject; // rcx
  _DMA_OPERATIONS *DmaOperations; // r8
  void (__fastcall *PutScatterGatherList)(_DMA_ADAPTER *, _SCATTER_GATHER_LIST *, unsigned __int8); // rax

  v4 = KfRaiseIrql(2u);
  AdapterObject = this->m_AdapterInfo->AdapterObject;
  DmaOperations = AdapterObject->DmaOperations;
  PutScatterGatherList = DmaOperations->PutScatterGatherList;
  LOBYTE(DmaOperations) = this->m_DmaDirection;
  PutScatterGatherList(AdapterObject, ScatterGather, (unsigned __int8)DmaOperations);
  KeLowerIrql(v4);
}
