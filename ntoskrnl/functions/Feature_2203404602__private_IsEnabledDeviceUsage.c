__int64 Feature_2203404602__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2203404602__private_featureState & 0x10) != 0 )
    return Feature_2203404602__private_featureState & 1;
  else
    return Feature_2203404602__private_IsEnabledFallback((unsigned int)Feature_2203404602__private_featureState, 3LL);
}
