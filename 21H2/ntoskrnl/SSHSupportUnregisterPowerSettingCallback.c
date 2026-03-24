/*
 * XREFs of SSHSupportUnregisterPowerSettingCallback @ 0x1408FBAD4
 * Callers:
 *     SshpUninitialize @ 0x140A935A4 (SshpUninitialize.c)
 * Callees:
 *     PoUnregisterPowerSettingCallback @ 0x140772680 (PoUnregisterPowerSettingCallback.c)
 */

NTSTATUS SSHSupportUnregisterPowerSettingCallback()
{
  return PoUnregisterPowerSettingCallback(SshpPowerSettingHandle);
}
