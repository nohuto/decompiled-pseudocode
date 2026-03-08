/*
 * XREFs of Feature_VHDAutoAttachOnBoot__private_IsEnabledDeviceUsage @ 0x14040A260
 * Callers:
 *     PipCallDriverAddDevice @ 0x1406C644C (PipCallDriverAddDevice.c)
 *     PipUpdateSetupOobeCompleteWnfCallback @ 0x14094F200 (PipUpdateSetupOobeCompleteWnfCallback.c)
 *     VhdiMountVhdFile @ 0x140A7058C (VhdiMountVhdFile.c)
 *     IopInitializeBootDrivers @ 0x140B57F78 (IopInitializeBootDrivers.c)
 * Callees:
 *     Feature_VHDAutoAttachOnBoot__private_IsEnabledFallback @ 0x14040A298 (Feature_VHDAutoAttachOnBoot__private_IsEnabledFallback.c)
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
