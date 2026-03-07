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
