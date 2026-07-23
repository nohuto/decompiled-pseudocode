/*
 * XREFs of wil_RegisterFeatureStagingChangeNotification @ 0x1405CC564
 * Callers:
 *     CmFcInitSystem1 @ 0x140A59F60 (CmFcInitSystem1.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1403EFE54 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x14058E0A0 (RtlRegisterFeatureConfigurationChangeNotification.c)
 */

int wil_RegisterFeatureStagingChangeNotification()
{
  __int64 *i; // rcx
  __int64 *v1; // rax

  for ( i = (__int64 *)&wil_details_featureDescriptors_a; ; i = v1 + 5 )
  {
    v1 = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !v1 )
      break;
    if ( !*((_BYTE *)v1 + 29) && !*((_BYTE *)v1 + 30) && !*((_BYTE *)v1 + 28) )
    {
      LODWORD(v1) = RtlRegisterFeatureConfigurationChangeNotification(
                      wil_details_ReevaluateOnFeatureConfigurationChange,
                      0LL,
                      0LL,
                      &wil_details_featureChangeNotification);
      if ( (_DWORD)v1 )
        wil_details_featureChangeNotification = 0LL;
      return (int)v1;
    }
  }
  return (int)v1;
}
