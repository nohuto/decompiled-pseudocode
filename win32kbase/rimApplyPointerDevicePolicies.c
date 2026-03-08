/*
 * XREFs of rimApplyPointerDevicePolicies @ 0x1C00F1204
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1C01D9C8C (rimProcessPointerDeviceContact.c)
 * Callees:
 *     RIMIsInputSuppressed @ 0x1C0003F78 (RIMIsInputSuppressed.c)
 *     rimPointerTransitionsPolicyUpdateStateAndApply @ 0x1C00F1738 (rimPointerTransitionsPolicyUpdateStateAndApply.c)
 *     RIMCmIsContactSuppressed @ 0x1C00F1A7A (RIMCmIsContactSuppressed.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01D5E18 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C01D61E0 (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimDisplayOffPolicyUpdateStateAndApply @ 0x1C01D6304 (rimDisplayOffPolicyUpdateStateAndApply.c)
 *     rimLidClosedPolicyUpdateStateAndApply @ 0x1C01D8B9C (rimLidClosedPolicyUpdateStateAndApply.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C01D8CE0 (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimOutOfBoundsPolicyUpdateStateAndApply @ 0x1C01D8E70 (rimOutOfBoundsPolicyUpdateStateAndApply.c)
 *     rimPenButtonsPolicyUpdateState @ 0x1C01D8FB8 (rimPenButtonsPolicyUpdateState.c)
 *     rimPredictionPolicyUpdateStateAndApply @ 0x1C01D93A8 (rimPredictionPolicyUpdateStateAndApply.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01DE1B0 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C01DEB84 (RIMCmIsContactDeliveringPointerData.c)
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
  unsigned int v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = 0;
  rimPointerTransitionsPolicyUpdateStateAndApply();
  if ( (unsigned int)RIMIsInputSuppressed(*(_QWORD *)(a1 + 16)) && (*(_DWORD *)(a2 + 8) & 0x400) == 0 )
  {
    RIMCmAddContactSuppressionReasons(a1, a2);
    *(_DWORD *)(a2 + 2444) |= 0x8000u;
  }
  rimDisplayOffPolicyUpdateStateAndApply(a1, a2);
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
    rimOutOfBoundsPolicyUpdateStateAndApply(a1, a2, a7, a8, (__int64)&v15);
    v12 = v15;
  }
  if ( (unsigned int)RIMCmIsContactSuppressed(a2) && (unsigned int)RIMCmIsContactDeliveringPointerData(a2) )
    *(_DWORD *)(a2 + 2444) &= 0xFFFFFFE9;
  v13 = *(_DWORD *)(a2 + 2684);
  if ( (v13 & 4) != 0 && (*(_DWORD *)(a2 + 2444) & 4) == 0 || (v13 & 2) != 0 && (*(_DWORD *)(a2 + 2444) & 2) == 0 )
  {
    v12 = 1;
    *(_QWORD *)(a2 + 2480) = *(_QWORD *)(a2 + 2720);
    *(_QWORD *)(a2 + 2488) = *(_QWORD *)(a2 + 2728);
  }
  return rimPredictionPolicyUpdateStateAndApply(a1, a2, a3, v12);
}
