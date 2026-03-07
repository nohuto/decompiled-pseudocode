__int64 Feature_TraceLoggingRapidHpdCompleteAV__private_IsEnabledDeviceUsage()
{
  if ( (Feature_TraceLoggingRapidHpdCompleteAV__private_featureState & 0x10) != 0 )
    return Feature_TraceLoggingRapidHpdCompleteAV__private_featureState & 1;
  else
    return Feature_TraceLoggingRapidHpdCompleteAV__private_IsEnabledFallback(
             (unsigned int)Feature_TraceLoggingRapidHpdCompleteAV__private_featureState,
             3LL);
}
