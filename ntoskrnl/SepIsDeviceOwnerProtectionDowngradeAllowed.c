/*
 * XREFs of SepIsDeviceOwnerProtectionDowngradeAllowed @ 0x1405B67F4
 * Callers:
 *     SeSecurityModelQueryInformation @ 0x1409C6B7C (SeSecurityModelQueryInformation.c)
 * Callees:
 *     <none>
 */

bool SepIsDeviceOwnerProtectionDowngradeAllowed()
{
  return SeDeviceOwnerProtectionDowngradeAllowed != 0;
}
