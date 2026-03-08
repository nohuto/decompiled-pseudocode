/*
 * XREFs of SSHSupportRegisterPowerSettingCallback @ 0x1408291F8
 * Callers:
 *     SshpSubscribeCallbacks @ 0x140B5DEEC (SshpSubscribeCallbacks.c)
 * Callees:
 *     PoRegisterPowerSettingCallback @ 0x14073B960 (PoRegisterPowerSettingCallback.c)
 */

NTSTATUS SSHSupportRegisterPowerSettingCallback()
{
  return PoRegisterPowerSettingCallback(
           0LL,
           &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
           SshpPowerSettingCallback,
           0LL,
           &SshpPowerSettingHandle);
}
