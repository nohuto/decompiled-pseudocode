/*
 * XREFs of ViInitSystemPhase1 @ 0x140B75DE4
 * Callers:
 *     VerifierInitSystem @ 0x140B53244 (VerifierInitSystem.c)
 * Callees:
 *     VfIsRuleClassEnabled @ 0x140ABE5F0 (VfIsRuleClassEnabled.c)
 *     VfPendingInitPhase1 @ 0x140AD2860 (VfPendingInitPhase1.c)
 *     VfFaultsInitPhase1 @ 0x140AD6EA0 (VfFaultsInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x140ADB118 (VfPoolInitPhase1.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x140ADBE88 (VfSettingsMiscellaneousChecksInitPhase1.c)
 */

char ViInitSystemPhase1()
{
  char result; // al

  if ( ViVerifierEnabled )
  {
    VfPoolInitPhase1();
    VfSettingsMiscellaneousChecksInitPhase1();
    VfPendingInitPhase1();
  }
  result = VfIsRuleClassEnabled(2u);
  if ( result )
    result = VfFaultsInitPhase1();
  if ( ViImageExecutionOptions == 1 )
  {
    result = MmWriteableSharedUserData;
    _InterlockedOr((volatile signed __int32 *)(MmWriteableSharedUserData + 928), 1u);
  }
  return result;
}
