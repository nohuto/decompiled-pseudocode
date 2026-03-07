__int64 Feature_2721926456__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2721926456__private_featureState & 0x10) != 0 )
    return Feature_2721926456__private_featureState & 1;
  else
    return Feature_2721926456__private_IsEnabledFallback((unsigned int)Feature_2721926456__private_featureState, 3LL);
}
