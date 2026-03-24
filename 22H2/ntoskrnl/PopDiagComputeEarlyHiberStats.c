/*
 * XREFs of PopDiagComputeEarlyHiberStats @ 0x140990D9C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeGetPrcb @ 0x140228DF0 (KeGetPrcb.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x1403829F0 (HvlQueryHypervisorTscAdjustment.c)
 *     PopCaptureTimeOnProcZero @ 0x140990E6C (PopCaptureTimeOnProcZero.c)
 */

__int64 PopDiagComputeEarlyHiberStats()
{
  __int64 HypervisorTscAdjustment; // rax
  __int64 v1; // rcx
  __int64 result; // rax

  qword_140C240A8 = PopCaptureTimeOnProcZero();
  qword_140C24070 = 1000LL * *(unsigned int *)(KeGetPrcb(0) + 68);
  HypervisorTscAdjustment = HvlQueryHypervisorTscAdjustment();
  v1 = qword_140C24068 - HypervisorTscAdjustment;
  qword_140C24098 = HypervisorTscAdjustment;
  result = qword_140C24090 + HypervisorTscAdjustment;
  qword_140C24080 -= result;
  qword_140C240A0 -= result;
  qword_140C24068 = v1;
  qword_140C240A8 -= result;
  qword_140C23FF8 = v1 - qword_140C24000;
  return result;
}
