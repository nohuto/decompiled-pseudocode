/*
 * XREFs of KeQuerySystemTimePrecise @ 0x140341F10
 * Callers:
 *     NtQueryInformationProcess @ 0x1406216C0 (NtQueryInformationProcess.c)
 *     PspUserThreadStartup @ 0x1406BFC00 (PspUserThreadStartup.c)
 *     PspExitThread @ 0x1406C35F8 (PspExitThread.c)
 *     PspAllocateThread @ 0x1406C3E08 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 *     EtwpInitLoggerContext @ 0x140711218 (EtwpInitLoggerContext.c)
 *     EtwpInitializeTimeStamp @ 0x140711604 (EtwpInitializeTimeStamp.c)
 *     EtwpFinalizeHeader @ 0x140713010 (EtwpFinalizeHeader.c)
 *     EtwpTraceSystemShutdown @ 0x140937AD4 (EtwpTraceSystemShutdown.c)
 *     EtwTraceAdminlessAccessFailure @ 0x14093FC88 (EtwTraceAdminlessAccessFailure.c)
 *     EtwTraceLpacAccessFailure @ 0x14093FFA4 (EtwTraceLpacAccessFailure.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140341F30 (RtlGetSystemTimePrecise.c)
 */

LARGE_INTEGER __fastcall KeQuerySystemTimePrecise(LARGE_INTEGER *a1)
{
  LARGE_INTEGER result; // rax

  result = RtlGetSystemTimePrecise();
  *a1 = result;
  return result;
}
