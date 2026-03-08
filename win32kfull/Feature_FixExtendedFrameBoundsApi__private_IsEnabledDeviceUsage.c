/*
 * XREFs of Feature_FixExtendedFrameBoundsApi__private_IsEnabledDeviceUsage @ 0x1C012F120
 * Callers:
 *     ?GetPhysicalFrameBounds@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C0015B58 (-GetPhysicalFrameBounds@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@@Z.c)
 * Callees:
 *     Feature_FixExtendedFrameBoundsApi__private_IsEnabledFallback @ 0x1C012F158 (Feature_FixExtendedFrameBoundsApi__private_IsEnabledFallback.c)
 */

__int64 Feature_FixExtendedFrameBoundsApi__private_IsEnabledDeviceUsage()
{
  if ( (Feature_FixExtendedFrameBoundsApi__private_featureState & 0x10) != 0 )
    return Feature_FixExtendedFrameBoundsApi__private_featureState & 1;
  else
    return Feature_FixExtendedFrameBoundsApi__private_IsEnabledFallback(
             (unsigned int)Feature_FixExtendedFrameBoundsApi__private_featureState,
             3LL);
}
