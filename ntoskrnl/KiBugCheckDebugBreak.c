/*
 * XREFs of KiBugCheckDebugBreak @ 0x140567360
 * Callers:
 *     KeBugCheck2 @ 0x140565E90 (KeBugCheck2.c)
 *     KeEnterKernelDebugger @ 0x140566F70 (KeEnterKernelDebugger.c)
 *     KiAttemptBugcheckRecovery @ 0x140577FAC (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     HeadlessDispatch @ 0x140372650 (HeadlessDispatch.c)
 *     DbgBreakPointWithStatus @ 0x1404203E0 (DbgBreakPointWithStatus.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiHeadlessDisplayString @ 0x1405682A0 (KiHeadlessDisplayString.c)
 */

void __fastcall KiBugCheckDebugBreak(ULONG Status)
{
  do
    DbgBreakPointWithStatus(Status);
  while ( Status != 3 );
}
