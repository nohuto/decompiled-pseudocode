/*
 * XREFs of ?Clear@CFrameInfo@@QEAAXXZ @ 0x1800AF11C
 * Callers:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800AEEF4 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 */

void __fastcall CFrameInfo::Clear(CFrameInfo *this)
{
  memset_0(this, 0, 0xB0uLL);
  CFrameInfo::ReleaseResponses(this);
}
