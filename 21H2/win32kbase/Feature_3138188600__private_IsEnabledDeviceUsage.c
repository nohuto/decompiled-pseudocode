/*
 * XREFs of Feature_3138188600__private_IsEnabledDeviceUsage @ 0x1C00CE654
 * Callers:
 *     ?CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z @ 0x1C01FE820 (-CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z.c)
 * Callees:
 *     Feature_3138188600__private_IsEnabledFallback @ 0x1C00CE68C (Feature_3138188600__private_IsEnabledFallback.c)
 */

__int64 Feature_3138188600__private_IsEnabledDeviceUsage()
{
  if ( (Feature_3138188600__private_featureState & 0x10) != 0 )
    return Feature_3138188600__private_featureState & 1;
  else
    return Feature_3138188600__private_IsEnabledFallback((unsigned int)Feature_3138188600__private_featureState, 3LL);
}
