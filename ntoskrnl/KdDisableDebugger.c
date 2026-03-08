/*
 * XREFs of KdDisableDebugger @ 0x140565110
 * Callers:
 *     NtSystemDebugControl @ 0x140791FE0 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x140B14320 (KiVerifyXcpt15.c)
 *     KeCheckedKernelInitialize @ 0x140B14B50 (KeCheckedKernelInitialize.c)
 *     KiFilterFiberContext @ 0x140B14C30 (KiFilterFiberContext.c)
 * Callees:
 *     KdDisableDebuggerWithLock @ 0x140565128 (KdDisableDebuggerWithLock.c)
 */

NTSTATUS KdDisableDebugger(void)
{
  return KdDisableDebuggerWithLock();
}
