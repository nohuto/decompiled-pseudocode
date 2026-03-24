/*
 * XREFs of SepIsDeviceOwnerProtectionDowngradeAllowed @ 0x140596C88
 * Callers:
 *     SeSecurityModelQueryInformation @ 0x14091CD6C (SeSecurityModelQueryInformation.c)
 * Callees:
 *     <none>
 */

bool SepIsDeviceOwnerProtectionDowngradeAllowed()
{
  return SeDeviceOwnerProtectionDowngradeAllowed != 0;
}
