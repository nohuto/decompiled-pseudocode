/*
 * XREFs of PspFreeRateControl @ 0x14065CB8C
 * Callers:
 *     NtSetInformationJobObject @ 0x140614660 (NtSetInformationJobObject.c)
 *     PspAddSchedulingGroupToJobChain @ 0x14065C6DC (PspAddSchedulingGroupToJobChain.c)
 *     PspRemoveCpuRateControl @ 0x14065CB2C (PspRemoveCpuRateControl.c)
 *     PspRemoveRateControl @ 0x1409092CC (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x140909700 (PspSetJobRateControl.c)
 * Callees:
 *     PspGetRateControlSize @ 0x14065CC70 (PspGetRateControlSize.c)
 *     PsReturnSharedPoolQuota @ 0x1406D9184 (PsReturnSharedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
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
