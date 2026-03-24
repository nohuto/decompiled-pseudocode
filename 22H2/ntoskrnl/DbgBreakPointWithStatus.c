/*
 * XREFs of DbgBreakPointWithStatus @ 0x140406F30
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x1403643E0 (vDbgPrintExWithPrefixInternal.c)
 *     KdCheckForDebugBreak @ 0x140383F80 (KdCheckForDebugBreak.c)
 *     KiBugCheckDebugBreak @ 0x140517D60 (KiBugCheckDebugBreak.c)
 *     NtSystemDebugControl @ 0x1407CFB20 (NtSystemDebugControl.c)
 *     PopInvokeSystemStateHandler @ 0x14099324C (PopInvokeSystemStateHandler.c)
 *     ExpDebuggerWorker @ 0x1409B5030 (ExpDebuggerWorker.c)
 *     InitBootProcessor @ 0x140A39F24 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall DbgBreakPointWithStatus(ULONG Status)
{
  __debugbreak();
}
