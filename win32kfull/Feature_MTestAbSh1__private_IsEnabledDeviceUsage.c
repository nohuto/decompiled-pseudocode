/*
 * XREFs of Feature_MTestAbSh1__private_IsEnabledDeviceUsage @ 0x1C012D720
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     Feature_MTestAbSh1__private_IsEnabledFallback @ 0x1C012D758 (Feature_MTestAbSh1__private_IsEnabledFallback.c)
 */

__int64 Feature_MTestAbSh1__private_IsEnabledDeviceUsage()
{
  if ( (Feature_MTestAbSh1__private_featureState & 0x10) != 0 )
    return Feature_MTestAbSh1__private_featureState & 1;
  else
    return Feature_MTestAbSh1__private_IsEnabledFallback((unsigned int)Feature_MTestAbSh1__private_featureState, 3LL);
}
