void (__fastcall *__fastcall FxDmaSystemTransaction::GetTransferCompletionRoutine(
        FxDmaSystemTransaction *this))(_DMA_ADAPTER *, _DEVICE_OBJECT *, void *, DMA_COMPLETION_STATUS)
{
  return (void (__fastcall *)(_DMA_ADAPTER *, _DEVICE_OBJECT *, void *, DMA_COMPLETION_STATUS))((unsigned __int64)FxDmaSystemTransaction::_SystemDmaCompletion & -(__int64)(this->m_TransferCompleteFunction.Method != 0LL));
}
