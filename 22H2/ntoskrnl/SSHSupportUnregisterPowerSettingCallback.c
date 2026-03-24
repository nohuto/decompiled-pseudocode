/*
 * XREFs of SSHSupportUnregisterPowerSettingCallback @ 0x1408FBB24
 * Callers:
 *     SshpUninitialize @ 0x140A935A4 (SshpUninitialize.c)
 * Callees:
 *     PoUnregisterPowerSettingCallback @ 0x140772340 (PoUnregisterPowerSettingCallback.c)
 */

NTSTATUS SSHSupportUnregisterPowerSettingCallback()
{
  return PoUnregisterPowerSettingCallback(SshpPowerSettingHandle);
}
