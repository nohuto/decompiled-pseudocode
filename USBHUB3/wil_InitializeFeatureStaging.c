/*
 * XREFs of wil_InitializeFeatureStaging @ 0x1C0093008
 * Callers:
 *     DriverEntry @ 0x1C0093228 (DriverEntry.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x1C0076138 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C00930B4 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 */

__int64 wil_InitializeFeatureStaging()
{
  unsigned int v0; // ebx
  _UNKNOWN **i; // rax
  unsigned int v3; // eax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v4 = RtlQueryFeatureConfigurationChangeStamp();
  wil_details_PopulateInitialConfiguredFeatureStates();
  wil_details_EvaluateFeatureDependencies();
  for ( i = &wil_details_featureDescriptors_a; ; ++i )
  {
    if ( i >= (_UNKNOWN **)&wil_details_featureDescriptors_z )
      return v0;
    if ( *i )
      break;
  }
LABEL_6:
  if ( !i )
    return v0;
  if ( *((_BYTE *)i + 29) || *((_BYTE *)i + 30) || *((_BYTE *)i + 28) )
  {
    for ( i += 7; i < (_UNKNOWN **)&wil_details_featureDescriptors_z; ++i )
    {
      if ( *i )
        goto LABEL_6;
    }
    return v0;
  }
  v3 = RtlRegisterFeatureConfigurationChangeNotification(
         wil_details_ReevaluateOnFeatureConfigurationChange,
         0LL,
         &v4,
         &WPP_MAIN_CB.DeviceLock.Header.WaitListHead);
  if ( v3 )
  {
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = 0LL;
    return v3;
  }
  return 0LL;
}
