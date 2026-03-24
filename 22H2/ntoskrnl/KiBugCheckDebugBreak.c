/*
 * XREFs of KiBugCheckDebugBreak @ 0x140517D60
 * Callers:
 *     KeBugCheck2 @ 0x140516A10 (KeBugCheck2.c)
 *     KeEnterKernelDebugger @ 0x140517960 (KeEnterKernelDebugger.c)
 * Callees:
 *     HeadlessDispatch @ 0x1403AA580 (HeadlessDispatch.c)
 *     DbgBreakPointWithStatus @ 0x140406F30 (DbgBreakPointWithStatus.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     KiHeadlessDisplayString @ 0x1405184F8 (KiHeadlessDisplayString.c)
 */

void __fastcall KiBugCheckDebugBreak(ULONG Status)
{
  do
    DbgBreakPointWithStatus(Status);
  while ( Status != 3 );
}
