__int64 Feature_3058082109__private_IsEnabledDeviceUsage()
{
  if ( (Feature_3058082109__private_featureState & 0x10) != 0 )
    return Feature_3058082109__private_featureState & 1;
  else
    return Feature_3058082109__private_IsEnabledFallback((unsigned int)Feature_3058082109__private_featureState, 3LL);
}
