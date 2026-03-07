__int64 __fastcall FxDmaScatterGatherTransaction::TransferCompleted(FxDmaScatterGatherTransaction *this)
{
  _SCATTER_GATHER_LIST *m_SGList; // rdx

  m_SGList = this->m_SGList;
  if ( m_SGList )
  {
    FxDmaScatterGatherTransaction::PutScatterGatherList(this, m_SGList);
    this->m_SGList = 0LL;
  }
  return 0LL;
}
