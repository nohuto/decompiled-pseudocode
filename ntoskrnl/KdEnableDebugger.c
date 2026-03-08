/*
 * XREFs of KdEnableDebugger @ 0x140565340
 * Callers:
 *     KdpStub @ 0x1403CAB44 (KdpStub.c)
 *     NtSystemDebugControl @ 0x140791FE0 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x140B14320 (KiVerifyXcpt15.c)
 *     KeCheckedKernelInitialize @ 0x140B14B50 (KeCheckedKernelInitialize.c)
 *     KiFilterFiberContext @ 0x140B14C30 (KiFilterFiberContext.c)
 * Callees:
 *     KdEnableDebuggerWithLock @ 0x14056537C (KdEnableDebuggerWithLock.c)
 *     KeRelaxTimingConstraints @ 0x140568B0C (KeRelaxTimingConstraints.c)
 */

NTSTATUS KdEnableDebugger(void)
{
  unsigned __int8 v0; // al
  __int64 v1; // rcx
  unsigned int v2; // edi
  NTSTATUS v3; // ebx

  v0 = KeRelaxTimingConstraints(1LL);
  LOBYTE(v1) = 1;
  v2 = v0;
  v3 = KdEnableDebuggerWithLock(v1);
  KeRelaxTimingConstraints(v2);
  return v3;
}
