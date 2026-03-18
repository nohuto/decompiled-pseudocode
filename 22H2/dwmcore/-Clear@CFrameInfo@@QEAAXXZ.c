/*
 * XREFs of ?Clear@CFrameInfo@@QEAAXXZ @ 0x1800AF87C
 * Callers:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800AF654 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x1801100E8 (memset_0.c)
 */

void __fastcall CFrameInfo::Clear(CFrameInfo *this)
{
  memset_0(this, 0, 0xB0uLL);
  CFrameInfo::ReleaseResponses(this);
}
