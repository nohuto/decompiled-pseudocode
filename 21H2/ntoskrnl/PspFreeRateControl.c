/*
 * XREFs of PspFreeRateControl @ 0x1405D9FBC
 * Callers:
 *     PspAddSchedulingGroupToJobChain @ 0x1405D9B0C (PspAddSchedulingGroupToJobChain.c)
 *     PspRemoveCpuRateControl @ 0x1405D9F5C (PspRemoveCpuRateControl.c)
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 *     PspRemoveRateControl @ 0x1409093DC (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x140909810 (PspSetJobRateControl.c)
 * Callees:
 *     PspGetRateControlSize @ 0x1405DA0A0 (PspGetRateControlSize.c)
 *     PsReturnSharedPoolQuota @ 0x1406551E4 (PsReturnSharedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
