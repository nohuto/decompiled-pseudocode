/*
 * XREFs of ?Dispose@FxDmaScatterGatherTransaction@@UEAAEXZ @ 0x1C001E4D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FreeSgListBuffer@FxDmaScatterGatherTransaction@@AEAAXXZ @ 0x1C001E530 (-FreeSgListBuffer@FxDmaScatterGatherTransaction@@AEAAXXZ.c)
 *     ?Dispose@FxDmaTransactionBase@@UEAAEXZ @ 0x1C001F580 (-Dispose@FxDmaTransactionBase@@UEAAEXZ.c)
 */

unsigned __int8 __fastcall FxDmaScatterGatherTransaction::Dispose(FxDmaScatterGatherTransaction *this)
{
  unsigned __int8 v2; // di

  v2 = FxDmaTransactionBase::Dispose(this);
  if ( this->m_SGListBuffer )
  {
    FxDmaScatterGatherTransaction::FreeSgListBuffer(this);
    this->m_DmaEnabler->Release(
      this->m_DmaEnabler,
      this,
      145,
      "minkernel\\wdf\\framework\\kmdf\\src\\dma\\base\\fxdmatransactionscattergather.cpp");
  }
  return v2;
}
