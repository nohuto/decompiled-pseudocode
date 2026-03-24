/*
 * XREFs of wil_RegisterFeatureStagingChangeNotification @ 0x1405CC564
 * Callers:
 *     CmFcInitSystem1 @ 0x140A59F60 (CmFcInitSystem1.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1403F0554 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x14058E160 (RtlRegisterFeatureConfigurationChangeNotification.c)
 */

_BYTE *wil_RegisterFeatureStagingChangeNotification()
{
  __int64 *i; // rcx
  _BYTE *result; // rax

  for ( i = (__int64 *)&wil_details_featureDescriptors_a; ; i = (__int64 *)(result + 40) )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !result )
      break;
    if ( !result[29] && !result[30] && !result[28] )
    {
      result = (_BYTE *)RtlRegisterFeatureConfigurationChangeNotification(
                          (__int64)wil_details_ReevaluateOnFeatureConfigurationChange,
                          0LL,
                          0LL,
                          (__int64)&wil_details_featureChangeNotification);
      if ( (_DWORD)result )
        wil_details_featureChangeNotification = 0LL;
      return result;
    }
  }
  return result;
}
