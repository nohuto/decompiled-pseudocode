/*
 * XREFs of Feature_Servicing_b9g4B8t7__private_IsEnabledDeviceUsage @ 0x14040B4CC
 * Callers:
 *     PopFxReleasePowerIrp @ 0x1402BA1B4 (PopFxReleasePowerIrp.c)
 *     PopAllocateIrp @ 0x1402BA774 (PopAllocateIrp.c)
 * Callees:
 *     Feature_Servicing_b9g4B8t7__private_IsEnabledFallback @ 0x14040B504 (Feature_Servicing_b9g4B8t7__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_b9g4B8t7__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_b9g4B8t7__private_featureState & 0x10) != 0 )
    return Feature_Servicing_b9g4B8t7__private_featureState & 1;
  else
    return Feature_Servicing_b9g4B8t7__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_b9g4B8t7__private_featureState,
             3LL);
}
