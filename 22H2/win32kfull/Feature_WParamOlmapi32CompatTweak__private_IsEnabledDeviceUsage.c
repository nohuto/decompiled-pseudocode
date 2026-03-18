/*
 * XREFs of Feature_WParamOlmapi32CompatTweak__private_IsEnabledDeviceUsage @ 0x1C013A1DC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C01280D0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     Feature_WParamOlmapi32CompatTweak__private_IsEnabledFallback @ 0x1C013A214 (Feature_WParamOlmapi32CompatTweak__private_IsEnabledFallback.c)
 */

__int64 Feature_WParamOlmapi32CompatTweak__private_IsEnabledDeviceUsage()
{
  if ( (Feature_WParamOlmapi32CompatTweak__private_featureState & 0x10) != 0 )
    return Feature_WParamOlmapi32CompatTweak__private_featureState & 1;
  else
    return Feature_WParamOlmapi32CompatTweak__private_IsEnabledFallback(
             (unsigned int)Feature_WParamOlmapi32CompatTweak__private_featureState,
             3LL);
}
