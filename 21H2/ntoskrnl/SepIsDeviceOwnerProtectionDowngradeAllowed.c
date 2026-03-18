/*
 * XREFs of SepIsDeviceOwnerProtectionDowngradeAllowed @ 0x1405F4C2C
 * Callers:
 *     SeSecurityModelQueryInformation @ 0x1409C674C (SeSecurityModelQueryInformation.c)
 * Callees:
 *     <none>
 */

bool SepIsDeviceOwnerProtectionDowngradeAllowed()
{
  return SeDeviceOwnerProtectionDowngradeAllowed != 0;
}
