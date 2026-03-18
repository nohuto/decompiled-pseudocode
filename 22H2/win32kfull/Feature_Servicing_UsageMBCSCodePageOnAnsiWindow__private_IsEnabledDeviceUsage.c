/*
 * XREFs of Feature_Servicing_UsageMBCSCodePageOnAnsiWindow__private_IsEnabledDeviceUsage @ 0x1C013CB80
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 * Callees:
 *     Feature_Servicing_UsageMBCSCodePageOnAnsiWindow__private_IsEnabledFallback @ 0x1C013CBB8 (Feature_Servicing_UsageMBCSCodePageOnAnsiWindow__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_UsageMBCSCodePageOnAnsiWindow__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_UsageMBCSCodePageOnAnsiWindow__private_featureState & 0x10) != 0 )
    return Feature_Servicing_UsageMBCSCodePageOnAnsiWindow__private_featureState & 1;
  else
    return Feature_Servicing_UsageMBCSCodePageOnAnsiWindow__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_UsageMBCSCodePageOnAnsiWindow__private_featureState,
             3LL);
}
