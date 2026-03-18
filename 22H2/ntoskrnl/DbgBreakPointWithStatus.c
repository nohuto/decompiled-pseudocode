/*
 * XREFs of DbgBreakPointWithStatus @ 0x140428770
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x14032A5D0 (vDbgPrintExWithPrefixInternal.c)
 *     KdCheckForDebugBreak @ 0x140331CD4 (KdCheckForDebugBreak.c)
 *     KiBugCheckDebugBreak @ 0x140569800 (KiBugCheckDebugBreak.c)
 *     NtSystemDebugControl @ 0x1407E1650 (NtSystemDebugControl.c)
 *     PopInvokeSystemStateHandler @ 0x140AA865C (PopInvokeSystemStateHandler.c)
 *     ExpDebuggerWorker @ 0x140AB2C90 (ExpDebuggerWorker.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall DbgBreakPointWithStatus(ULONG Status)
{
  __debugbreak();
}
