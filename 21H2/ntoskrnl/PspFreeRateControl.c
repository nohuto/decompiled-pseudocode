/*
 * XREFs of PspFreeRateControl @ 0x140678B4C
 * Callers:
 *     PspRemoveCpuRateControl @ 0x140678AEC (PspRemoveCpuRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x140679480 (PspAddSchedulingGroupToJobChain.c)
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     PspRemoveRateControl @ 0x1409B062C (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x1409B0A5C (PspSetJobRateControl.c)
 * Callees:
 *     PspGetRateControlSize @ 0x140678C2C (PspGetRateControlSize.c)
 *     PsReturnSharedPoolQuota @ 0x140724DC8 (PsReturnSharedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PspFreeRateControl(PVOID *P, unsigned int a2)
{
  PVOID v3; // rcx

  PspGetRateControlSize(a2);
  PsReturnSharedPoolQuota(*P);
  v3 = P[3];
  if ( v3 )
    ExFreePoolWithTag(v3, 0x624A7350u);
  ExFreePoolWithTag(P, 0x624A7350u);
}
