/*
 * XREFs of SepIsDeviceOwnerProtectionDowngradeAllowed @ 0x140596BC8
 * Callers:
 *     SeSecurityModelQueryInformation @ 0x14091CDBC (SeSecurityModelQueryInformation.c)
 * Callees:
 *     <none>
 */

bool SepIsDeviceOwnerProtectionDowngradeAllowed()
{
  return SeDeviceOwnerProtectionDowngradeAllowed != 0;
}
