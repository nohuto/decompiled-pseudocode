__int64 Feature_WatsonFix32512504__private_IsEnabledDeviceUsage()
{
  if ( (Feature_WatsonFix32512504__private_featureState & 0x10) != 0 )
    return Feature_WatsonFix32512504__private_featureState & 1;
  else
    return Feature_WatsonFix32512504__private_IsEnabledFallback(
             (unsigned int)Feature_WatsonFix32512504__private_featureState,
             3LL);
}
