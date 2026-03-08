/*
 * XREFs of SshpSubscribeCallbacks @ 0x140B5DEEC
 * Callers:
 *     SshInitialize @ 0x140B46C1C (SshInitialize.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x14078C4C0 (ExSubscribeWnfStateChange.c)
 *     SSHSupportRegisterPowerSettingCallback @ 0x1408291F8 (SSHSupportRegisterPowerSettingCallback.c)
 */

int SshpSubscribeCallbacks()
{
  int result; // eax

  result = SSHSupportRegisterPowerSettingCallback();
  if ( result >= 0 )
  {
    SshpPowerSettingHandleInitialized = 1;
    result = ExSubscribeWnfStateChange(
               (__int64)&SshpWnfSubscription,
               (__int64)&WNF_PO_UMPO_SCENARIO_CHANGE,
               1,
               0,
               (__int64)SshpWnfCallback,
               0LL);
    if ( result >= 0 )
    {
      SshpSessionId = 0LL;
      SshpSessionGuid = 0LL;
      SshpWnfSubscriptionInitialized = 1;
    }
  }
  return result;
}
