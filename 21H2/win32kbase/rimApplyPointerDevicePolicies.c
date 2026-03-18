/*
 * XREFs of rimApplyPointerDevicePolicies @ 0x1C00E70E4
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1C01B2140 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     RIMIsInputSuppressed @ 0x1C0004020 (RIMIsInputSuppressed.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C00A2238 (ApiSetGetPowerTransitionsState.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     rimPointerTransitionsPolicyUpdateStateAndApply @ 0x1C00E73C4 (rimPointerTransitionsPolicyUpdateStateAndApply.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01AE67C (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C01AEA44 (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimLidClosedPolicyUpdateStateAndApply @ 0x1C01B11E4 (rimLidClosedPolicyUpdateStateAndApply.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C01B127C (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimOutOfBoundsPolicyUpdateStateAndApply @ 0x1C01B140C (rimOutOfBoundsPolicyUpdateStateAndApply.c)
 *     rimPenButtonsPolicyUpdateState @ 0x1C01B1508 (rimPenButtonsPolicyUpdateState.c)
 *     rimPredictionPolicyUpdateStateAndApply @ 0x1C01B18C4 (rimPredictionPolicyUpdateStateAndApply.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01B61C4 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C01B6928 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C01B6958 (RIMCmIsContactSuppressed.c)
 */

__int64 __fastcall rimApplyPointerDevicePolicies(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        __int64 a8)
{
  unsigned int v12; // esi
  int v13; // ecx
  unsigned int v15[4]; // [rsp+30h] [rbp-88h] BYREF
  _DWORD v16[16]; // [rsp+40h] [rbp-78h] BYREF

  v15[0] = 0;
  rimPointerTransitionsPolicyUpdateStateAndApply();
  if ( (unsigned int)RIMIsInputSuppressed(*(_QWORD *)(a1 + 16)) && (*(_DWORD *)(a2 + 8) & 0x400) == 0 )
  {
    RIMCmAddContactSuppressionReasons(a1, a2);
    *(_DWORD *)(a2 + 2420) |= 0x8000u;
  }
  memset(v16, 0, sizeof(v16));
  ApiSetGetPowerTransitionsState(v16);
  if ( !v16[0] && (*(_DWORD *)(a2 + 8) & 0x80u) == 0 )
  {
    RIMCmAddContactSuppressionReasons(a1, a2);
    *(_DWORD *)(a2 + 2420) |= 0x8000u;
  }
  rimLidClosedPolicyUpdateStateAndApply(a1, a2);
  rimNullXYPolicyUpdateStateAndApply(a1, a2, a4, a5);
  rimConfidenceBitPolicyUpdateStateAndApply(a1, a2, a6);
  rimDigitizerActiveBitPolicyUpdateStateAndApply(a1, a2);
  if ( (unsigned int)(*(_DWORD *)(a1 + 24) - 5) <= 1 )
    rimPenButtonsPolicyUpdateState(a1, a2, a3);
  if ( a4 || a5 || (*(_DWORD *)(a2 + 8) & 0x40) != 0 )
  {
    v12 = 1;
  }
  else
  {
    rimOutOfBoundsPolicyUpdateStateAndApply(a1, a2, a7, a8, (__int64)v15);
    v12 = v15[0];
  }
  if ( (unsigned int)RIMCmIsContactSuppressed(a2) && (unsigned int)RIMCmIsContactDeliveringPointerData(a2) )
    *(_DWORD *)(a2 + 2420) &= 0xFFFFFFE9;
  v13 = *(_DWORD *)(a2 + 2660);
  if ( (v13 & 4) != 0 && (*(_DWORD *)(a2 + 2420) & 4) == 0 || (v13 & 2) != 0 && (*(_DWORD *)(a2 + 2420) & 2) == 0 )
  {
    v12 = 1;
    *(_QWORD *)(a2 + 2456) = *(_QWORD *)(a2 + 2696);
    *(_QWORD *)(a2 + 2464) = *(_QWORD *)(a2 + 2704);
  }
  return rimPredictionPolicyUpdateStateAndApply(a1, a2, a3, v12);
}
