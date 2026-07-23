/*
 * XREFs of _local_unwind @ 0x1403D1490
 * Callers:
 *     PopThermalZoneDpc @ 0x1402010F0 (PopThermalZoneDpc.c)
 *     CmpEnableLazyFlushDpcRoutine @ 0x1402F2BE0 (CmpEnableLazyFlushDpcRoutine.c)
 *     IopIrpStackProfilerDpcRoutine @ 0x1402F2CB0 (IopIrpStackProfilerDpcRoutine.c)
 *     ExpCenturyDpcRoutine @ 0x1402F3000 (ExpCenturyDpcRoutine.c)
 *     ExpTimeRefreshDpcRoutine @ 0x1402F3120 (ExpTimeRefreshDpcRoutine.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x1402F3240 (KiBalanceSetManagerDeferredRoutine.c)
 *     ExpTimerDpcRoutine @ 0x140327160 (ExpTimerDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x1403944F0 (ExpTimeZoneDpcRoutine.c)
 *     IopTimerDispatch @ 0x140500DB0 (IopTimerDispatch.c)
 *     SLGetSubscriptionPfn @ 0x14094DF88 (SLGetSubscriptionPfn.c)
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
 *     RtlUnwind @ 0x140329E00 (RtlUnwind.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  RtlUnwind(a1, a2, 0LL, 0LL);
}
