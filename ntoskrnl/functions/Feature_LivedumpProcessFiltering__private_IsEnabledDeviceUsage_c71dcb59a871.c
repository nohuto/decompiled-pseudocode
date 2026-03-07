__int64 Feature_LivedumpProcessFiltering__private_IsEnabledDeviceUsage()
{
  if ( (Feature_LivedumpProcessFiltering__private_featureState & 0x10) != 0 )
    return Feature_LivedumpProcessFiltering__private_featureState & 1;
  else
    return Feature_LivedumpProcessFiltering__private_IsEnabledFallback(
             (unsigned int)Feature_LivedumpProcessFiltering__private_featureState,
             3LL);
}
