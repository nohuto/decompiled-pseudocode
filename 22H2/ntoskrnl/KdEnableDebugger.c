/*
 * XREFs of KdEnableDebugger @ 0x140510C80
 * Callers:
 *     KdpStub @ 0x14033C8C4 (KdpStub.c)
 *     NtSystemDebugControl @ 0x1407CFB20 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x140A1B320 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x140A1BBA0 (KiFilterFiberContext.c)
 * Callees:
 *     KdEnableDebuggerWithLock @ 0x140510CBC (KdEnableDebuggerWithLock.c)
 *     KeRelaxTimingConstraints @ 0x140511ED8 (KeRelaxTimingConstraints.c)
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
