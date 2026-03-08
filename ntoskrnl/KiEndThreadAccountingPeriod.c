/*
 * XREFs of KiEndThreadAccountingPeriod @ 0x1402566F0
 * Callers:
 *     KiScanInterruptObjectList @ 0x140417C90 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x140417E70 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140417FC0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140418110 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiSpuriousDispatchNoEOI @ 0x140419310 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140419FA0 (KxIsrLinkage.c)
 *     KiHvInterruptSubDispatch @ 0x14041DE10 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x14041DF70 (KiVmbusInterruptSubDispatch.c)
 *     KiSwInterrupt @ 0x14041E0D0 (KiSwInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x14041F760 (KiIpiInterruptSubDispatch.c)
 * Callees:
 *     KiEndThreadAccountingPeriodEx @ 0x140256710 (KiEndThreadAccountingPeriodEx.c)
 */

__int64 __fastcall KiEndThreadAccountingPeriod(__int64 a1, __int64 a2, __int64 a3)
{
  return KiEndThreadAccountingPeriodEx(a1, a2, a3, 0LL);
}
