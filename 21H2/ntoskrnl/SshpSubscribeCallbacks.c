/*
 * XREFs of SshpSubscribeCallbacks @ 0x140B019D0
 * Callers:
 *     SshInitialize @ 0x140B03360 (SshInitialize.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 *     SSHSupportRegisterPowerSettingCallback @ 0x140828B8C (SSHSupportRegisterPowerSettingCallback.c)
 */

int SshpSubscribeCallbacks()
{
  int result; // eax

  result = SSHSupportRegisterPowerSettingCallback();
  if ( result >= 0 )
  {
    SshpPowerSettingHandleInitialized = 1;
    result = ExSubscribeWnfStateChange(
               (int)&SshpWnfSubscription,
               (int)&WNF_PO_UMPO_SCENARIO_CHANGE,
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
