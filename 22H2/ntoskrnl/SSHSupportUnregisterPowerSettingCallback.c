/*
 * XREFs of SSHSupportUnregisterPowerSettingCallback @ 0x1409A2544
 * Callers:
 *     SshInitialize @ 0x140B51AA0 (SshInitialize.c)
 * Callees:
 *     PoUnregisterPowerSettingCallback @ 0x140987120 (PoUnregisterPowerSettingCallback.c)
 */

NTSTATUS SSHSupportUnregisterPowerSettingCallback()
{
  return PoUnregisterPowerSettingCallback(SshpPowerSettingHandle);
}
