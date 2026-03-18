/*
 * XREFs of KiEndThreadAccountingPeriod @ 0x140248410
 * Callers:
 *     KiScanInterruptObjectList @ 0x140420020 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x140420200 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140420350 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1404204A0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiSpuriousDispatchNoEOI @ 0x1404216A0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140422330 (KxIsrLinkage.c)
 *     KiHvInterruptSubDispatch @ 0x1404261A0 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140426300 (KiVmbusInterruptSubDispatch.c)
 *     KiSwInterrupt @ 0x140426460 (KiSwInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x140427AF0 (KiIpiInterruptSubDispatch.c)
 * Callees:
 *     KiEndThreadAccountingPeriodEx @ 0x140248430 (KiEndThreadAccountingPeriodEx.c)
 */

__int64 __fastcall KiEndThreadAccountingPeriod(__int64 a1, __int64 a2, __int64 a3)
{
  return KiEndThreadAccountingPeriodEx(a1, a2, a3, 0LL);
}
