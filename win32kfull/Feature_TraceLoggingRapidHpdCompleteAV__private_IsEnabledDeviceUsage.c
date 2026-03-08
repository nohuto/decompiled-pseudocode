/*
 * XREFs of Feature_TraceLoggingRapidHpdCompleteAV__private_IsEnabledDeviceUsage @ 0x1C012EF94
 * Callers:
 *     ?TraceLoggingRapidHpdComplete@@YAXIIIIIU_GUID@@I@Z @ 0x1C0204D6C (-TraceLoggingRapidHpdComplete@@YAXIIIIIU_GUID@@I@Z.c)
 * Callees:
 *     Feature_TraceLoggingRapidHpdCompleteAV__private_IsEnabledFallback @ 0x1C012EFCC (Feature_TraceLoggingRapidHpdCompleteAV__private_IsEnabledFallback.c)
 */

__int64 Feature_TraceLoggingRapidHpdCompleteAV__private_IsEnabledDeviceUsage()
{
  if ( (Feature_TraceLoggingRapidHpdCompleteAV__private_featureState & 0x10) != 0 )
    return Feature_TraceLoggingRapidHpdCompleteAV__private_featureState & 1;
  else
    return Feature_TraceLoggingRapidHpdCompleteAV__private_IsEnabledFallback(
             (unsigned int)Feature_TraceLoggingRapidHpdCompleteAV__private_featureState,
             3LL);
}
