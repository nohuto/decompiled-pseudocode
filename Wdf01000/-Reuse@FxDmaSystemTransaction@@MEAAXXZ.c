void __fastcall FxDmaSystemTransaction::Reuse(FxDmaSystemTransaction *this)
{
  this->m_ConfigureChannelFunction.Method = 0LL;
  this->m_ConfigureChannelContext = 0LL;
  this->m_TransferCompleteFunction.Method = 0LL;
  this->m_TransferCompleteContext = 0LL;
}
