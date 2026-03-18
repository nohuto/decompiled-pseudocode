/*
 * XREFs of _local_unwind @ 0x1403E0F50
 * Callers:
 *     IopIrpStackProfilerDpcRoutine @ 0x140243B10 (IopIrpStackProfilerDpcRoutine.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x1402470D0 (KiBalanceSetManagerDeferredRoutine.c)
 *     ExpTimerDpcRoutine @ 0x1402566A0 (ExpTimerDpcRoutine.c)
 *     PopThermalZoneDpc @ 0x140376100 (PopThermalZoneDpc.c)
 *     ExpCenturyDpcRoutine @ 0x140378CF0 (ExpCenturyDpcRoutine.c)
 *     IopTimerDispatch @ 0x1403A06D0 (IopTimerDispatch.c)
 *     ExpTimeRefreshDpcRoutine @ 0x1403A13C0 (ExpTimeRefreshDpcRoutine.c)
 *     CmpEnableLazyFlushDpcRoutine @ 0x1403B6350 (CmpEnableLazyFlushDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x1406391E0 (ExpTimeZoneDpcRoutine.c)
 *     SLGetSubscriptionPfn @ 0x1409FA388 (SLGetSubscriptionPfn.c)
 *     KiVerifyXcpt15 @ 0x140AD6320 (KiVerifyXcpt15.c)
 *     KiVerifyXcpt2 @ 0x140B19880 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt1 @ 0x140B19A20 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x140B19A70 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140B19AC0 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140B19B10 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140B19B60 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140B19BC0 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140B19C20 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140B19C80 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x140B19CE0 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt12 @ 0x140B19E40 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140B19EB0 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140B19F00 (KiVerifyXcpt14.c)
 *     KiVerifyXcptFinally @ 0x140B19F7C (KiVerifyXcptFinally.c)
 * Callees:
 *     RtlUnwind @ 0x140387A90 (RtlUnwind.c)
 */

__int64 __fastcall local_unwind(ULONG_PTR a1, __int64 a2)
{
  return RtlUnwind(a1, a2, 0LL, 0LL);
}
