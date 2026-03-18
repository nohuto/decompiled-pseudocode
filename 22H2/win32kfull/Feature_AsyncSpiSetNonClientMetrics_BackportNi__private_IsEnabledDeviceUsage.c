/*
 * XREFs of Feature_AsyncSpiSetNonClientMetrics_BackportNi__private_IsEnabledDeviceUsage @ 0x1C013BA9C
 * Callers:
 *     xxxMetricsRecalc @ 0x1C01C88FC (xxxMetricsRecalc.c)
 * Callees:
 *     Feature_AsyncSpiSetNonClientMetrics_BackportNi__private_IsEnabledFallback @ 0x1C013BAD4 (Feature_AsyncSpiSetNonClientMetrics_BackportNi__private_IsEnabledFallback.c)
 */

__int64 Feature_AsyncSpiSetNonClientMetrics_BackportNi__private_IsEnabledDeviceUsage()
{
  if ( (Feature_AsyncSpiSetNonClientMetrics_BackportNi__private_featureState & 0x10) != 0 )
    return Feature_AsyncSpiSetNonClientMetrics_BackportNi__private_featureState & 1;
  else
    return Feature_AsyncSpiSetNonClientMetrics_BackportNi__private_IsEnabledFallback(
             (unsigned int)Feature_AsyncSpiSetNonClientMetrics_BackportNi__private_featureState,
             3LL);
}
