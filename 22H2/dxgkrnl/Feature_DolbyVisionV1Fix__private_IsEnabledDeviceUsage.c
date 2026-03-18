/*
 * XREFs of Feature_DolbyVisionV1Fix__private_IsEnabledDeviceUsage @ 0x1C0027D08
 * Callers:
 *     ?GetDolbyVisionVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAUEDID_V1_CEA_861_DOLBY_VISION_DATABLOCK@@@Z @ 0x1C0027B50 (-GetDolbyVisionVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAUEDID_V1_CEA_861_DOLBY.c)
 * Callees:
 *     Feature_DolbyVisionV1Fix__private_IsEnabledFallback @ 0x1C0027D40 (Feature_DolbyVisionV1Fix__private_IsEnabledFallback.c)
 */

__int64 Feature_DolbyVisionV1Fix__private_IsEnabledDeviceUsage()
{
  if ( (Feature_DolbyVisionV1Fix__private_featureState & 0x10) != 0 )
    return Feature_DolbyVisionV1Fix__private_featureState & 1;
  else
    return Feature_DolbyVisionV1Fix__private_IsEnabledFallback(
             (unsigned int)Feature_DolbyVisionV1Fix__private_featureState,
             3LL);
}
