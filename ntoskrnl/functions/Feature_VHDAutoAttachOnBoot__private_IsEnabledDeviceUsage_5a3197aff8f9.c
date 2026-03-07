__int64 Feature_VHDAutoAttachOnBoot__private_IsEnabledDeviceUsage()
{
  if ( (Feature_VHDAutoAttachOnBoot__private_featureState & 0x10) != 0 )
    return Feature_VHDAutoAttachOnBoot__private_featureState & 1;
  else
    return Feature_VHDAutoAttachOnBoot__private_IsEnabledFallback(
             (unsigned int)Feature_VHDAutoAttachOnBoot__private_featureState,
             3LL);
}
