/*
 * XREFs of Feature_3071079736__private_IsEnabledDeviceUsage @ 0x1C00D660C
 * Callers:
 *     ?CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z @ 0x1C02345C8 (-CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z.c)
 * Callees:
 *     Feature_3071079736__private_IsEnabledFallback @ 0x1C00D6644 (Feature_3071079736__private_IsEnabledFallback.c)
 */

__int64 Feature_3071079736__private_IsEnabledDeviceUsage()
{
  if ( (Feature_3071079736__private_featureState & 0x10) != 0 )
    return Feature_3071079736__private_featureState & 1;
  else
    return Feature_3071079736__private_IsEnabledFallback((unsigned int)Feature_3071079736__private_featureState, 3LL);
}
