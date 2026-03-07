__int64 Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage()
{
  if ( (Feature_DxgkGpuVaIoMmu__private_featureState & 0x10) != 0 )
    return Feature_DxgkGpuVaIoMmu__private_featureState & 1;
  else
    return Feature_DxgkGpuVaIoMmu__private_IsEnabledFallback(
             (unsigned int)Feature_DxgkGpuVaIoMmu__private_featureState,
             3LL);
}
