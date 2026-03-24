/*
 * XREFs of Feature_1148767544__private_IsEnabledDeviceUsage @ 0x1403F74D4
 * Callers:
 *     NtQueryDirectoryObject @ 0x1406DA180 (NtQueryDirectoryObject.c)
 * Callees:
 *     Feature_1148767544__private_IsEnabledFallback @ 0x1403F750C (Feature_1148767544__private_IsEnabledFallback.c)
 */

__int64 Feature_1148767544__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1148767544__private_featureState & 0x10) != 0 )
    return Feature_1148767544__private_featureState & 1;
  else
    return Feature_1148767544__private_IsEnabledFallback((unsigned int)Feature_1148767544__private_featureState, 3LL);
}
