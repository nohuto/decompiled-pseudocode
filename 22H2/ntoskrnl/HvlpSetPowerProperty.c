/*
 * XREFs of HvlpSetPowerProperty @ 0x1405472F0
 * Callers:
 *     HvlConfigureIdleStates @ 0x140546698 (HvlConfigureIdleStates.c)
 *     HvlRegisterLogicalProcessorFrequency @ 0x140546DF4 (HvlRegisterLogicalProcessorFrequency.c)
 *     HvlRegisterPerfFeedbackCounters @ 0x140546E4C (HvlRegisterPerfFeedbackCounters.c)
 *     HvlSetLogicalProcessorHwpRequest @ 0x140546F40 (HvlSetLogicalProcessorHwpRequest.c)
 *     HvlSetPlatformIdleState @ 0x140546F98 (HvlSetPlatformIdleState.c)
 *     HvlpPowerPolicySettingCallback @ 0x140547230 (HvlpPowerPolicySettingCallback.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403CCD00 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x140540860 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1405414B0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpSetPowerProperty(_OWORD *a1)
{
  PHYSICAL_ADDRESS *v2; // rcx
  __int64 v3; // rax
  __int128 v4; // xmm1
  unsigned int v5; // ebx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]

  v8 = 0LL;
  LODWORD(v9) = 0;
  v7 = 0LL;
  v2 = HvlpAcquireHypercallPage((__int64)&v7, 1, 0LL, 408LL);
  v3 = 3LL;
  do
  {
    *(_OWORD *)&v2->LowPart = *a1;
    *(_OWORD *)&v2[2].LowPart = a1[1];
    *(_OWORD *)&v2[4].LowPart = a1[2];
    *(_OWORD *)&v2[6].LowPart = a1[3];
    *(_OWORD *)&v2[8].LowPart = a1[4];
    *(_OWORD *)&v2[10].LowPart = a1[5];
    *(_OWORD *)&v2[12].LowPart = a1[6];
    v2 += 16;
    v4 = a1[7];
    a1 += 8;
    *(_OWORD *)&v2[-2].LowPart = v4;
    --v3;
  }
  while ( v3 );
  *(_OWORD *)&v2->LowPart = *a1;
  v2[2] = (PHYSICAL_ADDRESS)a1[1];
  v5 = (unsigned __int16)HvcallInitiateHypercall(156) != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)&v7);
  return v5;
}
