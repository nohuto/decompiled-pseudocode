/*
 * XREFs of CmFcpManagerComputeMinimumFeatureUsageFlushTimestampIncrement @ 0x14067FC2C
 * Callers:
 *     CmFcManagerFlushFeatureUsage @ 0x14067F5CC (CmFcManagerFlushFeatureUsage.c)
 * Callees:
 *     <none>
 */

char __fastcall CmFcpManagerComputeMinimumFeatureUsageFlushTimestampIncrement(char a1, char a2)
{
  if ( a1 )
    return (a2 != 0) + 2;
  else
    return a2 != 0;
}
