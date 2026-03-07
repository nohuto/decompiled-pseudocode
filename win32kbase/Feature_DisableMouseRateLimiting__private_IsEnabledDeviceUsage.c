__int64 Feature_DisableMouseRateLimiting__private_IsEnabledDeviceUsage()
{
  if ( (Feature_DisableMouseRateLimiting__private_featureState & 0x10) != 0 )
    return Feature_DisableMouseRateLimiting__private_featureState & 1;
  else
    return Feature_DisableMouseRateLimiting__private_IsEnabledFallback(
             (unsigned int)Feature_DisableMouseRateLimiting__private_featureState,
             3LL);
}
