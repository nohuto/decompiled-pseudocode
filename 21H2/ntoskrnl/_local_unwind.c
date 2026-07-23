/*
 * XREFs of _local_unwind @ 0x1403D1D00
 * Callers:
 *     PopThermalZoneDpc @ 0x1402010F0 (PopThermalZoneDpc.c)
 *     ExpTimerDpcRoutine @ 0x14024C260 (ExpTimerDpcRoutine.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x1402A4660 (KiBalanceSetManagerDeferredRoutine.c)
 *     ExpTimeRefreshDpcRoutine @ 0x1402A4770 (ExpTimeRefreshDpcRoutine.c)
 *     ExpCenturyDpcRoutine @ 0x1402A4890 (ExpCenturyDpcRoutine.c)
 *     IopIrpStackProfilerDpcRoutine @ 0x1402A49B0 (IopIrpStackProfilerDpcRoutine.c)
 *     CmpEnableLazyFlushDpcRoutine @ 0x1402A4D00 (CmpEnableLazyFlushDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x140394D40 (ExpTimeZoneDpcRoutine.c)
 *     IopTimerDispatch @ 0x1405010B0 (IopTimerDispatch.c)
 *     SLGetSubscriptionPfn @ 0x14094E108 (SLGetSubscriptionPfn.c)
 *     KiVerifyXcpt15 @ 0x140A1C320 (KiVerifyXcpt15.c)
 *     KiVerifyXcpt2 @ 0x140A671DC (KiVerifyXcpt2.c)
 *     KiVerifyXcpt1 @ 0x140A67380 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x140A673D0 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140A67420 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140A67470 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140A674C0 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140A67520 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140A67580 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140A675E0 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x140A67640 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt12 @ 0x140A677A0 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140A67810 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140A67860 (KiVerifyXcpt14.c)
 *     KiVerifyXcptFinally @ 0x140A678DC (KiVerifyXcptFinally.c)
 * Callees:
 *     RtlUnwind @ 0x14024EF80 (RtlUnwind.c)
 */

void __fastcall local_unwind(void *a1, void *a2)
{
  RtlUnwind(a1, a2, 0LL, 0LL);
}
