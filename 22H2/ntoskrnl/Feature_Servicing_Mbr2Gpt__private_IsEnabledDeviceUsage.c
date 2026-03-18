/*
 * XREFs of Feature_Servicing_Mbr2Gpt__private_IsEnabledDeviceUsage @ 0x140412120
 * Callers:
 *     BiUpdateBcdObject @ 0x140806888 (BiUpdateBcdObject.c)
 *     ExpTranslateNtPath @ 0x1409FE50C (ExpTranslateNtPath.c)
 * Callees:
 *     Feature_Servicing_Mbr2Gpt__private_IsEnabledFallback @ 0x140412158 (Feature_Servicing_Mbr2Gpt__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_Mbr2Gpt__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_Mbr2Gpt__private_featureState & 0x10) != 0 )
    return Feature_Servicing_Mbr2Gpt__private_featureState & 1;
  else
    return Feature_Servicing_Mbr2Gpt__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_Mbr2Gpt__private_featureState,
             3LL);
}
