/*
 * XREFs of Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabledDeviceUsage @ 0x14040C8BC
 * Callers:
 *     EtwpEventWriteFull @ 0x1402319C0 (EtwpEventWriteFull.c)
 *     EtwpLogKernelEvent @ 0x1403149F0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x14036F9F8 (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x140384C90 (EtwpLogContextSwapEvent.c)
 *     EtwpWriteUserEvent @ 0x1406AA640 (EtwpWriteUserEvent.c)
 * Callees:
 *     Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabledFallback @ 0x14040C8F4 (Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_featureState & 0x10) != 0 )
    return Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_featureState & 1;
  else
    return Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_PropagateFlagsThroughLostSystemEvent__private_featureState,
             3LL);
}
