/*
 * XREFs of ?GetNumberOfAvailableMapRegisters@FxDmaScatterGatherTransaction@@MEAAKXZ @ 0x1C00094B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDmaScatterGatherTransaction::GetNumberOfAvailableMapRegisters(FxDmaScatterGatherTransaction *this)
{
  return this->m_AdapterInfo->NumberOfMapRegisters;
}
