/*
 * XREFs of Feature_AlwaysWakeTargetThread__private_IsEnabledDeviceUsage @ 0x1C012D5C0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     Feature_AlwaysWakeTargetThread__private_IsEnabledFallback @ 0x1C012D5F8 (Feature_AlwaysWakeTargetThread__private_IsEnabledFallback.c)
 */

__int64 Feature_AlwaysWakeTargetThread__private_IsEnabledDeviceUsage()
{
  if ( (Feature_AlwaysWakeTargetThread__private_featureState & 0x10) != 0 )
    return Feature_AlwaysWakeTargetThread__private_featureState & 1;
  else
    return Feature_AlwaysWakeTargetThread__private_IsEnabledFallback(
             (unsigned int)Feature_AlwaysWakeTargetThread__private_featureState,
             3LL);
}
