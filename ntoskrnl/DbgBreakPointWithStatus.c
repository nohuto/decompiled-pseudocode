/*
 * XREFs of DbgBreakPointWithStatus @ 0x1404203E0
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x1402BDDE0 (vDbgPrintExWithPrefixInternal.c)
 *     KdCheckForDebugBreak @ 0x1402C7D64 (KdCheckForDebugBreak.c)
 *     KiBugCheckDebugBreak @ 0x140567360 (KiBugCheckDebugBreak.c)
 *     NtSystemDebugControl @ 0x140791FE0 (NtSystemDebugControl.c)
 *     PopInvokeSystemStateHandler @ 0x140AA542C (PopInvokeSystemStateHandler.c)
 *     ExpDebuggerWorker @ 0x140AAED30 (ExpDebuggerWorker.c)
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall DbgBreakPointWithStatus(ULONG Status)
{
  __debugbreak();
}
