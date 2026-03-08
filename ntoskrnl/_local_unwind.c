/*
 * XREFs of _local_unwind @ 0x1403D3990
 * Callers:
 *     IopIrpStackProfilerDpcRoutine @ 0x1402E52E0 (IopIrpStackProfilerDpcRoutine.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x1402EC070 (KiBalanceSetManagerDeferredRoutine.c)
 *     ExpTimerDpcRoutine @ 0x1402FE790 (ExpTimerDpcRoutine.c)
 *     CmpEnableLazyFlushDpcRoutine @ 0x1403C0B20 (CmpEnableLazyFlushDpcRoutine.c)
 *     PopThermalZoneDpc @ 0x1403C7A40 (PopThermalZoneDpc.c)
 *     ExpTimeRefreshDpcRoutine @ 0x1403C7B20 (ExpTimeRefreshDpcRoutine.c)
 *     IopTimerDispatch @ 0x1405538A0 (IopTimerDispatch.c)
 *     ExpCenturyDpcRoutine @ 0x140603990 (ExpCenturyDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x140603E50 (ExpTimeZoneDpcRoutine.c)
 *     SLGetSubscriptionPfn @ 0x1409F7548 (SLGetSubscriptionPfn.c)
 *     KiVerifyXcpt15 @ 0x140B14320 (KiVerifyXcpt15.c)
 *     KiVerifyXcpt2 @ 0x140B5D000 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt13 @ 0x140B5D150 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt5 @ 0x140B5D200 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt4 @ 0x140B5D250 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt3 @ 0x140B5D2A0 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt1 @ 0x140B5D2F0 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt14 @ 0x140B5D390 (KiVerifyXcpt14.c)
 *     KiVerifyXcpt9 @ 0x140B5D3F0 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt8 @ 0x140B5D450 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt7 @ 0x140B5D4B0 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt6 @ 0x140B5D510 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt12 @ 0x140B5D570 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt10 @ 0x140B5D600 (KiVerifyXcpt10.c)
 *     KiVerifyXcptFinally @ 0x140B5D744 (KiVerifyXcptFinally.c)
 * Callees:
 *     RtlUnwind @ 0x1403BE7D0 (RtlUnwind.c)
 */

__int64 __fastcall local_unwind(ULONG_PTR a1, __int64 a2)
{
  return RtlUnwind(a1, a2, 0LL, 0LL);
}
