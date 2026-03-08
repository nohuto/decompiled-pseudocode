/*
 * XREFs of PspFreeRateControl @ 0x1407832C0
 * Callers:
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 *     PspRemoveCpuRateControl @ 0x140783260 (PspRemoveCpuRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1407833A8 (PspAddSchedulingGroupToJobChain.c)
 *     PspRemoveRateControl @ 0x1409AF8BC (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x1409AFE3C (PspSetJobRateControl.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x140696A48 (PsReturnSharedPoolQuota.c)
 *     PspGetRateControlSize @ 0x140783388 (PspGetRateControlSize.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
