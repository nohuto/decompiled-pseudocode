/*
 * XREFs of Feature_WatsonFix32512504__private_IsEnabledDeviceUsage @ 0x14040CB78
 * Callers:
 *     EtwpCoverageSamplerQuery @ 0x1408A55B8 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     Feature_WatsonFix32512504__private_IsEnabledFallback @ 0x14040CBB0 (Feature_WatsonFix32512504__private_IsEnabledFallback.c)
 */

__int64 Feature_WatsonFix32512504__private_IsEnabledDeviceUsage()
{
  if ( (Feature_WatsonFix32512504__private_featureState & 0x10) != 0 )
    return Feature_WatsonFix32512504__private_featureState & 1;
  else
    return Feature_WatsonFix32512504__private_IsEnabledFallback(
             (unsigned int)Feature_WatsonFix32512504__private_featureState,
             3LL);
}
