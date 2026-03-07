__int64 Feature_REFSDV__private_IsEnabledNoReporting()
{
  if ( (Feature_REFSDV__private_featureState & 2) != 0 )
    return Feature_REFSDV__private_featureState & 1;
  else
    return Feature_REFSDV__private_IsEnabledFallback((unsigned int)Feature_REFSDV__private_featureState, 0);
}
