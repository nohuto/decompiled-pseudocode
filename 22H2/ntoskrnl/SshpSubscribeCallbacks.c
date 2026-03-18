/*
 * XREFs of SshpSubscribeCallbacks @ 0x140B5A6E8
 * Callers:
 *     SshInitialize @ 0x140B51AA0 (SshInitialize.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1407DB2B0 (ExSubscribeWnfStateChange.c)
 *     SSHSupportRegisterPowerSettingCallback @ 0x140825ED0 (SSHSupportRegisterPowerSettingCallback.c)
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
