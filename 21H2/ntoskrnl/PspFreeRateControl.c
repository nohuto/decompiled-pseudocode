/*
 * XREFs of PspFreeRateControl @ 0x14067F51C
 * Callers:
 *     NtSetInformationJobObject @ 0x140614200 (NtSetInformationJobObject.c)
 *     PspAddSchedulingGroupToJobChain @ 0x14067F06C (PspAddSchedulingGroupToJobChain.c)
 *     PspRemoveCpuRateControl @ 0x14067F4BC (PspRemoveCpuRateControl.c)
 *     PspRemoveRateControl @ 0x14090927C (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x1409096B0 (PspSetJobRateControl.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x1406603C4 (PsReturnSharedPoolQuota.c)
 *     PspGetRateControlSize @ 0x14067F600 (PspGetRateControlSize.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall PspFreeRateControl(char **P, unsigned int a2)
{
  ULONG_PTR RateControlSize; // rax
  char *v4; // rcx

  RateControlSize = PspGetRateControlSize(a2);
  PsReturnSharedPoolQuota(*P, RateControlSize, 0LL);
  v4 = P[3];
  if ( v4 )
    ExFreePoolWithTag(v4, 0x624A7350u);
  ExFreePoolWithTag(P, 0x624A7350u);
}
