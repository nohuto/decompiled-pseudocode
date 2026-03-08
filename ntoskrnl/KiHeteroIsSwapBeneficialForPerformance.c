/*
 * XREFs of KiHeteroIsSwapBeneficialForPerformance @ 0x140574E70
 * Callers:
 *     KiEvaluatePreemptionSwapTarget @ 0x140574C20 (KiEvaluatePreemptionSwapTarget.c)
 *     KiHeteroScanQueueForPreemptionSwapTarget @ 0x140574F74 (KiHeteroScanQueueForPreemptionSwapTarget.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiHeteroIsSwapBeneficialForPerformance(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int8 a4)
{
  return a2 != a4
      && *(unsigned __int16 *)(a3 + 2LL * a2 + 33212)
       + *(unsigned __int16 *)(a1 + 2LL * a4 + 33212)
       - *(unsigned __int16 *)(a3 + 2LL * a4 + 33212)
       - *(unsigned __int16 *)(a1 + 2LL * a2 + 33212) >= dword_140D1D398;
}
