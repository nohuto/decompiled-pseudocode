/*
 * XREFs of SSHSupportUnregisterPowerSettingCallback @ 0x1409A0CD4
 * Callers:
 *     SshInitialize @ 0x140B03360 (SshInitialize.c)
 * Callees:
 *     PoUnregisterPowerSettingCallback @ 0x1407FC690 (PoUnregisterPowerSettingCallback.c)
 */

NTSTATUS SSHSupportUnregisterPowerSettingCallback()
{
  return PoUnregisterPowerSettingCallback(SshpPowerSettingHandle);
}
