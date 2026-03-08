/*
 * XREFs of SSHSupportUnregisterPowerSettingCallback @ 0x14099F4B4
 * Callers:
 *     SshInitialize @ 0x140B46C1C (SshInitialize.c)
 * Callees:
 *     PoUnregisterPowerSettingCallback @ 0x140984070 (PoUnregisterPowerSettingCallback.c)
 */

NTSTATUS SSHSupportUnregisterPowerSettingCallback()
{
  return PoUnregisterPowerSettingCallback(SshpPowerSettingHandle);
}
