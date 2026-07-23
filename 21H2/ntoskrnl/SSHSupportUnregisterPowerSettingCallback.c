/*
 * XREFs of SSHSupportUnregisterPowerSettingCallback @ 0x1408FBC34
 * Callers:
 *     SshpUninitialize @ 0x140A945A4 (SshpUninitialize.c)
 * Callees:
 *     PoUnregisterPowerSettingCallback @ 0x140772840 (PoUnregisterPowerSettingCallback.c)
 */

NTSTATUS SSHSupportUnregisterPowerSettingCallback()
{
  return PoUnregisterPowerSettingCallback(SshpPowerSettingHandle);
}
