/*
 * XREFs of Feature_VHDAutoAttachOnBoot__private_IsEnabledDeviceUsage @ 0x14040F7B4
 * Callers:
 *     PipCallDriverAddDevice @ 0x1406C82E4 (PipCallDriverAddDevice.c)
 *     PipUpdateSetupOobeCompleteWnfCallback @ 0x140952220 (PipUpdateSetupOobeCompleteWnfCallback.c)
 *     VhdiMountVhdFile @ 0x140A7328C (VhdiMountVhdFile.c)
 *     IopInitializeBootDrivers @ 0x140B405B4 (IopInitializeBootDrivers.c)
 * Callees:
 *     Feature_VHDAutoAttachOnBoot__private_IsEnabledFallback @ 0x14040F7EC (Feature_VHDAutoAttachOnBoot__private_IsEnabledFallback.c)
 */

__int64 Feature_VHDAutoAttachOnBoot__private_IsEnabledDeviceUsage()
{
  if ( (Feature_VHDAutoAttachOnBoot__private_featureState & 0x10) != 0 )
    return Feature_VHDAutoAttachOnBoot__private_featureState & 1;
  else
    return Feature_VHDAutoAttachOnBoot__private_IsEnabledFallback(
             (unsigned int)Feature_VHDAutoAttachOnBoot__private_featureState,
             3LL);
}
