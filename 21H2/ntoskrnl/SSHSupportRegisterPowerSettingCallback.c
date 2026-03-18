/*
 * XREFs of SSHSupportRegisterPowerSettingCallback @ 0x140828B8C
 * Callers:
 *     SshpSubscribeCallbacks @ 0x140B019D0 (SshpSubscribeCallbacks.c)
 * Callees:
 *     PoRegisterPowerSettingCallback @ 0x140762500 (PoRegisterPowerSettingCallback.c)
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
