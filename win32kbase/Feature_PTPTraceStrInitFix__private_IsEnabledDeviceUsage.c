__int64 Feature_PTPTraceStrInitFix__private_IsEnabledDeviceUsage()
{
  if ( (Feature_PTPTraceStrInitFix__private_featureState & 0x10) != 0 )
    return Feature_PTPTraceStrInitFix__private_featureState & 1;
  else
    return Feature_PTPTraceStrInitFix__private_IsEnabledFallback(
             (unsigned int)Feature_PTPTraceStrInitFix__private_featureState,
             3LL);
}
