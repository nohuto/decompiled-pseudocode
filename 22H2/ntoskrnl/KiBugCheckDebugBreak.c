/*
 * XREFs of KiBugCheckDebugBreak @ 0x140569800
 * Callers:
 *     KeBugCheck2 @ 0x140568330 (KeBugCheck2.c)
 *     KeEnterKernelDebugger @ 0x140569410 (KeEnterKernelDebugger.c)
 *     KiAttemptBugcheckRecovery @ 0x14057A4BC (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     HeadlessDispatch @ 0x1403778A0 (HeadlessDispatch.c)
 *     DbgBreakPointWithStatus @ 0x140428770 (DbgBreakPointWithStatus.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     KiHeadlessDisplayString @ 0x14056A740 (KiHeadlessDisplayString.c)
 */

void __fastcall KiBugCheckDebugBreak(ULONG Status)
{
  do
    DbgBreakPointWithStatus(Status);
  while ( Status != 3 );
}
