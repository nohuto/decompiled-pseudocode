/*
 * XREFs of ?TransferCompleted@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x1C000C780
 * Callers:
 *     <none>
 * Callees:
 *     ?PutScatterGatherList@FxDmaScatterGatherTransaction@@AEAAXPEAU_SCATTER_GATHER_LIST@@@Z @ 0x1C000C6B4 (-PutScatterGatherList@FxDmaScatterGatherTransaction@@AEAAXPEAU_SCATTER_GATHER_LIST@@@Z.c)
 */

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
