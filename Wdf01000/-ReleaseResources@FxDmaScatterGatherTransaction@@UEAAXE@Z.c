void __fastcall FxDmaScatterGatherTransaction::ReleaseResources(
        FxDmaScatterGatherTransaction *this,
        unsigned __int8 __formal)
{
  _SCATTER_GATHER_LIST *m_SGList; // rdx

  m_SGList = this->m_SGList;
  if ( m_SGList )
  {
    FxDmaScatterGatherTransaction::PutScatterGatherList(this, m_SGList);
    this->m_SGList = 0LL;
  }
  this->m_AdapterInfo = 0LL;
}
