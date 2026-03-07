__int64 Feature_DropHtTransparentOffThread__private_IsEnabledDeviceUsage()
{
  if ( (Feature_DropHtTransparentOffThread__private_featureState & 0x10) != 0 )
    return Feature_DropHtTransparentOffThread__private_featureState & 1;
  else
    return Feature_DropHtTransparentOffThread__private_IsEnabledFallback(
             (unsigned int)Feature_DropHtTransparentOffThread__private_featureState,
             3LL);
}
