__int64 Feature_CompositionTextures__private_IsEnabledDeviceUsage()
{
  if ( (Feature_CompositionTextures__private_featureState & 0x10) != 0 )
    return Feature_CompositionTextures__private_featureState & 1;
  else
    return Feature_CompositionTextures__private_IsEnabledFallback(
             (unsigned int)Feature_CompositionTextures__private_featureState,
             3LL);
}
