/*
 * XREFs of HvlpSetPowerProperty @ 0x1404F8398
 * Callers:
 *     HvlConfigureIdleStates @ 0x1404F76C4 (HvlConfigureIdleStates.c)
 *     HvlRegisterLogicalProcessorFrequency @ 0x1404F7E5C (HvlRegisterLogicalProcessorFrequency.c)
 *     HvlRegisterPerfFeedbackCounters @ 0x1404F7EB4 (HvlRegisterPerfFeedbackCounters.c)
 *     HvlSetPlatformIdleState @ 0x1404F7F4C (HvlSetPlatformIdleState.c)
 *     HvlpPowerPolicySettingCallback @ 0x1404F82A0 (HvlpPowerPolicySettingCallback.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpSetPowerProperty(_OWORD *a1)
{
  _OWORD *v2; // rcx
  __int64 v3; // r9
  __int64 v4; // rax
  __int128 v5; // xmm1
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  v2 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v9, 1, 0LL, 408LL);
  v4 = 3LL;
  do
  {
    *v2 = *a1;
    v2[1] = a1[1];
    v2[2] = a1[2];
    v2[3] = a1[3];
    v2[4] = a1[4];
    v2[5] = a1[5];
    v2[6] = a1[6];
    v2 += 8;
    v5 = a1[7];
    a1 += 8;
    *(v2 - 1) = v5;
    --v4;
  }
  while ( v4 );
  v6 = *((_QWORD *)&v10 + 1);
  *v2 = *a1;
  *((_QWORD *)v2 + 2) = *((_QWORD *)a1 + 2);
  v7 = (unsigned __int16)HvcallInitiateHypercall(156, v6, 0LL, v3) != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)&v9);
  return v7;
}
