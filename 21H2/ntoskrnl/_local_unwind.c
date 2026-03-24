/*
 * XREFs of _local_unwind @ 0x1403D1B90
 * Callers:
 *     PopThermalZoneDpc @ 0x1402010F0 (PopThermalZoneDpc.c)
 *     ExpTimerDpcRoutine @ 0x1402CDD60 (ExpTimerDpcRoutine.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x14035F730 (KiBalanceSetManagerDeferredRoutine.c)
 *     ExpTimeRefreshDpcRoutine @ 0x14035F840 (ExpTimeRefreshDpcRoutine.c)
 *     ExpCenturyDpcRoutine @ 0x14035F960 (ExpCenturyDpcRoutine.c)
 *     IopIrpStackProfilerDpcRoutine @ 0x14035FA80 (IopIrpStackProfilerDpcRoutine.c)
 *     CmpEnableLazyFlushDpcRoutine @ 0x14035FDD0 (CmpEnableLazyFlushDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x140394BF0 (ExpTimeZoneDpcRoutine.c)
 *     IopTimerDispatch @ 0x140501130 (IopTimerDispatch.c)
 *     SLGetSubscriptionPfn @ 0x14094DF38 (SLGetSubscriptionPfn.c)
 *     KiVerifyXcpt15 @ 0x140A1B320 (KiVerifyXcpt15.c)
 *     KiVerifyXcpt2 @ 0x140A661DC (KiVerifyXcpt2.c)
 *     KiVerifyXcpt1 @ 0x140A66380 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x140A663D0 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140A66420 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140A66470 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140A664C0 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140A66520 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140A66580 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140A665E0 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x140A66640 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt12 @ 0x140A667A0 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140A66810 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140A66860 (KiVerifyXcpt14.c)
 *     KiVerifyXcptFinally @ 0x140A668DC (KiVerifyXcptFinally.c)
 * Callees:
 *     RtlUnwind @ 0x1402D0AF0 (RtlUnwind.c)
 */

__int64 __fastcall local_unwind(unsigned __int64 a1, __int64 a2)
{
  return RtlUnwind(a1, a2, 0LL, 0LL);
}
