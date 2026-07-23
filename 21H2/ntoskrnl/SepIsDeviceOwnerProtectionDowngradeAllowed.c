/*
 * XREFs of SepIsDeviceOwnerProtectionDowngradeAllowed @ 0x140596EB8
 * Callers:
 *     SeSecurityModelQueryInformation @ 0x14091CECC (SeSecurityModelQueryInformation.c)
 * Callees:
 *     <none>
 */

bool SepIsDeviceOwnerProtectionDowngradeAllowed()
{
  return SeDeviceOwnerProtectionDowngradeAllowed != 0;
}
